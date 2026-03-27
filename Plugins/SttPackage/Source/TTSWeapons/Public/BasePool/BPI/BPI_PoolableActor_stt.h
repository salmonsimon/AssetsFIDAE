// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BPI_PoolableActor_stt.generated.h"

// Interface Blueprint para interactuar con actores poolables STT sin hard cast.
UINTERFACE(BlueprintType)
class TTSWEAPONS_API UBPI_PoolableActor_stt : public UInterface
{
	GENERATED_BODY()
};

class TTSWEAPONS_API IBPI_PoolableActor_stt
{
	GENERATED_BODY()

public:
	// Solicita fase 1 de retorno (request).
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Pool_stt|BPI")
	void BPI_RequestDeactivateToPool_stt();

	// Solicita fase 2 de retorno (finalize).
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Pool_stt|BPI")
	void BPI_FinalizeReturnToPool_stt();

	// Habilita/deshabilita solamente fisica y gravedad del actor poolable.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Pool_stt|BPI")
	void BPI_SetPhysicsAndGravityEnabled_stt(bool bEnablePhysics, bool bEnableGravity);

	// Atajo para activar fisica + gravedad.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Pool_stt|BPI")
	void BPI_EnablePhysicsAndGravity_stt();

	// Atajo para desactivar fisica + gravedad.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Pool_stt|BPI")
	void BPI_DisablePhysicsAndGravity_stt();

	// Estado: true si esta guardado/inactivo dentro del pool.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Pool_stt|BPI")
	bool BPI_IsInPool_stt() const;

	// Estado: true si ya inicio el retorno y esta pendiente de finalize.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Pool_stt|BPI")
	bool BPI_IsReturnInProgress_stt() const;
};

