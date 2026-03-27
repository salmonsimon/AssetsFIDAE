// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePool/BPI/BPI_PoolableActor_stt.h"
#include "Components/ActorComponent.h"
#include "BPC_PoolManager_stt.generated.h"

class ABP_PoolableActorBase_stt;
class AActor;

// Manager de pooling basado en actor base poolable STT.
// Soporta:
// - entrega por transform mundo
// - auto retorno opcional por tiempo (> 0)
// - retorno manual en 2 fases (request/finalize)
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class TTSWEAPONS_API UBPC_PoolManager_stt : public UActorComponent
{
	GENERATED_BODY()

public:
	UBPC_PoolManager_stt();

	// Inicializa el pool solo una vez.
	UFUNCTION(BlueprintCallable, Category = "Pool_stt")
	void InitPool_stt();

	// Agrega instancias al pool.
	UFUNCTION(BlueprintCallable, Category = "Pool_stt")
	int32 FillPool_stt(int32 Amount);

	// Obtiene un actor del pool y lo activa en el transform indicado.
	// Si AutoReturnDelaySeconds > 0, el actor inicia timer para RequestDeactivateToPool_stt.
	UFUNCTION(BlueprintCallable, Category = "Pool_stt")
	ABP_PoolableActorBase_stt* GetActorFromPool_stt(const FTransform& SpawnWorldTransform, float AutoReturnDelaySeconds = 0.0f);

	// Solicita retorno al pool en fase 1 (deactivate request).
	UFUNCTION(BlueprintCallable, Category = "Pool_stt")
	bool RequestReturnActorToPool_stt(ABP_PoolableActorBase_stt* Actor);

	// Variante BPI para evitar hard cast en Blueprint.
	UFUNCTION(BlueprintCallable, Category = "Pool_stt")
	bool RequestReturnActorToPoolByBPI_stt(const TScriptInterface<IBPI_PoolableActor_stt>& PoolableActor);

	// Completa retorno al pool en fase 2 (finalize).
	// Normalmente lo invoca el actor desde FinalizeReturnToPool_stt.
	UFUNCTION(BlueprintCallable, Category = "Pool_stt")
	bool FinalizeReturnActorToPool_stt(ABP_PoolableActorBase_stt* Actor);

	// Variante BPI para evitar hard cast en Blueprint.
	UFUNCTION(BlueprintCallable, Category = "Pool_stt")
	bool FinalizeReturnActorToPoolByBPI_stt(const TScriptInterface<IBPI_PoolableActor_stt>& PoolableActor);

	UFUNCTION(BlueprintPure, Category = "Pool_stt")
	int32 GetAvailableCount_stt() const { return AvailableActors_stt.Num(); }

	UFUNCTION(BlueprintPure, Category = "Pool_stt")
	int32 GetTotalCount_stt() const { return AllPooledActors_stt.Num(); }

	UFUNCTION(BlueprintPure, Category = "Pool_stt")
	bool IsActorOwnedByPool_stt(const ABP_PoolableActorBase_stt* Actor) const;

	UFUNCTION(BlueprintPure, Category = "Pool_stt|Physics")
	bool IsManagingPhysicsAndGravityState_stt() const { return bManagePhysicsAndGravityState_stt; }

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
	ABP_PoolableActorBase_stt* ResolvePoolActorFromBPI_stt(const TScriptInterface<IBPI_PoolableActor_stt>& PoolableActor) const;
	void ConfigureActorForPool_stt(ABP_PoolableActorBase_stt* Actor);
	void ActivateActorFromPool_stt(ABP_PoolableActorBase_stt* Actor, const FTransform& SpawnWorldTransform, float AutoReturnDelaySeconds);
	void ResetRigidBodyState_stt(AActor* Actor) const;
	void LogPoolLifecycleIfEnabled_stt(const TCHAR* Action, const AActor* Actor) const;
	void PruneInvalidActors_stt();

private:
	// Clase actor base o derivada BP que usara este pool.
	UPROPERTY(EditAnywhere, Category = "Pool_stt")
	TSubclassOf<ABP_PoolableActorBase_stt> PooledActorClass_stt;

	UPROPERTY(EditAnywhere, Category = "Pool_stt", meta = (ClampMin = "0"))
	int32 InitialPoolSize_stt = 10;

	UPROPERTY(EditAnywhere, Category = "Pool_stt")
	bool bStartInitialized_stt = true;

	UPROPERTY(EditAnywhere, Category = "Pool_stt")
	bool bAutoExpand_stt = true;

	UPROPERTY(EditAnywhere, Category = "Pool_stt", meta = (ClampMin = "1", EditCondition = "bAutoExpand_stt", EditConditionHides))
	int32 AutoExpandAmount_stt = 1;

	// Al activar actor del pool, aplica transform con TeleportPhysics.
	UPROPERTY(EditAnywhere, Category = "Pool_stt|Physics")
	bool bTeleportPhysicsOnActivate_stt = true;

	// Al devolver actor al pool, fuerza detach del parent para limpiar estado de sockets/attachments.
	UPROPERTY(EditAnywhere, Category = "Pool_stt|Physics")
	bool bDetachFromParentOnReturn_stt = true;

	// Al devolver actor al pool, limpia velocidades y duerme rigid bodies.
	UPROPERTY(EditAnywhere, Category = "Pool_stt|Physics")
	bool bResetRigidBodyStateOnReturn_stt = true;

	// Si true, el manager aplica estado fisica/gravedad en take/return.
	UPROPERTY(EditAnywhere, Category = "Pool_stt|Physics")
	bool bManagePhysicsAndGravityState_stt = false;

	// Estado de fisica al activar actor.
	UPROPERTY(EditAnywhere, Category = "Pool_stt|Physics", meta = (EditCondition = "bManagePhysicsAndGravityState_stt", EditConditionHides))
	bool bEnablePhysicsWhenActive_stt = true;

	// Estado de gravedad al activar actor.
	UPROPERTY(EditAnywhere, Category = "Pool_stt|Physics", meta = (EditCondition = "bManagePhysicsAndGravityState_stt", EditConditionHides))
	bool bEnableGravityWhenActive_stt = true;

	// Estado de fisica al guardar actor en pool.
	UPROPERTY(EditAnywhere, Category = "Pool_stt|Physics", meta = (EditCondition = "bManagePhysicsAndGravityState_stt", EditConditionHides))
	bool bEnablePhysicsInPool_stt = false;

	// Estado de gravedad al guardar actor en pool.
	UPROPERTY(EditAnywhere, Category = "Pool_stt|Physics", meta = (EditCondition = "bManagePhysicsAndGravityState_stt", EditConditionHides))
	bool bEnableGravityInPool_stt = false;

	// Logs de depuracion take/return.
	UPROPERTY(EditAnywhere, Category = "Pool_stt|Debug")
	bool bLogPoolLifecycle_stt = false;

	UPROPERTY(Transient)
	bool bIsInitialized_stt = false;

	UPROPERTY(Transient)
	TArray<TObjectPtr<ABP_PoolableActorBase_stt>> AllPooledActors_stt;

	UPROPERTY(Transient)
	TArray<TObjectPtr<ABP_PoolableActorBase_stt>> AvailableActors_stt;
};
