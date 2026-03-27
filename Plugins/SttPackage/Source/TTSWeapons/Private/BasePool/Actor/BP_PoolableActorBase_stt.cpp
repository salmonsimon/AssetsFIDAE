// Fill out your copyright notice in the Description page of Project Settings.

#include "BasePool/Actor/BP_PoolableActorBase_stt.h"

#include "BasePool/BPC/BPC_PoolManager_stt.h"
#include "Components/ActorComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/World.h"
#include "GameFramework/MovementComponent.h"
#include "TimerManager.h"

ABP_PoolableActorBase_stt::ABP_PoolableActorBase_stt()
{
	PrimaryActorTick.bCanEverTick = false;
}


void ABP_PoolableActorBase_stt::CacheManagedStates_stt()
{
	if (bManagedStateCached_stt)
	{
		return;
	}

	CachedManagedActorStates_stt.Reset();
	CachedManagedComponentStates_stt.Reset();
	CachedManagedPrimitiveStates_stt.Reset();

	TArray<AActor*> ManagedActors;
	GatherManagedActors_stt(ManagedActors);

	for (AActor* ManagedActor : ManagedActors)
	{
		if (!IsValid(ManagedActor))
		{
			continue;
		}

		FManagedActorState_stt ActorState;
		ActorState.Actor = ManagedActor;
		ActorState.bWasHiddenInGame = ManagedActor->IsHidden();
		ActorState.bWasActorTickEnabled = ManagedActor->IsActorTickEnabled();
		ActorState.bWasActorCollisionEnabled = ManagedActor->GetActorEnableCollision();
		CachedManagedActorStates_stt.Add(ActorState);

		TArray<UActorComponent*> ActorComponents;
		ManagedActor->GetComponents(ActorComponents);

		for (UActorComponent* ActorComponent : ActorComponents)
		{
			if (!IsValid(ActorComponent))
			{
				continue;
			}

			FManagedComponentState_stt ComponentState;
			ComponentState.Component = ActorComponent;
			ComponentState.bWasActive = ActorComponent->IsActive();
			ComponentState.bWasComponentTickEnabled = ActorComponent->IsComponentTickEnabled();
			CachedManagedComponentStates_stt.Add(ComponentState);

			if (UPrimitiveComponent* PrimitiveComponent = Cast<UPrimitiveComponent>(ActorComponent))
			{
				FManagedPrimitiveState_stt PrimitiveState;
				PrimitiveState.PrimitiveComponent = PrimitiveComponent;
				PrimitiveState.bWasGenerateOverlapEvents = PrimitiveComponent->GetGenerateOverlapEvents();
				PrimitiveState.CollisionEnabled = PrimitiveComponent->GetCollisionEnabled();
				PrimitiveState.bWasSimulatingPhysics = PrimitiveComponent->IsSimulatingPhysics();
				PrimitiveState.bWasGravityEnabled = PrimitiveComponent->IsGravityEnabled();
				CachedManagedPrimitiveStates_stt.Add(PrimitiveState);
			}
		}
	}

	bManagedStateCached_stt = true;
}


void ABP_PoolableActorBase_stt::GatherManagedActors_stt(TArray<AActor*>& OutActors) const
{
	OutActors.Reset();

	TSet<const AActor*> VisitedActors;
	TFunction<void(AActor*)> GatherRecursive = [&](AActor* CurrentActor)
	{
		if (!IsValid(CurrentActor) || VisitedActors.Contains(CurrentActor))
		{
			return;
		}

		VisitedActors.Add(CurrentActor);
		OutActors.Add(CurrentActor);

		TArray<UChildActorComponent*> ChildActorComponents;
		CurrentActor->GetComponents(ChildActorComponents);

		for (UChildActorComponent* ChildActorComponent : ChildActorComponents)
		{
			if (!IsValid(ChildActorComponent))
			{
				continue;
			}

			GatherRecursive(ChildActorComponent->GetChildActor());
		}
	};

	GatherRecursive(const_cast<ABP_PoolableActorBase_stt*>(this));
}


void ABP_PoolableActorBase_stt::ClearManagedTimers_stt() const
{
	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	FTimerManager& TimerManager = World->GetTimerManager();
	TArray<AActor*> ManagedActors;
	GatherManagedActors_stt(ManagedActors);

	for (AActor* ManagedActor : ManagedActors)
	{
		if (!IsValid(ManagedActor))
		{
			continue;
		}

		TimerManager.ClearAllTimersForObject(ManagedActor);

		TArray<UActorComponent*> ActorComponents;
		ManagedActor->GetComponents(ActorComponents);

		for (UActorComponent* ActorComponent : ActorComponents)
		{
			if (IsValid(ActorComponent))
			{
				TimerManager.ClearAllTimersForObject(ActorComponent);
			}
		}
	}
}


void ABP_PoolableActorBase_stt::StopManagedMovementImmediately_stt() const
{
	TArray<AActor*> ManagedActors;
	GatherManagedActors_stt(ManagedActors);

	for (AActor* ManagedActor : ManagedActors)
	{
		if (!IsValid(ManagedActor))
		{
			continue;
		}

		TArray<UMovementComponent*> MovementComponents;
		ManagedActor->GetComponents(MovementComponents);

		for (UMovementComponent* MovementComponent : MovementComponents)
		{
			if (IsValid(MovementComponent))
			{
				MovementComponent->StopMovementImmediately();
			}
		}
	}
}


bool ABP_PoolableActorBase_stt::ShouldUseManagerPhysicsState_stt() const
{
	const UBPC_PoolManager_stt* PoolManager = PoolManagerSource_stt.Get();
	return IsValid(PoolManager) && PoolManager->IsManagingPhysicsAndGravityState_stt();
}


void ABP_PoolableActorBase_stt::ApplyStoredPoolState_stt()
{
	CacheManagedStates_stt();
	ClearManagedTimers_stt();
	StopManagedMovementImmediately_stt();

	for (const FManagedComponentState_stt& ComponentState : CachedManagedComponentStates_stt)
	{
		UActorComponent* ActorComponent = ComponentState.Component.Get();
		if (!IsValid(ActorComponent))
		{
			continue;
		}

		ActorComponent->Deactivate();
		ActorComponent->SetComponentTickEnabled(false);
	}

	const bool bUseManagerPhysicsState = ShouldUseManagerPhysicsState_stt();
	for (const FManagedPrimitiveState_stt& PrimitiveState : CachedManagedPrimitiveStates_stt)
	{
		UPrimitiveComponent* PrimitiveComponent = PrimitiveState.PrimitiveComponent.Get();
		if (!IsValid(PrimitiveComponent))
		{
			continue;
		}

		PrimitiveComponent->SetGenerateOverlapEvents(false);
		PrimitiveComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		PrimitiveComponent->SetAllPhysicsLinearVelocity(FVector::ZeroVector, false);
		PrimitiveComponent->SetAllPhysicsAngularVelocityInDegrees(FVector::ZeroVector, false);

		if (!bUseManagerPhysicsState && PrimitiveComponent->CanEditSimulatePhysics())
		{
			PrimitiveComponent->SetSimulatePhysics(false);
			PrimitiveComponent->SetEnableGravity(false);
		}

		PrimitiveComponent->PutAllRigidBodiesToSleep();
	}

	for (const FManagedActorState_stt& ActorState : CachedManagedActorStates_stt)
	{
		AActor* ManagedActor = ActorState.Actor.Get();
		if (!IsValid(ManagedActor))
		{
			continue;
		}

		ManagedActor->SetLifeSpan(0.0f);
		ManagedActor->SetActorHiddenInGame(true);
		ManagedActor->SetActorEnableCollision(false);
		ManagedActor->SetActorTickEnabled(false);
	}
}


void ABP_PoolableActorBase_stt::RestoreManagedStateAfterPool_stt()
{
	CacheManagedStates_stt();
	ClearManagedTimers_stt();

	for (const FManagedActorState_stt& ActorState : CachedManagedActorStates_stt)
	{
		AActor* ManagedActor = ActorState.Actor.Get();
		if (!IsValid(ManagedActor))
		{
			continue;
		}

		ManagedActor->SetLifeSpan(0.0f);
		ManagedActor->SetActorHiddenInGame(ActorState.bWasHiddenInGame);
		ManagedActor->SetActorEnableCollision(ActorState.bWasActorCollisionEnabled);
		ManagedActor->SetActorTickEnabled(ActorState.bWasActorTickEnabled);
	}

	for (const FManagedComponentState_stt& ComponentState : CachedManagedComponentStates_stt)
	{
		UActorComponent* ActorComponent = ComponentState.Component.Get();
		if (!IsValid(ActorComponent))
		{
			continue;
		}

		if (ComponentState.bWasActive)
		{
			ActorComponent->Activate(true);
		}
		else
		{
			ActorComponent->Deactivate();
		}

		ActorComponent->SetComponentTickEnabled(ComponentState.bWasComponentTickEnabled);
	}

	const bool bUseManagerPhysicsState = ShouldUseManagerPhysicsState_stt();
	for (const FManagedPrimitiveState_stt& PrimitiveState : CachedManagedPrimitiveStates_stt)
	{
		UPrimitiveComponent* PrimitiveComponent = PrimitiveState.PrimitiveComponent.Get();
		if (!IsValid(PrimitiveComponent))
		{
			continue;
		}

		PrimitiveComponent->SetGenerateOverlapEvents(PrimitiveState.bWasGenerateOverlapEvents);
		PrimitiveComponent->SetCollisionEnabled(PrimitiveState.CollisionEnabled);
		PrimitiveComponent->SetAllPhysicsLinearVelocity(FVector::ZeroVector, false);
		PrimitiveComponent->SetAllPhysicsAngularVelocityInDegrees(FVector::ZeroVector, false);

		if (!bUseManagerPhysicsState && PrimitiveComponent->CanEditSimulatePhysics())
		{
			PrimitiveComponent->SetSimulatePhysics(PrimitiveState.bWasSimulatingPhysics);
			PrimitiveComponent->SetEnableGravity(PrimitiveState.bWasGravityEnabled);
		}

		if (PrimitiveComponent->IsSimulatingPhysics())
		{
			PrimitiveComponent->WakeAllRigidBodies();
		}
		else
		{
			PrimitiveComponent->PutAllRigidBodiesToSleep();
		}
	}

	StopManagedMovementImmediately_stt();
}


void ABP_PoolableActorBase_stt::RequestDeactivateToPool_stt()
{
	if (bIsInPool_stt || bReturnInProgress_stt)
	{
		return;
	}

	bReturnInProgress_stt = true;
	ClearAutoReturnTimer_stt();

	OnBeginReturnToPool_stt();

	if (!bReturnDeferred_stt)
	{
		FinalizeReturnToPool_stt();
	}
}


void ABP_PoolableActorBase_stt::FinalizeReturnToPool_stt()
{
	if (bIsInPool_stt)
	{
		return;
	}

	// Permite finalizar retorno incluso si no se llamo previamente RequestDeactivate.
	bReturnInProgress_stt = true;
	ClearAutoReturnTimer_stt();

	OnFinalReturnToPool_stt();

	UBPC_PoolManager_stt* PoolManager = PoolManagerSource_stt.Get();
	if (!IsValid(PoolManager))
	{
		PoolManager = ResolvePoolManagerFromOwner_stt();
		PoolManagerSource_stt = PoolManager;
	}

	if (IsValid(PoolManager))
	{
		if (PoolManager->FinalizeReturnActorToPool_stt(this))
		{
			return;
		}
	}

	// Fallback seguro cuando no hay manager valido:
	// se evita dejar actores huerfanos ocultos fuera de cualquier pool.
	PrepareForPoolStorage_stt(nullptr);
	if (!IsActorBeingDestroyed())
	{
		Destroy();
	}
}


void ABP_PoolableActorBase_stt::SetPhysicsAndGravityEnabled_stt(bool bEnablePhysics, bool bEnableGravity)
{
	TArray<AActor*> ManagedActors;
	GatherManagedActors_stt(ManagedActors);

	for (AActor* ManagedActor : ManagedActors)
	{
		if (!IsValid(ManagedActor))
		{
			continue;
		}

		TArray<UPrimitiveComponent*> PrimitiveComponents;
		ManagedActor->GetComponents<UPrimitiveComponent>(PrimitiveComponents);

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
}


void ABP_PoolableActorBase_stt::EnablePhysicsAndGravity_stt()
{
	SetPhysicsAndGravityEnabled_stt(true, true);
}


void ABP_PoolableActorBase_stt::DisablePhysicsAndGravity_stt()
{
	SetPhysicsAndGravityEnabled_stt(false, false);
}


void ABP_PoolableActorBase_stt::ActivateFromPool_stt(UBPC_PoolManager_stt* InPoolManager, float AutoReturnDelaySeconds)
{
	PoolManagerSource_stt = InPoolManager;
	bIsInPool_stt = false;
	bReturnInProgress_stt = false;

	ClearAutoReturnTimer_stt();

	// Estado activo.
	RestoreManagedStateAfterPool_stt();

	OnTakenFromPool_stt();
	// Si el hook devolvio el actor inmediatamente, no se programa timer inutil.
	if (!bIsInPool_stt && !bReturnInProgress_stt)
	{
		StartAutoReturnTimer_stt(AutoReturnDelaySeconds);
	}
}


void ABP_PoolableActorBase_stt::PrepareForPoolStorage_stt(UBPC_PoolManager_stt* InPoolManager)
{
	PoolManagerSource_stt = InPoolManager;
	bIsInPool_stt = true;
	bReturnInProgress_stt = false;

	ClearAutoReturnTimer_stt();

	// Estado inactivo en pool.
	ApplyStoredPoolState_stt();
}


UBPC_PoolManager_stt* ABP_PoolableActorBase_stt::ResolvePoolManagerFromOwner_stt() const
{
	AActor* OwnerActor = GetOwner();
	if (!OwnerActor)
	{
		return nullptr;
	}

	TArray<UBPC_PoolManager_stt*> PoolManagers;
	OwnerActor->GetComponents<UBPC_PoolManager_stt>(PoolManagers);

	for (UBPC_PoolManager_stt* Candidate : PoolManagers)
	{
		if (IsValid(Candidate) && Candidate->IsActorOwnedByPool_stt(this))
		{
			return Candidate;
		}
	}

	return nullptr;
}


void ABP_PoolableActorBase_stt::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	ClearAutoReturnTimer_stt();
	Super::EndPlay(EndPlayReason);
}


void ABP_PoolableActorBase_stt::StartAutoReturnTimer_stt(float AutoReturnDelaySeconds)
{
	if (AutoReturnDelaySeconds <= 0.f)
	{
		return;
	}

	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	World->GetTimerManager().SetTimer(
		AutoReturnTimerHandle_stt,
		this,
		&ABP_PoolableActorBase_stt::HandleAutoReturnTimerElapsed_stt,
		AutoReturnDelaySeconds,
		false);
}


void ABP_PoolableActorBase_stt::ClearAutoReturnTimer_stt()
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(AutoReturnTimerHandle_stt);
	}
}


void ABP_PoolableActorBase_stt::HandleAutoReturnTimerElapsed_stt()
{
	RequestDeactivateToPool_stt();
}


void ABP_PoolableActorBase_stt::BPI_RequestDeactivateToPool_stt_Implementation()
{
	OnBPIRequestDeactivateToPool_stt();

	// Evita doble request si el hook ya disparo retorno/finalize.
	if (!bIsInPool_stt && !bReturnInProgress_stt)
	{
		RequestDeactivateToPool_stt();
	}
}


void ABP_PoolableActorBase_stt::BPI_FinalizeReturnToPool_stt_Implementation()
{
	FinalizeReturnToPool_stt();
}


void ABP_PoolableActorBase_stt::BPI_SetPhysicsAndGravityEnabled_stt_Implementation(bool bEnablePhysics, bool bEnableGravity)
{
	SetPhysicsAndGravityEnabled_stt(bEnablePhysics, bEnableGravity);
}


void ABP_PoolableActorBase_stt::BPI_EnablePhysicsAndGravity_stt_Implementation()
{
	EnablePhysicsAndGravity_stt();
}


void ABP_PoolableActorBase_stt::BPI_DisablePhysicsAndGravity_stt_Implementation()
{
	DisablePhysicsAndGravity_stt();
}


bool ABP_PoolableActorBase_stt::BPI_IsInPool_stt_Implementation() const
{
	return IsInPool_stt();
}


bool ABP_PoolableActorBase_stt::BPI_IsReturnInProgress_stt_Implementation() const
{
	return IsReturnInProgress_stt();
}


void ABP_PoolableActorBase_stt::OnTakenFromPool_stt_Implementation()
{
}


void ABP_PoolableActorBase_stt::OnBeginReturnToPool_stt_Implementation()
{
}


void ABP_PoolableActorBase_stt::OnFinalReturnToPool_stt_Implementation()
{
}


void ABP_PoolableActorBase_stt::OnBPIRequestDeactivateToPool_stt_Implementation()
{
}
