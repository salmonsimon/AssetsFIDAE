// Fill out your copyright notice in the Description page of Project Settings.


#include "Props/BulletShell.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "Props/BpcPoolBase.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Sound/SoundBase.h"
#include "Sound/SoundCue.h"
#include "TimerManager.h"

// ============================================================
// ABulletShell
// Implementacion del actor de casquillo reusable.
//
// Flujo resumido:
// 1) El pool activa el actor -> OnTakenFromPool_Implementation().
// 2) Se ejecuta ActivateEjection() con direccion estable + variacion minima.
// 3) Al impactar (OnHit) se programa retorno.
// 4) Si no impacta, ActiveFailSafeTimer fuerza retorno.
// ============================================================

ABulletShell::ABulletShell()
{
 	// El casquillo no necesita Tick constante: toda la logica es por eventos/temporizadores.
	PrimaryActorTick.bCanEverTick = false;
	BulletShellMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BulletShellMesh"));
	BulletShellMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);

	SetRootComponent(BulletShellMesh);

	// Simulacion fisica para que la eyeccion sea natural y compatible con rebotes.
	BulletShellMesh->SetSimulatePhysics(true);
	BulletShellMesh->SetEnableGravity(true);
	BulletShellMesh->SetNotifyRigidBodyCollision(true);
}

// Called when the game starts or when spawned
void ABulletShell::BeginPlay()
{
	// Flujo base de actor Unreal.
	Super::BeginPlay();

	// Cachea una sola vez el valor base configurado para restaurarlo tras cada retorno al pool.
	if (!bHasCachedStableSpinSpeed)
	{
		CachedStableSpinSpeedDegPerSec = StableSpinSpeedDegPerSec;
		bHasCachedStableSpinSpeed = true;
	}
	
	// Registra callback de colision.
	BulletShellMesh->OnComponentHit.AddDynamic(this, &ABulletShell::OnHit);

	// Si ya existe un pool asociado (por SetPoolSource o fallback por owner), lo registramos.
	// Importante: no ejecutamos eyeccion en BeginPlay de actores creados para "llenar pool".
	if (UBpcPoolBase* PoolComponent = ResolvePoolComponent())
	{
		// Guarda referencia explicita al pool para evitar ambiguedad con multiples pools.
		IPoolableActor::Execute_SetPoolSource(this, PoolComponent);
	}
	else
	{
		// Modo sin pool: el actor se comporta como spawn normal y se activa una sola vez.
		OnTakenFromPool_Implementation();
	}
	
}


void ABulletShell::ActivateEjection(const FTransform& EjectionTransform)
{
	// Si no hay mesh, no hay superficie fisica sobre la cual aplicar impulso.
	if (!BulletShellMesh)
	{
		return;
	}

	// 1) El actor se posiciona/orienta exactamente en el transform pedido para la eyeccion.
	SetActorTransform(EjectionTransform);

	// 2) Garantiza que fisica este activa antes de aplicar impulsos.
	BulletShellMesh->SetSimulatePhysics(true);
	BulletShellMesh->SetEnableGravity(true);
	// Muy importante para pool:
	// OnReturnedToPool lo apaga, por lo tanto debemos reactivarlo al volver a usar el actor.
	BulletShellMesh->SetNotifyRigidBodyCollision(true);
	BulletShellMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	// 3) Limpieza obligatoria de velocidades previas para que el pool no arrastre estado.
	BulletShellMesh->SetPhysicsLinearVelocity(FVector::ZeroVector);
	BulletShellMesh->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
	BulletShellMesh->WakeAllRigidBodies();

	// 4) Direccion base estable usando ejes del actor (Right/Up/Forward) con pesos configurables.
	const FVector BaseDirection = BuildBaseEjectionDirection();

	// 5) Seleccion de fuente de aleatoriedad:
	//    - RandomSeed >= 0: reproducible
	//    - RandomSeed < 0: aleatorio normal del motor
	FRandomStream SeededStream;
	FRandomStream* SeededStreamPtr = nullptr;
	if (RandomSeed >= 0)
	{
		// Cada activacion incrementa secuencia para no repetir exactamente el mismo vector
		// en todos los disparos cuando se usa semilla fija.
		SeededStream.Initialize(RandomSeed + EjectionActivationCount);
		SeededStreamPtr = &SeededStream;
		++EjectionActivationCount;
	}

	// 6) Spread minimo en cono alrededor de la direccion base.
	const FVector DirWithSpread = GenerateDirectionWithConeSpread(BaseDirection, SeededStreamPtr);

	// 7) Impulso lineal final.
	const FVector ImpulseFinal = DirWithSpread * ResolveImpulseStrengthForRuntime();
	BulletShellMesh->AddImpulse(ImpulseFinal, NAME_None, bImpulseVelChange);

	// 8) Impulso angular aleatorio e independiente del lineal.
	if (bUseStableSpinSystem)
	{
		// Modo de spin estable:
		// en lugar de impulso angular completamente aleatorio (que puede producir "8"),
		// forzamos velocidad angular sobre un eje principal configurable.
		FVector StableAxisLocal = StableSpinAxisLocal;
		if (StableAxisLocal.IsNearlyZero())
		{
			StableAxisLocal = FVector(1.0f, 0.0f, 0.0f);
		}

		// Convierte eje local del actor a eje mundo.
		const FVector StableAxisWorldBase = EjectionTransform.TransformVectorNoScale(StableAxisLocal).GetSafeNormal();
		FVector StableAxisWorld = StableAxisWorldBase.IsNearlyZero() ? EjectionTransform.GetRotation().GetForwardVector() : StableAxisWorldBase;

		// Jitter pequeno para mantener naturalidad sin perder estabilidad.
		if (StableSpinAxisJitterDeg > 0.0f)
		{
			StableAxisWorld = GenerateDirectionWithConeSpread(StableAxisWorld, SeededStreamPtr);
		}

		float SpinSign = 1.0f;
		if (bRandomizeStableSpinDirection)
		{
			const float Selector = SeededStreamPtr ? SeededStreamPtr->FRand() : FMath::FRand();
			SpinSign = (Selector < 0.5f) ? -1.0f : 1.0f;
		}

		// Set directo de velocidad angular para giro limpio y consistente.
		const FVector StableAngularVelocity = StableAxisWorld * StableSpinSpeedDegPerSec * SpinSign;
		BulletShellMesh->SetPhysicsAngularVelocityInDegrees(StableAngularVelocity, false);
	}
	else
	{
		// Sistema angular manual/original.
		const FVector RandomAngularVector = GenerateRandomUnitVector(SeededStreamPtr) * AngularImpulseStrength;
		BulletShellMesh->AddAngularImpulseInDegrees(RandomAngularVector);
	}
}

void ABulletShell::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Nota: HitComp/OtherActor/... no se usan por ahora.
	// Se mantienen en firma porque OnComponentHit los exige.

	// Si ya esta en pool, cualquier hit tardio se ignora.
	if (bIsInPool)
	{
		return;
	}

	// Solo procesa bloqueos reales (descarta eventos de contacto no bloqueante).
	if (!Hit.bBlockingHit)
	{
		return;
	}

	// Ignora auto-colisiones de componente.
	if (OtherComp == BulletShellMesh)
	{
		return;
	}

	AActor* OwnerActor = GetOwner();

	// Ignora auto-colisiones/owner y choques entre casquillos.
	if (OtherActor)
	{
		if (OtherActor == this || OtherActor == OwnerActor || OtherActor->IsA(ABulletShell::StaticClass()))
		{
			return;
		}

		if (OwnerActor && (OtherActor->IsOwnedBy(OwnerActor) || OwnerActor->IsOwnedBy(OtherActor)))
		{
			return;
		}
	}

	// Ignora micro-hits inmediatamente despues de la activacion para evitar retornos "en aire".
	if (MinHitAgeSeconds > 0.f && ActivationWorldTimeSeconds >= 0.f && GetWorld())
	{
		const float ActiveAgeSeconds = GetWorld()->GetTimeSeconds() - ActivationWorldTimeSeconds;
		if (ActiveAgeSeconds < MinHitAgeSeconds)
		{
			return;
		}
	}

	++HitCountSinceActivation;
	const int32 SafeHitsBeforeStop = FMath::Clamp(HitsBeforeForceStop, 1, 6);
	const bool bShouldForceStopNow = HitCountSinceActivation >= SafeHitsBeforeStop;

	if (BulletShellMesh)
	{
		// En modo spin estable, el primer hit baja spin para evitar trompo.
		// Al hit configurado (1 o 2), forzamos reposo total.
		if (bUseStableSpinSystem && !bShouldForceStopNow)
		{
			const FVector CurrentAngularVelocity = BulletShellMesh->GetPhysicsAngularVelocityInDegrees();
			FVector SpinAxis = CurrentAngularVelocity.IsNearlyZero() ? GetActorUpVector() : CurrentAngularVelocity.GetSafeNormal();
			if (SpinAxis.IsNearlyZero())
			{
				SpinAxis = FVector::UpVector;
			}

			const float HitStableSpinSpeed = FMath::Max(0.0f, StableSpinSpeedOnHitDegPerSec);
			BulletShellMesh->SetPhysicsAngularVelocityInDegrees(SpinAxis * HitStableSpinSpeed, false);
			StableSpinSpeedDegPerSec = HitStableSpinSpeed;
		}

		if (bShouldForceStopNow)
		{
			// Stop fuerte para comportamiento "rebota y se detiene".
			BulletShellMesh->SetPhysicsLinearVelocity(FVector::ZeroVector);
			BulletShellMesh->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
			BulletShellMesh->PutAllRigidBodiesToSleep();
			BulletShellMesh->SetNotifyRigidBodyCollision(false);
		}
	}

	// Reproduce audio una sola vez para evitar duplicados por micro-rebotes.
	if (!bHasPlayedImpactSound)
	{
		const bool bHasMetaSound = IsValid(BulletShellMetaSound);
		const bool bHasCueSound = IsValid(BulletShellSound);
		USoundBase* SoundToPlay = bUseMetaSound ? BulletShellMetaSound : BulletShellSound;

		UE_LOG(
			LogTemp,
			Warning,
			TEXT("ABulletShell::OnHit actor=%s bUseMetaSound=%s MetaSound=%s CueSound=%s Selected=%s"),
			*GetNameSafe(this),
			bUseMetaSound ? TEXT("true") : TEXT("false"),
			bHasMetaSound ? *GetNameSafe(BulletShellMetaSound) : TEXT("None"),
			bHasCueSound ? *GetNameSafe(BulletShellSound) : TEXT("None"),
			IsValid(SoundToPlay) ? *GetNameSafe(SoundToPlay) : TEXT("None"));

		if (SoundToPlay)
		{
			UE_LOG(LogTemp, Warning, TEXT("ABulletShell::OnHit PlaySoundAtLocation actor=%s location=%s"), *GetNameSafe(this), *GetActorLocation().ToCompactString());
			UGameplayStatics::PlaySoundAtLocation(this, SoundToPlay, GetActorLocation());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("ABulletShell::OnHit NO_SOUND_SELECTED actor=%s (revisa defaults de BP pooled)"), *GetNameSafe(this));
		}
		bHasPlayedImpactSound = true;
	}

	if (ResolvePoolComponent() && !bReturnScheduled && bShouldForceStopNow)
	{
		// Marca que ya hay un retorno programado para blindar llamadas repetidas.
		bReturnScheduled = true;

		if (ReturnToPoolDelay <= 0.f)
		{
			ReturnToPoolOrDestroy();
			return;
		}

		GetWorldTimerManager().SetTimer(ReturnToPoolTimerHandle, this, &ABulletShell::ReturnToPoolOrDestroy, ReturnToPoolDelay, false);
		return;
	}

	if (ResolvePoolComponent())
	{
		// Aun no llego al hit objetivo para retorno; mantiene simulacion activa.
		return;
	}

	// Sin pool: comportamiento legacy (el actor se autodestruye luego de unos segundos).
	bReturnScheduled = true;
	SetLifeSpan(5.f);
}


void ABulletShell::OnTakenFromPool_Implementation()
{
	// Reinicio de timers para que cada activacion empiece "limpia".
	// Se limpian ambos timers para evitar callbacks viejos despues de reusar el actor.
	GetWorldTimerManager().ClearTimer(ReturnToPoolTimerHandle);
	GetWorldTimerManager().ClearTimer(ActiveFailSafeTimerHandle);

	// Restaura velocidad de spin estable al valor configurado original (por ejemplo 10000).
	if (bHasCachedStableSpinSpeed)
	{
		StableSpinSpeedDegPerSec = CachedStableSpinSpeedDegPerSec;
	}

	// Estado activo: recien "tomado" del pool.
	bIsInPool = false;
	bReturnScheduled = false;
	bHasPlayedImpactSound = false;
	HitCountSinceActivation = 0;
	ActivationWorldTimeSeconds = GetWorld() ? GetWorld()->GetTimeSeconds() : -1.0f;

	// La eyeccion ahora vive en una API dedicada para mantener codigo limpio y testeable.
	ActivateEjection(BuildRuntimeEjectionTransform());

	// Fail-safe de vida activa:
	// si nunca hay OnHit, igual vuelve al pool tras MaxActiveLifetime.
	StartActiveFailSafeTimer();
}


void ABulletShell::OnReturnedToPool_Implementation()
{
	// El actor entra a estado inactivo de pool.
	// Ningun timer viejo debe quedar vivo.
	// Se cancelan timers activos porque el actor ya no debe ejecutar logica en segundo plano.
	GetWorldTimerManager().ClearTimer(ReturnToPoolTimerHandle);
	GetWorldTimerManager().ClearTimer(ActiveFailSafeTimerHandle);

	// Restaura valor base para el siguiente uso del actor.
	if (bHasCachedStableSpinSpeed)
	{
		StableSpinSpeedDegPerSec = CachedStableSpinSpeedDegPerSec;
	}

	// Estado inactivo: ya guardado en pool.
	bIsInPool = true;
	bReturnScheduled = false;
	bHasPlayedImpactSound = false;
	HitCountSinceActivation = 0;
	ActivationWorldTimeSeconds = -1.0f;

	if (!BulletShellMesh)
	{
		return;
	}

	// Deja el rigid body en reposo para minimizar costo de fisica dentro del pool.
	BulletShellMesh->SetNotifyRigidBodyCollision(false);
	BulletShellMesh->SetPhysicsLinearVelocity(FVector::ZeroVector);
	BulletShellMesh->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
	BulletShellMesh->PutAllRigidBodiesToSleep();
}


void ABulletShell::ReturnToPoolOrDestroy()
{
	// Entrada unica de retorno (normal por hit o fail-safe por TTL).
	// El metodo es idempotente para soportar callbacks duplicados.

	// Si ya esta en pool, no hacer nada (idempotencia completa).
	if (bIsInPool)
	{
		return;
	}

	// Ya estamos ejecutando el retorno, no mantener timers pendientes.
	GetWorldTimerManager().ClearTimer(ReturnToPoolTimerHandle);
	GetWorldTimerManager().ClearTimer(ActiveFailSafeTimerHandle);
	bReturnScheduled = false;

	// Intenta devolver siempre al pool fuente real.
	if (UBpcPoolBase* PoolComponent = ResolvePoolComponent())
	{
		if (PoolComponent->ReturnActorToPool(this))
		{
			// Si el retorno fue aceptado (incluyendo caso idempotente), no se destruye.
			bIsInPool = true;
			return;
		}
	}

	// Fallback duro: si no hay pool valido, se destruye para no dejar actor huerfano.
	SetLifeSpan(0.01f);
}


UBpcPoolBase* ABulletShell::ResolvePoolComponent() const
{
	// Prioridad 1: pool explicitamente asignado al actor.
	if (PoolSourceComponent.IsValid())
	{
		return PoolSourceComponent.Get();
	}

	// Prioridad 2 (fallback): buscar por owner.
	// Este camino puede ser ambiguo si hay multiples pools del mismo tipo en el owner.
	AActor* OwnerActor = GetOwner();
	if (!OwnerActor)
	{
		return nullptr;
	}

	return OwnerActor->FindComponentByClass<UBpcPoolBase>();
}

FTransform ABulletShell::BuildRuntimeEjectionTransform() const
{
	// Transform base del actor en el momento de activar eyeccion.
	const FVector BaseLocation = GetActorLocation();
	const FQuat BaseRotation = GetActorQuat();
	const FVector BaseScale = GetActorScale3D();

	if (!bUseCustomEjectionTransform)
	{
		return FTransform(BaseRotation, BaseLocation, BaseScale);
	}

	// Offset de ubicacion relativo al actor (espacio local -> mundo).
	const FVector WorldOffset = BaseRotation.RotateVector(EjectionTransformOffset.GetLocation());
	const FVector FinalLocation = BaseLocation + WorldOffset;

	// Offset de rotacion relativo al actor.
	const FQuat FinalRotation = (BaseRotation * EjectionTransformOffset.GetRotation()).GetNormalized();
	return FTransform(FinalRotation, FinalLocation, BaseScale);
}


FVector ABulletShell::BuildBaseEjectionDirection() const
{
	// Direccion principal estable: Right + Up + (opcional) Forward.
	// Por defecto queda sesgada a Right+Up para evitar salida "hacia adelante".
	const FVector WeightedDirection =
		(GetActorRightVector() * RightWeight) +
		(GetActorUpVector() * UpWeight) +
		(GetActorForwardVector() * ForwardWeight);

	// Fallback robusto en caso de pesos invalidos (por ejemplo todos en 0).
	if (!WeightedDirection.IsNearlyZero())
	{
		return WeightedDirection.GetSafeNormal();
	}

	const FVector ActorRight = GetActorRightVector();
	if (!ActorRight.IsNearlyZero())
	{
		return ActorRight.GetSafeNormal();
	}

	return FVector::RightVector;
}


FVector ABulletShell::GenerateDirectionWithConeSpread(const FVector& BaseDirection, FRandomStream* SeededStream) const
{
	// Asegura direccion valida incluso en configuraciones extremas.
	const FVector SafeBase = BaseDirection.IsNearlyZero() ? FVector::RightVector : BaseDirection.GetSafeNormal();
	const float SafeConeHalfAngleDeg = FMath::Max(0.0f, ConeHalfAngleDeg);
	const float HalfAngleRad = FMath::DegreesToRadians(SafeConeHalfAngleDeg);
	if (HalfAngleRad <= KINDA_SMALL_NUMBER)
	{
		return SafeBase;
	}

	// Camino normal sin semilla fija:
	// usa API de Unreal para vector aleatorio dentro de cono en grados.
	if (!SeededStream)
	{
		return UKismetMathLibrary::RandomUnitVectorInConeInDegrees(SafeBase, SafeConeHalfAngleDeg).GetSafeNormal();
	}

	// Muestreo uniforme dentro del cono usando coordenadas polares.
	// Esto evita variaciones abruptas y mantiene dispersion muy controlada.
	const float U1 = SeededStream->FRand();
	const float U2 = SeededStream->FRand();

	const float CosMax = FMath::Cos(HalfAngleRad);
	const float CosTheta = FMath::Lerp(1.0f, CosMax, U1);
	const float SinTheta = FMath::Sqrt(FMath::Max(0.0f, 1.0f - (CosTheta * CosTheta)));
	const float Phi = 2.0f * PI * U2;

	FVector TangentX;
	FVector TangentY;
	SafeBase.FindBestAxisVectors(TangentX, TangentY);

	const FVector RingDirection = (TangentX * FMath::Cos(Phi)) + (TangentY * FMath::Sin(Phi));
	const FVector ConedDirection = (SafeBase * CosTheta) + (RingDirection * SinTheta);
	return ConedDirection.GetSafeNormal();
}


FVector ABulletShell::GenerateRandomUnitVector(FRandomStream* SeededStream) const
{
	// Genera direccion uniforme en esfera para rotacion aleatoria independiente.
	const float U1 = SeededStream ? SeededStream->FRand() : FMath::FRand();
	const float U2 = SeededStream ? SeededStream->FRand() : FMath::FRand();

	const float Z = FMath::Lerp(-1.0f, 1.0f, U1);
	const float Radius = FMath::Sqrt(FMath::Max(0.0f, 1.0f - (Z * Z)));
	const float Phi = 2.0f * PI * U2;

	const FVector RandomVector(
		Radius * FMath::Cos(Phi),
		Radius * FMath::Sin(Phi),
		Z);

	return RandomVector.GetSafeNormal();
}


float ABulletShell::ResolveImpulseStrengthForRuntime() const
{
	// Compatibilidad backward:
	// si se mantiene el valor default en la propiedad nueva pero el asset tenia
	// un valor custom previo en EjectionImpulseLegacy, se prioriza el legacy.
	constexpr float LegacyDefault = 10.0f;
	if (FMath::IsNearlyEqual(ImpulseStrength, LegacyDefault) && !FMath::IsNearlyEqual(EjectionImpulseLegacy, LegacyDefault))
	{
		return EjectionImpulseLegacy;
	}

	return ImpulseStrength;
}


void ABulletShell::SetPoolSource_Implementation(UBpcPoolBase* InPoolSource)
{
	// Se guarda el pool dueno actual del actor para resolver el retorno sin ambiguedad.
	PoolSourceComponent = InPoolSource;
}


UBpcPoolBase* ABulletShell::GetPoolSource_Implementation() const
{
	// Retorna null si el pool ya fue destruido o nunca fue asignado.
	return PoolSourceComponent.Get();
}


void ABulletShell::StartActiveFailSafeTimer()
{
	// Limpieza preventiva para evitar duplicar timers al reutilizar actor.
	GetWorldTimerManager().ClearTimer(ActiveFailSafeTimerHandle);

	// Valor <= 0 significa "fail-safe desactivado" por configuracion.
	if (MaxActiveLifetime <= 0.f)
	{
		return;
	}

	// El fail-safe solo aplica si realmente existe pool al cual volver.
	if (!ResolvePoolComponent())
	{
		return;
	}

	// Programa retorno automatico si por cualquier razon nunca llega OnHit.
	// Esto evita "fugas" de actores activos perdidos en escena.
	GetWorldTimerManager().SetTimer(ActiveFailSafeTimerHandle, this, &ABulletShell::ReturnToPoolOrDestroy, MaxActiveLifetime, false);
}
