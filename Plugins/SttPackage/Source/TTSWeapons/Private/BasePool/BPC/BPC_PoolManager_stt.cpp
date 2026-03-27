// Fill out your copyright notice in the Description page of Project Settings.

#include "BasePool/BPC/BPC_PoolManager_stt.h"

#include "BasePool/Actor/BP_PoolableActorBase_stt.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

UBPC_PoolManager_stt::UBPC_PoolManager_stt()
{
	PrimaryComponentTick.bCanEverTick = false;
}


void UBPC_PoolManager_stt::BeginPlay()
{
	Super::BeginPlay();

	if (bStartInitialized_stt)
	{
		InitPool_stt();
	}
}


void UBPC_PoolManager_stt::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	PruneInvalidActors_stt();

	for (ABP_PoolableActorBase_stt* PooledActor : AllPooledActors_stt)
	{
		if (!IsValid(PooledActor))
		{
			continue;
		}

		PooledActor->PrepareForPoolStorage_stt(nullptr);
		if (!PooledActor->IsActorBeingDestroyed())
		{
			PooledActor->Destroy();
		}
	}

	AvailableActors_stt.Reset();
	AllPooledActors_stt.Reset();
	bIsInitialized_stt = false;

	Super::EndPlay(EndPlayReason);
}


void UBPC_PoolManager_stt::InitPool_stt()
{
	if (bIsInitialized_stt)
	{
		return;
	}

	if (!GetWorld())
	{
		UE_LOG(LogTemp, Warning, TEXT("UBPC_PoolManager_stt::InitPool_stt failed: invalid world."));
		return;
	}

	if (!PooledActorClass_stt)
	{
		UE_LOG(LogTemp, Warning, TEXT("UBPC_PoolManager_stt::InitPool_stt failed: PooledActorClass_stt not set on %s."), *GetNameSafe(this));
		return;
	}

	bIsInitialized_stt = true;

	if (InitialPoolSize_stt > 0)
	{
		FillPool_stt(InitialPoolSize_stt);
	}
}


int32 UBPC_PoolManager_stt::FillPool_stt(int32 Amount)
{
	if (Amount <= 0)
	{
		return 0;
	}

	UWorld* World = GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Warning, TEXT("UBPC_PoolManager_stt::FillPool_stt failed: invalid world."));
		return 0;
	}

	if (!PooledActorClass_stt)
	{
		UE_LOG(LogTemp, Warning, TEXT("UBPC_PoolManager_stt::FillPool_stt failed: PooledActorClass_stt not set on %s."), *GetNameSafe(this));
		return 0;
	}

	if (!bIsInitialized_stt)
	{
		bIsInitialized_stt = true;
	}

	const FTransform SpawnTransform = GetOwner() ? GetOwner()->GetActorTransform() : FTransform::Identity;

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = GetOwner();
	SpawnParams.Instigator = GetOwner() ? GetOwner()->GetInstigator() : nullptr;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	int32 AddedActors = 0;
	for (int32 Index = 0; Index < Amount; ++Index)
	{
		ABP_PoolableActorBase_stt* SpawnedActor = World->SpawnActor<ABP_PoolableActorBase_stt>(PooledActorClass_stt, SpawnTransform, SpawnParams);
		if (!IsValid(SpawnedActor))
		{
			continue;
		}

		ConfigureActorForPool_stt(SpawnedActor);
		// El prefill tambien debe pasar por el hook BPI de desactivacion.
		// Los BP derivados usan este punto para apagar timelines/timers/componentes
		// que pudieron activarse en BeginPlay al momento real del spawn.
		IBPI_PoolableActor_stt::Execute_BPI_RequestDeactivateToPool_stt(SpawnedActor);
		AllPooledActors_stt.Add(SpawnedActor);
		AvailableActors_stt.Add(SpawnedActor);
		++AddedActors;
	}

	return AddedActors;
}


ABP_PoolableActorBase_stt* UBPC_PoolManager_stt::GetActorFromPool_stt(const FTransform& SpawnWorldTransform, float AutoReturnDelaySeconds)
{
	if (!bIsInitialized_stt)
	{
		InitPool_stt();
	}

	PruneInvalidActors_stt();

	if (AvailableActors_stt.Num() == 0 && bAutoExpand_stt)
	{
		FillPool_stt(FMath::Max(1, AutoExpandAmount_stt));
		PruneInvalidActors_stt();
	}

	if (AvailableActors_stt.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("UBPC_PoolManager_stt::GetActorFromPool_stt: pool is empty on %s."), *GetNameSafe(this));
		return nullptr;
	}

	ABP_PoolableActorBase_stt* PooledActor = AvailableActors_stt.Pop(EAllowShrinking::No);
	if (!IsValid(PooledActor))
	{
		return nullptr;
	}

	ActivateActorFromPool_stt(PooledActor, SpawnWorldTransform, AutoReturnDelaySeconds);
	return PooledActor;
}


bool UBPC_PoolManager_stt::RequestReturnActorToPool_stt(ABP_PoolableActorBase_stt* Actor)
{
	if (!IsValid(Actor))
	{
		return false;
	}

	if (!AllPooledActors_stt.Contains(Actor))
	{
		UE_LOG(LogTemp, Warning, TEXT("UBPC_PoolManager_stt::RequestReturnActorToPool_stt failed: actor %s does not belong to pool %s."), *GetNameSafe(Actor), *GetNameSafe(this));
		return false;
	}

	if (AvailableActors_stt.Contains(Actor))
	{
		return true;
	}

	// El flujo normal del manager debe entrar por BPI para respetar el hook
	// OnBPIRequestDeactivateToPool_stt implementado en BP.
	IBPI_PoolableActor_stt::Execute_BPI_RequestDeactivateToPool_stt(Actor);
	return true;
}


bool UBPC_PoolManager_stt::RequestReturnActorToPoolByBPI_stt(const TScriptInterface<IBPI_PoolableActor_stt>& PoolableActor)
{
	ABP_PoolableActorBase_stt* ResolvedActor = ResolvePoolActorFromBPI_stt(PoolableActor);
	if (!IsValid(ResolvedActor))
	{
		UE_LOG(LogTemp, Warning, TEXT("UBPC_PoolManager_stt::RequestReturnActorToPoolByBPI_stt failed: invalid or unsupported actor on %s."), *GetNameSafe(this));
		return false;
	}

	return RequestReturnActorToPool_stt(ResolvedActor);
}


bool UBPC_PoolManager_stt::FinalizeReturnActorToPool_stt(ABP_PoolableActorBase_stt* Actor)
{
	if (!IsValid(Actor))
	{
		return false;
	}

	if (!AllPooledActors_stt.Contains(Actor))
	{
		UE_LOG(LogTemp, Warning, TEXT("UBPC_PoolManager_stt::FinalizeReturnActorToPool_stt failed: actor %s does not belong to pool %s."), *GetNameSafe(Actor), *GetNameSafe(this));
		return false;
	}

	if (AvailableActors_stt.Contains(Actor))
	{
		return true;
	}

	ConfigureActorForPool_stt(Actor);
	AvailableActors_stt.Add(Actor);
	LogPoolLifecycleIfEnabled_stt(TEXT("RETURN"), Actor);
	return true;
}


bool UBPC_PoolManager_stt::FinalizeReturnActorToPoolByBPI_stt(const TScriptInterface<IBPI_PoolableActor_stt>& PoolableActor)
{
	ABP_PoolableActorBase_stt* ResolvedActor = ResolvePoolActorFromBPI_stt(PoolableActor);
	if (!IsValid(ResolvedActor))
	{
		UE_LOG(LogTemp, Warning, TEXT("UBPC_PoolManager_stt::FinalizeReturnActorToPoolByBPI_stt failed: invalid or unsupported actor on %s."), *GetNameSafe(this));
		return false;
	}

	return FinalizeReturnActorToPool_stt(ResolvedActor);
}


bool UBPC_PoolManager_stt::IsActorOwnedByPool_stt(const ABP_PoolableActorBase_stt* Actor) const
{
	return IsValid(Actor) && AllPooledActors_stt.Contains(Actor);
}


ABP_PoolableActorBase_stt* UBPC_PoolManager_stt::ResolvePoolActorFromBPI_stt(const TScriptInterface<IBPI_PoolableActor_stt>& PoolableActor) const
{
	UObject* PoolableObject = PoolableActor.GetObject();
	if (!IsValid(PoolableObject))
	{
		return nullptr;
	}

	return Cast<ABP_PoolableActorBase_stt>(PoolableObject);
}


void UBPC_PoolManager_stt::ConfigureActorForPool_stt(ABP_PoolableActorBase_stt* Actor)
{
	if (!IsValid(Actor))
	{
		return;
	}

	if (bDetachFromParentOnReturn_stt)
	{
		Actor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	}

	if (bResetRigidBodyStateOnReturn_stt)
	{
		ResetRigidBodyState_stt(Actor);
	}

	if (bManagePhysicsAndGravityState_stt)
	{
		Actor->SetPhysicsAndGravityEnabled_stt(bEnablePhysicsInPool_stt, bEnableGravityInPool_stt);
	}

	Actor->PrepareForPoolStorage_stt(this);
}


void UBPC_PoolManager_stt::ActivateActorFromPool_stt(ABP_PoolableActorBase_stt* Actor, const FTransform& SpawnWorldTransform, float AutoReturnDelaySeconds)
{
	if (!IsValid(Actor))
	{
		return;
	}

	Actor->SetActorTransform(
		SpawnWorldTransform,
		false,
		nullptr,
		bTeleportPhysicsOnActivate_stt ? ETeleportType::TeleportPhysics : ETeleportType::None);

	if (bManagePhysicsAndGravityState_stt)
	{
		Actor->SetPhysicsAndGravityEnabled_stt(bEnablePhysicsWhenActive_stt, bEnableGravityWhenActive_stt);
	}

	Actor->ActivateFromPool_stt(this, AutoReturnDelaySeconds);
	LogPoolLifecycleIfEnabled_stt(TEXT("TAKE"), Actor);
}


void UBPC_PoolManager_stt::ResetRigidBodyState_stt(AActor* Actor) const
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


void UBPC_PoolManager_stt::LogPoolLifecycleIfEnabled_stt(const TCHAR* Action, const AActor* Actor) const
{
	if (!bLogPoolLifecycle_stt)
	{
		return;
	}

	UE_LOG(
		LogTemp,
		Log,
		TEXT("UBPC_PoolManager_stt::%s pool=%s actor=%s available=%d total=%d"),
		Action,
		*GetNameSafe(this),
		*GetNameSafe(Actor),
		AvailableActors_stt.Num(),
		AllPooledActors_stt.Num());
}


void UBPC_PoolManager_stt::PruneInvalidActors_stt()
{
	AllPooledActors_stt.RemoveAll([](const TObjectPtr<ABP_PoolableActorBase_stt>& Actor)
	{
		return !IsValid(Actor);
	});

	AvailableActors_stt.RemoveAll([](const TObjectPtr<ABP_PoolableActorBase_stt>& Actor)
	{
		return !IsValid(Actor);
	});
}
