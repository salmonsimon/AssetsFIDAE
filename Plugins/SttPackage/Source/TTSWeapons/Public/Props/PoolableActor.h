// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PoolableActor.generated.h"

class UBpcPoolBase;

// Interfaz reflejada para Blueprint.
// Permite que actores C++ y BP participen en el ciclo del pool sin acoplarse
// a una clase concreta de actor.
UINTERFACE(BlueprintType)
class TTSWEAPONS_API UPoolableActor : public UInterface
{
	GENERATED_BODY()
};

// Contrato de objetos "poolables".
// Un actor que implemente esta interfaz puede ser activado/desactivado por UBpcPoolBase
// y notificado en cada transicion.
class TTSWEAPONS_API IPoolableActor
{
	GENERATED_BODY()

public:
	// Callback al salir del pool para entrar en uso activo.
	// Aqui se suelen resetear estados internos, fisica y efectos temporales.
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Pool")
	void OnTakenFromPool();

	// Callback al volver al pool.
	// Aqui se suelen apagar timers, particulas, sonidos, etc.
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Pool")
	void OnReturnedToPool();

	// Registra que pool es el dueno real del actor.
	// Esto evita ambiguedad cuando un mismo Owner tiene mas de un componente de pool.
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Pool")
	void SetPoolSource(UBpcPoolBase* InPoolSource);

	// Permite consultar el pool que originalmente gestiona este actor.
	// Se usa durante el retorno para no depender de FindComponentByClass.
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Pool")
	UBpcPoolBase* GetPoolSource() const;
};
