// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "BpcPoolBase.generated.h"

class AActor;

// Componente de pooling generico para actores.
// Responsabilidades:
// 1) Crear instancias de una clase objetivo.
// 2) Mantenerlas inactivas hasta que se pidan.
// 3) Activarlas/devolverlas de forma segura e idempotente.
// 4) Exponer API simple para Blueprint.
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class TTSWEAPONS_API UBpcPoolBase : public UActorComponent
{
	GENERATED_BODY()

public:
	// Constructor del componente.
	// Define defaults de ejecucion (sin Tick, configuracion base de pool).
	UBpcPoolBase();

	// Inicializa el pool una sola vez.
	// Crea instancias iniciales segun InitialPoolSize y las deja inactivas.
	UFUNCTION(BlueprintCallable, Category = "Pool")
	void InitPool();

	// Fuerza la creacion de mas elementos dentro del mismo pool.
	// Devuelve cuantos actores realmente se pudieron agregar.
	UFUNCTION(BlueprintCallable, Category = "Pool")
	int32 FillPool(int32 Amount);

	// Obtiene un actor disponible, lo activa y lo posiciona con SpawnTransform.
	// Si no hay disponibles y bAutoExpand es true, intenta crecer automaticamente.
	UFUNCTION(BlueprintCallable, Category = "Pool")
	AActor* GetAvailableActor(const FTransform& SpawnTransform);

	// Retorna un actor al pool.
	// La implementacion es idempotente: devolver 2 veces el mismo actor no rompe el estado.
	UFUNCTION(BlueprintCallable, Category = "Pool")
	bool ReturnActorToPool(AActor* Actor);

	// Cantidad de instancias actualmente disponibles para reutilizar.
	// No incluye actores activos fuera del pool.
	UFUNCTION(BlueprintPure, Category = "Pool")
	int32 GetAvailableCount() const { return AvailableActors.Num(); }

	// Cantidad total de actores pertenecientes al pool (activos + disponibles).
	UFUNCTION(BlueprintPure, Category = "Pool")
	int32 GetTotalCount() const { return AllPooledActors.Num(); }

protected:
	// Hook de ciclo de vida de Unreal.
	// Se aprovecha para inicializar automaticamente cuando corresponde.
	virtual void BeginPlay() override;

private:
	// Deja el actor en estado de "en pool" (oculto, sin colision y sin tick).
	void ConfigureActorForPool(AActor* Actor);
	// Saca el actor del pool y lo deja listo para usarse en juego.
	void ActivateActorFromPool(AActor* Actor, const FTransform& SpawnTransform);
	// Limpia referencias invalidas para mantener consistente el estado interno.
	void PruneInvalidActors();
	// Reinicia velocidades y duerme rigid bodies para evitar arrastre de estado.
	void ResetRigidBodyStateForPool(AActor* Actor) const;
	// Aplica toggles de fisica/gravedad sobre componentes primitivos del actor.
	void ApplyPhysicsAndGravityState(AActor* Actor, bool bEnablePhysics, bool bEnableGravity) const;
	// Log opcional de take/return para depuracion de estado del pool.
	void LogPoolLifecycleIfEnabled(const TCHAR* Action, const AActor* Actor) const;

	// Clase de actor que va a construir el pool.
	// Debe ser compatible con el uso esperado por quien consume el pool.
	UPROPERTY(EditAnywhere, Category = "Pool")
	TSubclassOf<AActor> PooledActorClass;

	// Cantidad inicial de actores al inicializar.
	// Usar un valor razonable evita spikes de spawn durante gameplay.
	UPROPERTY(EditAnywhere, Category = "Pool", meta = (ClampMin = "0"))
	int32 InitialPoolSize = 10;

	// Si es true, el pool se inicializa automaticamente en BeginPlay.
	// Si es false, debes llamar InitPool manualmente desde BP/C++.
	UPROPERTY(EditAnywhere, Category = "Pool")
	bool bStartInitialized = true;

	// Permite crecer automaticamente cuando no hay disponibles.
	UPROPERTY(EditAnywhere, Category = "Pool")
	bool bAutoExpand = true;

	// Cantidad de actores a agregar por cada crecimiento automatico.
	// Solo aplica cuando bAutoExpand = true.
	UPROPERTY(EditAnywhere, Category = "Pool", meta = (ClampMin = "1", EditCondition = "bAutoExpand", EditConditionHides))
	int32 AutoExpandAmount = 1;

	// Al tomar actor del pool, setea transform usando TeleportPhysics para evitar arrastre fisico.
	UPROPERTY(EditAnywhere, Category = "Pool|Physics")
	bool bTeleportPhysicsOnActivate = true;

	// Al retornar actor al pool, fuerza detach del parent para evitar heredar sockets/parents previos.
	UPROPERTY(EditAnywhere, Category = "Pool|Physics")
	bool bDetachFromParentOnReturn = true;

	// Al retornar actor al pool, limpia velocidades y duerme rigid bodies.
	UPROPERTY(EditAnywhere, Category = "Pool|Physics")
	bool bResetRigidBodyStateOnReturn = true;

	// Si true, el pool controla fisica/gravedad en take/return.
	UPROPERTY(EditAnywhere, Category = "Pool|Physics")
	bool bManagePhysicsAndGravityState = false;

	// Estado de fisica al activar actor.
	UPROPERTY(EditAnywhere, Category = "Pool|Physics", meta = (EditCondition = "bManagePhysicsAndGravityState", EditConditionHides))
	bool bEnablePhysicsWhenActive = true;

	// Estado de gravedad al activar actor.
	UPROPERTY(EditAnywhere, Category = "Pool|Physics", meta = (EditCondition = "bManagePhysicsAndGravityState", EditConditionHides))
	bool bEnableGravityWhenActive = true;

	// Estado de fisica al guardar actor en pool.
	UPROPERTY(EditAnywhere, Category = "Pool|Physics", meta = (EditCondition = "bManagePhysicsAndGravityState", EditConditionHides))
	bool bEnablePhysicsInPool = false;

	// Estado de gravedad al guardar actor en pool.
	UPROPERTY(EditAnywhere, Category = "Pool|Physics", meta = (EditCondition = "bManagePhysicsAndGravityState", EditConditionHides))
	bool bEnableGravityInPool = false;

	// Logs de diagnostico para take/return.
	UPROPERTY(EditAnywhere, Category = "Pool|Debug")
	bool bLogPoolLifecycle = false;

	// Estado interno: indica si InitPool ya corrio con exito al menos una vez.
	UPROPERTY(Transient)
	bool bIsInitialized = false;

	// Universo total de instancias que pertenecen a este pool.
	// Se usa para validar pertenencia en ReturnActorToPool.
	UPROPERTY(Transient)
	TArray<TObjectPtr<AActor>> AllPooledActors;

	// Subconjunto de AllPooledActors listo para entregar via GetAvailableActor.
	UPROPERTY(Transient)
	TArray<TObjectPtr<AActor>> AvailableActors;
};
	
