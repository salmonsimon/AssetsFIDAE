// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasePool/BPI/BPI_PoolableActor_stt.h"
#include "BP_PoolableActorBase_stt.generated.h"

class UBPC_PoolManager_stt;
class UActorComponent;
class UPrimitiveComponent;

// Actor base para pooling en 2 fases:
// 1) RequestDeactivateToPool_stt() inicia retorno (puede disparar fade/outro).
// 2) FinalizeReturnToPool_stt() confirma retorno final al manager.
UCLASS(Blueprintable)
class TTSWEAPONS_API ABP_PoolableActorBase_stt : public AActor, public IBPI_PoolableActor_stt
{
	GENERATED_BODY()

public:
	ABP_PoolableActorBase_stt();

	// Fase 1 de retorno: solicita desactivacion.
	// Si bReturnDeferred_stt = false, finaliza retorno inmediatamente.
	UFUNCTION(BlueprintCallable, Category = "Pool_stt")
	void RequestDeactivateToPool_stt();

	// Fase 2 de retorno: debe llamarse al terminar animacion/fade de salida.
	UFUNCTION(BlueprintCallable, Category = "Pool_stt")
	void FinalizeReturnToPool_stt();

	// Cambia solo estado de fisica/gravedad de los primitive components del actor.
	UFUNCTION(BlueprintCallable, Category = "Pool_stt|Runtime")
	void SetPhysicsAndGravityEnabled_stt(bool bEnablePhysics, bool bEnableGravity);

	// Atajo: activa fisica + gravedad.
	UFUNCTION(BlueprintCallable, Category = "Pool_stt|Runtime")
	void EnablePhysicsAndGravity_stt();

	// Atajo: desactiva fisica + gravedad.
	UFUNCTION(BlueprintCallable, Category = "Pool_stt|Runtime")
	void DisablePhysicsAndGravity_stt();

	// Estado de runtime.
	UFUNCTION(BlueprintPure, Category = "Pool_stt")
	bool IsInPool_stt() const { return bIsInPool_stt; }

	UFUNCTION(BlueprintPure, Category = "Pool_stt")
	bool IsReturnInProgress_stt() const { return bReturnInProgress_stt; }

	UFUNCTION(BlueprintPure, Category = "Pool_stt")
	UBPC_PoolManager_stt* GetPoolManager_stt() const { return PoolManagerSource_stt.Get(); }

	// Hook: se ejecuta cuando el actor sale del pool y entra en uso activo.
	UFUNCTION(BlueprintNativeEvent, Category = "Pool_stt|Hooks")
	void OnTakenFromPool_stt();

	// Hook: se ejecuta al iniciar retorno (ideal para dissolve/fade/outro).
	UFUNCTION(BlueprintNativeEvent, Category = "Pool_stt|Hooks")
	void OnBeginReturnToPool_stt();

	// Hook: se ejecuta justo antes de apagar/hide y volver a disponibles.
	UFUNCTION(BlueprintNativeEvent, Category = "Pool_stt|Hooks")
	void OnFinalReturnToPool_stt();

	// Hook especifico cuando el retorno es solicitado via BPI_RequestDeactivateToPool_stt.
	// Sirve para preparar estado antes de entrar al flujo normal de Request/Finalize.
	UFUNCTION(BlueprintNativeEvent, Category = "Pool_stt|Hooks")
	void OnBPIRequestDeactivateToPool_stt();
	// Entrada por BPI para evitar referencias duras de clase en Blueprint.
	virtual void BPI_RequestDeactivateToPool_stt_Implementation() override;

	// Entrada por BPI para completar retorno diferido en Blueprint.
	virtual void BPI_FinalizeReturnToPool_stt_Implementation() override;

	// Entrada por BPI para habilitar/deshabilitar fisica y gravedad sin hard cast.
	virtual void BPI_SetPhysicsAndGravityEnabled_stt_Implementation(bool bEnablePhysics, bool bEnableGravity) override;

	// Entrada por BPI para activar fisica + gravedad.
	virtual void BPI_EnablePhysicsAndGravity_stt_Implementation() override;

	// Entrada por BPI para desactivar fisica + gravedad.
	virtual void BPI_DisablePhysicsAndGravity_stt_Implementation() override;

	// Consulta estado por BPI.
	virtual bool BPI_IsInPool_stt_Implementation() const override;

	// Consulta estado por BPI.
	virtual bool BPI_IsReturnInProgress_stt_Implementation() const override;

protected:
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// Si true, el retorno requiere llamada explicita a FinalizeReturnToPool_stt.
	// Si false, RequestDeactivateToPool_stt finaliza inmediatamente.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pool_stt|Return")
	bool bReturnDeferred_stt = false;

private:
	struct FManagedActorState_stt
	{
		TWeakObjectPtr<AActor> Actor;
		bool bWasHiddenInGame = false;
		bool bWasActorTickEnabled = false;
		bool bWasActorCollisionEnabled = true;
	};

	struct FManagedComponentState_stt
	{
		TWeakObjectPtr<UActorComponent> Component;
		bool bWasActive = false;
		bool bWasComponentTickEnabled = false;
	};

	struct FManagedPrimitiveState_stt
	{
		TWeakObjectPtr<UPrimitiveComponent> PrimitiveComponent;
		bool bWasGenerateOverlapEvents = false;
		TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled = ECollisionEnabled::NoCollision;
		bool bWasSimulatingPhysics = false;
		bool bWasGravityEnabled = false;
	};

	friend class UBPC_PoolManager_stt;

	// API interna usada solo por el manager al activar una instancia.
	void ActivateFromPool_stt(UBPC_PoolManager_stt* InPoolManager, float AutoReturnDelaySeconds);

	// API interna usada solo por el manager para dejar una instancia inactiva.
	void PrepareForPoolStorage_stt(UBPC_PoolManager_stt* InPoolManager);

	// Recupera el manager duenio desde el owner cuando el weak ptr quedo invalido.
	UBPC_PoolManager_stt* ResolvePoolManagerFromOwner_stt() const;

	void CacheManagedStates_stt();
	void GatherManagedActors_stt(TArray<AActor*>& OutActors) const;
	void ClearManagedTimers_stt() const;
	void StopManagedMovementImmediately_stt() const;
	void ApplyStoredPoolState_stt();
	void RestoreManagedStateAfterPool_stt();
	bool ShouldUseManagerPhysicsState_stt() const;

	void StartAutoReturnTimer_stt(float AutoReturnDelaySeconds);
	void ClearAutoReturnTimer_stt();
	void HandleAutoReturnTimerElapsed_stt();

private:
	UPROPERTY(Transient)
	TWeakObjectPtr<UBPC_PoolManager_stt> PoolManagerSource_stt;

	UPROPERTY(Transient)
	bool bIsInPool_stt = true;

	UPROPERTY(Transient)
	bool bReturnInProgress_stt = false;

	bool bManagedStateCached_stt = false;
	TArray<FManagedActorState_stt> CachedManagedActorStates_stt;
	TArray<FManagedComponentState_stt> CachedManagedComponentStates_stt;
	TArray<FManagedPrimitiveState_stt> CachedManagedPrimitiveStates_stt;

	FTimerHandle AutoReturnTimerHandle_stt;
};
