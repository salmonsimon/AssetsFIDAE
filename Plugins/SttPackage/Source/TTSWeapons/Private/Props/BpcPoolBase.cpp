// Fill out your copyright notice in the Description page of Project Settings.


#include "Props/BpcPoolBase.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Props/PoolableActor.h"

// ============================================================
// UBpcPoolBase
// Implementacion del componente de pooling generico.
//
// Idea central:
// - El pool "posee" un conjunto de actores.
// - Los actores disponibles se guardan ocultos/sin colision/sin tick.
// - Al pedir uno, se activa y sale del conjunto disponible.
// - Al devolverlo, vuelve al estado inactivo.
// ============================================================
UBpcPoolBase::UBpcPoolBase()
{
	// El pool no necesita Tick: opera por llamadas puntuales (spawn/take/return).
	PrimaryComponentTick.bCanEverTick = false;
}


void UBpcPoolBase::BeginPlay()
{
	// Primero respetamos flujo normal de UActorComponent.
	Super::BeginPlay();

	// Permite inicializacion automatica para no depender de Blueprint en casos simples.
	if (bStartInitialized)
	{
		InitPool();
	}
}


void UBpcPoolBase::InitPool()
{
	// Evita reinicializaciones accidentales.
	if (bIsInitialized)
	{
		return;
	}

	if (!GetWorld())
	{
		// Sin mundo no se puede spawnear ningun actor.
		// Se registra warning para facilitar diagnostico.
		UE_LOG(LogTemp, Warning, TEXT("UBpcPoolBase::InitPool failed: invalid world."));
		return;
	}

	if (!PooledActorClass)
	{
		// Sin clase objetivo, el pool no sabe que tipo de actor crear.
		UE_LOG(LogTemp, Warning, TEXT("UBpcPoolBase::InitPool failed: PooledActorClass not set on %s."), *GetNameSafe(this));
		return;
	}

	bIsInitialized = true;

	// Precalienta la cantidad inicial para reducir spawns en tiempo de juego.
	if (InitialPoolSize > 0)
	{
		FillPool(InitialPoolSize);
	}
}


int32 UBpcPoolBase::FillPool(int32 Amount)
{
	// Sin cantidad valida, no se hace trabajo.
	if (Amount <= 0)
	{
		return 0;
	}

	UWorld* World = GetWorld();
	if (!World)
	{
		// Seguridad: FillPool tambien valida mundo para llamadas manuales en runtime.
		UE_LOG(LogTemp, Warning, TEXT("UBpcPoolBase::FillPool failed: invalid world."));
		return 0;
	}

	if (!PooledActorClass)
	{
		// Seguridad: FillPool tambien valida clase por si InitPool se saltea.
		UE_LOG(LogTemp, Warning, TEXT("UBpcPoolBase::FillPool failed: PooledActorClass not set on %s."), *GetNameSafe(this));
		return 0;
	}

	if (!bIsInitialized)
	{
		bIsInitialized = true;
	}

	const FTransform SpawnTransform = GetOwner() ? GetOwner()->GetActorTransform() : FTransform::Identity;
	FActorSpawnParameters SpawnParams;
	// Owner/Instigator facilitan trazabilidad y reglas de gameplay.
	SpawnParams.Owner = GetOwner();
	SpawnParams.Instigator = GetOwner() ? GetOwner()->GetInstigator() : nullptr;
	// AlwaysSpawn evita que una colision en spawn anule el alta de pool.
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	int32 AddedActors = 0;
	for (int32 Index = 0; Index < Amount; ++Index)
	{
		// Se spawnea con Owner = duenio del componente para mantener contexto de gameplay.
		AActor* SpawnedActor = World->SpawnActor<AActor>(PooledActorClass, SpawnTransform, SpawnParams);
		if (!IsValid(SpawnedActor))
		{
			// Si una instancia falla, se continua con las restantes.
			continue;
		}

		// Se guarda inmediatamente en estado inactivo dentro del pool.
		ConfigureActorForPool(SpawnedActor);
		AllPooledActors.Add(SpawnedActor);
		AvailableActors.Add(SpawnedActor);
		++AddedActors;
	}

	return AddedActors;
}


AActor* UBpcPoolBase::GetAvailableActor(const FTransform& SpawnTransform)
{
	// Lazy init por seguridad si alguien olvida llamar InitPool de forma explicita.
	if (!bIsInitialized)
	{
		InitPool();
	}

	// Limpieza de punteros colgantes antes de operar.
	PruneInvalidActors();

	if (AvailableActors.Num() == 0 && bAutoExpand)
	{
		// Auto expand para evitar nulls en gameplay de alta frecuencia.
		FillPool(FMath::Max(1, AutoExpandAmount));
		PruneInvalidActors();
	}

	if (AvailableActors.Num() == 0)
	{
		// Si no se pudo crecer o bAutoExpand=false, se retorna null con warning.
		UE_LOG(LogTemp, Warning, TEXT("UBpcPoolBase::GetAvailableActor: pool is empty on %s."), *GetNameSafe(this));
		return nullptr;
	}

	// Politica LIFO: Pop del final por eficiencia y mejor cache locality.
	AActor* PooledActor = AvailableActors.Pop(EAllowShrinking::No);
	if (!IsValid(PooledActor))
	{
		// Si aparece un invalido aqui, se notifica con null y la siguiente llamada ya operara sobre arrays podados.
		return nullptr;
	}

	// El actor pasa de estado inactivo a estado activo.
	ActivateActorFromPool(PooledActor, SpawnTransform);
	return PooledActor;
}


bool UBpcPoolBase::ReturnActorToPool(AActor* Actor)
{
	// No se aceptan punteros nulos o destruidos.
	if (!IsValid(Actor))
	{
		return false;
	}

	// Seguridad fuerte: nunca aceptar actores que no nacieron en este pool.
	if (!AllPooledActors.Contains(Actor))
	{
		UE_LOG(LogTemp, Warning, TEXT("UBpcPoolBase::ReturnActorToPool failed: actor %s does not belong to pool %s."), *GetNameSafe(Actor), *GetNameSafe(this));
		return false;
	}

	if (AvailableActors.Contains(Actor))
	{
		// Comportamiento idempotente:
		// si el actor ya estaba retornado, se considera "ok" y no se trata como error.
		return true;
	}

	// El actor vuelve al estado inactivo y queda disponible para reutilizacion.
	ConfigureActorForPool(Actor);
	AvailableActors.Add(Actor);
	LogPoolLifecycleIfEnabled(TEXT("RETURN"), Actor);
	return true;
}


void UBpcPoolBase::ConfigureActorForPool(AActor* Actor)
{
	// Guarda fuerte contra punteros invalidos.
	if (!IsValid(Actor))
	{
		return;
	}

	if (Actor->GetClass()->ImplementsInterface(UPoolableActor::StaticClass()))
	{
		// Se registra explicitamente el pool dueno.
		// Esto evita ambiguedad cuando el mismo Owner tiene mas de un componente de pool.
		IPoolableActor::Execute_SetPoolSource(Actor, this);

		// Hook de retorno para que el actor resetee timers/estado propio.
		IPoolableActor::Execute_OnReturnedToPool(Actor);
	}

	if (bDetachFromParentOnReturn)
	{
		Actor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	}

	if (bResetRigidBodyStateOnReturn)
	{
		ResetRigidBodyStateForPool(Actor);
	}

	if (bManagePhysicsAndGravityState)
	{
		ApplyPhysicsAndGravityState(Actor, bEnablePhysicsInPool, bEnableGravityInPool);
	}

	// Estado "guardado en pool": invisible, sin colision y sin tick.
	// Nota: se apaga tick a nivel Actor para reducir costo cuando hay muchos objetos en espera.
	Actor->SetActorHiddenInGame(true);
	Actor->SetActorEnableCollision(false);
	Actor->SetActorTickEnabled(false);
}


void UBpcPoolBase::ActivateActorFromPool(AActor* Actor, const FTransform& SpawnTransform)
{
	// Guarda fuerte contra punteros invalidos.
	if (!IsValid(Actor))
	{
		return;
	}

	// Reposiciona/rota antes de exponerlo al juego.
	Actor->SetActorTransform(SpawnTransform, false, nullptr, bTeleportPhysicsOnActivate ? ETeleportType::TeleportPhysics : ETeleportType::None);
	// Reactiva visibilidad/collision/tick para uso normal.
	Actor->SetActorHiddenInGame(false);
	Actor->SetActorEnableCollision(true);
	Actor->SetActorTickEnabled(true);

	if (bManagePhysicsAndGravityState)
	{
		ApplyPhysicsAndGravityState(Actor, bEnablePhysicsWhenActive, bEnableGravityWhenActive);
	}

	if (Actor->GetClass()->ImplementsInterface(UPoolableActor::StaticClass()))
	{
		// Se vuelve a escribir el pool dueno para blindar escenarios con multiples pools.
		IPoolableActor::Execute_SetPoolSource(Actor, this);

		// Hook de activacion para reiniciar fisica, timers y logica propia del actor.
		IPoolableActor::Execute_OnTakenFromPool(Actor);
	}

	LogPoolLifecycleIfEnabled(TEXT("TAKE"), Actor);
}


void UBpcPoolBase::ResetRigidBodyStateForPool(AActor* Actor) const
{
	if (!IsValid(Actor))
	{
		return;
	}

	TInlineComponentArray<UPrimitiveComponent*> PrimitiveComponents;
	Actor->GetComponents(PrimitiveComponents);

	for (UPrimitiveComponent* PrimitiveComponent : PrimitiveComponents)
	{
		if (!IsValid(PrimitiveComponent))
		{
			continue;
		}

		PrimitiveComponent->SetAllPhysicsLinearVelocity(FVector::ZeroVector, false);
		PrimitiveComponent->SetAllPhysicsAngularVelocityInDegrees(FVector::ZeroVector, false);
		PrimitiveComponent->PutAllRigidBodiesToSleep();
	}
}


void UBpcPoolBase::ApplyPhysicsAndGravityState(AActor* Actor, bool bEnablePhysics, bool bEnableGravity) const
{
	if (!IsValid(Actor))
	{
		return;
	}

	TInlineComponentArray<UPrimitiveComponent*> PrimitiveComponents;
	Actor->GetComponents(PrimitiveComponents);

	for (UPrimitiveComponent* PrimitiveComponent : PrimitiveComponents)
	{
		if (!IsValid(PrimitiveComponent) || !PrimitiveComponent->CanEditSimulatePhysics())
		{
			continue;
		}

		PrimitiveComponent->SetSimulatePhysics(bEnablePhysics);
		PrimitiveComponent->SetEnableGravity(bEnableGravity);

		if (bEnablePhysics)
		{
			PrimitiveComponent->WakeAllRigidBodies();
		}
		else
		{
			PrimitiveComponent->PutAllRigidBodiesToSleep();
		}
	}
}


void UBpcPoolBase::LogPoolLifecycleIfEnabled(const TCHAR* Action, const AActor* Actor) const
{
	if (!bLogPoolLifecycle)
	{
		return;
	}

	UE_LOG(
		LogTemp,
		Log,
		TEXT("UBpcPoolBase::%s pool=%s actor=%s available=%d total=%d"),
		Action,
		*GetNameSafe(this),
		*GetNameSafe(Actor),
		AvailableActors.Num(),
		AllPooledActors.Num());
}


void UBpcPoolBase::PruneInvalidActors()
{
	// Quita referencias muertas del universo total del pool.
	AllPooledActors.RemoveAll([](const TObjectPtr<AActor>& Actor)
	{
		return !IsValid(Actor);
	});

	// Quita referencias muertas del conjunto de disponibles.
	AvailableActors.RemoveAll([](const TObjectPtr<AActor>& Actor)
	{
		return !IsValid(Actor);
	});
}

