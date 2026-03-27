// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Props/PoolableActor.h"
#include "BulletShell.generated.h"

class UStaticMeshComponent;
class UPrimitiveComponent;
class USoundBase;
class USoundCue;
class UBpcPoolBase;
struct FHitResult;
struct FTimerHandle;

// Actor de casquillo reutilizable por pool.
// Objetivos:
// - Simular eyeccion fisica realista y estable.
// - Soportar retorno seguro al pool (idempotente).
// - Exponer parametros de ajuste en editor/Blueprint.
// - Mantener compatibilidad con assets previos.
UCLASS()
class TTSWEAPONS_API ABulletShell : public AActor, public IPoolableActor
{
	GENERATED_BODY()
	
	
public:	
	// Sets default values for this actor's properties
	ABulletShell();

	// API publica de eyeccion.
	// Recibe un transform de eyeccion en mundo y aplica todo el flujo:
	// - set de transform
	// - reset de velocidades
	// - direccion base
	// - spread minimo en cono
	// - impulso lineal
	// - impulso angular
	// - comportamiento reproducible opcional por semilla
	UFUNCTION(BlueprintCallable, Category = "CustomSettings|Ejection")
	void ActivateEjection(const FTransform& EjectionTransform);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Callback de colision del mesh principal.
	// Dispara audio y programa retorno al pool cuando corresponde.
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	virtual void OnTakenFromPool_Implementation() override;
	virtual void OnReturnedToPool_Implementation() override;
	virtual void SetPoolSource_Implementation(UBpcPoolBase* InPoolSource) override;
	virtual UBpcPoolBase* GetPoolSource_Implementation() const override;

	// Intenta devolver al pool fuente; si falla, destruye actor como fallback.
	void ReturnToPoolOrDestroy();
	// Resuelve el pool asociado al actor.
	// Prioriza PoolSource explicitamente seteado por el pool.
	UBpcPoolBase* ResolvePoolComponent() const;
	// Construye el transform final de eyeccion en runtime,
	// aplicando opcionalmente el offset custom de posicion/rotacion.
	FTransform BuildRuntimeEjectionTransform() const;
	// Calcula direccion base (estable) de eyeccion a partir de pesos en ejes locales.
	FVector BuildBaseEjectionDirection() const;
	// Devuelve direccion final con variacion pequena en cono alrededor de la base.
	// Si SeededStream existe, el resultado es reproducible.
	FVector GenerateDirectionWithConeSpread(const FVector& BaseDirection, FRandomStream* SeededStream) const;
	// Genera vector unitario aleatorio para impulso angular independiente.
	// Usa stream determinista cuando hay semilla fija.
	FVector GenerateRandomUnitVector(FRandomStream* SeededStream) const;
	// Resuelve fuerza lineal final considerando compatibilidad legacy.
	float ResolveImpulseStrengthForRuntime() const;
	// Arma un temporizador de seguridad para devolver al pool si no hubo colision.
	void StartActiveFailSafeTimer();

	// Mesh fisico principal del casquillo.
	// Tambien actua como RootComponent del actor.
	UPROPERTY(VisibleAnywhere, Category = "CustomSettings|Components")
	UStaticMeshComponent* BulletShellMesh;

	// Si esta activo, se aplica un offset custom de transform antes de eyectar.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Ejection")
	bool bUseCustomEjectionTransform = false;

	UPROPERTY(EditAnywhere, Category = "CustomSettings|Ejection", meta = (EditCondition = "bUseCustomEjectionTransform", EditConditionHides))
	FTransform EjectionTransformOffset = FTransform::Identity;

	// Magnitud del impulso lineal principal.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Ejection", meta = (ToolTip = "Fuerza principal de eyeccion aplicada en la direccion calculada."))
	float ImpulseStrength = 10.0f;

	// Mitad del angulo del cono para variacion minima de direccion.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Ejection", meta = (ClampMin = "0.0", ClampMax = "45.0", ToolTip = "Mitad del cono de variacion en grados. Recomendado entre 2 y 6 para dispersion muy pequena."))
	float ConeHalfAngleDeg = 3.0f;

	// Magnitud del impulso angular aleatorio en grados.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Ejection", meta = (ClampMin = "0.0", ToolTip = "Fuerza angular aleatoria aplicada de manera independiente al impulso lineal."))
	float AngularImpulseStrength = 120.0f;

	// Activa un sistema de giro estable para evitar el "tumbling" tipo 8.
	// Cuando esta activo, se ignora el impulso angular aleatorio clasico y se aplica
	// velocidad angular controlada sobre un eje principal.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Spin", meta = (ToolTip = "Activa un modo de spin estable. Al desactivarlo vuelve al sistema angular manual actual."))
	bool bUseStableSpinSystem = false;

	// Eje local del actor sobre el cual se busca girar de forma estable.
	// Ajustalo segun orientacion real del mesh (normalmente X o Y).
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Spin", meta = (EditCondition = "bUseStableSpinSystem", EditConditionHides, ToolTip = "Eje local principal para el giro estable."))
	FVector StableSpinAxisLocal = FVector(1.0f, 0.0f, 0.0f);

	// Velocidad angular objetivo en grados/seg para el modo estable.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Spin", meta = (EditCondition = "bUseStableSpinSystem", EditConditionHides, ClampMin = "0.0", ToolTip = "Velocidad angular del modo estable (grados por segundo)."))
	float StableSpinSpeedDegPerSec = 900.0f;

	// Velocidad angular aplicada al primer impacto para evitar efecto "trompo".
	// Al volver al pool se restaura StableSpinSpeedDegPerSec al valor original configurado.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Spin", meta = (EditCondition = "bUseStableSpinSystem", EditConditionHides, ClampMin = "0.0", ToolTip = "Velocidad angular al impactar (grados por segundo)."))
	float StableSpinSpeedOnHitDegPerSec = 1.0f;

	// Cantidad de impactos tras los cuales se fuerza reposo total.
	// 1 = se detiene en el primer hit, 2..6 permiten mas rebotes antes de detenerse.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Spin", meta = (ClampMin = "1", ClampMax = "6", ToolTip = "Numero de impactos antes de forzar stop total del casquillo."))
	int32 HitsBeforeForceStop = 2;

	// Ventana de gracia para ignorar colisiones espurias al salir del arma.
	// Evita contabilizar micro-hits en aire apenas se activa el casquillo.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Spin", meta = (ClampMin = "0.0", ToolTip = "Tiempo minimo (s) desde activacion para empezar a contar hits validos."))
	float MinHitAgeSeconds = 0.03f;

	// Pequena variacion angular alrededor del eje estable para que no se vea robotico.
	// Mantener bajo para no volver al tumbling.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Spin", meta = (EditCondition = "bUseStableSpinSystem", EditConditionHides, ClampMin = "0.0", ClampMax = "30.0", ToolTip = "Jitter en grados alrededor del eje estable."))
	float StableSpinAxisJitterDeg = 4.0f;

	// Si esta activo, alterna el sentido de giro (+/-) en cada activacion.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Spin", meta = (EditCondition = "bUseStableSpinSystem", EditConditionHides, ToolTip = "Randomiza el sentido del giro estable (+ o -)."))
	bool bRandomizeStableSpinDirection = true;

	// Peso del eje Right para direccion base.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Ejection", meta = (ToolTip = "Peso del eje Right del actor en la direccion base de eyeccion."))
	float RightWeight = 1.0f;

	// Peso del eje Up para direccion base.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Ejection", meta = (ToolTip = "Peso del eje Up del actor en la direccion base de eyeccion."))
	float UpWeight = 0.4f;

	// Peso del eje Forward para direccion base.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Ejection", meta = (ToolTip = "Peso del eje Forward del actor en la direccion base de eyeccion."))
	float ForwardWeight = 0.0f;

	// Si true, el impulso se interpreta como cambio de velocidad directo.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Ejection", meta = (ToolTip = "Si esta activo, los impulsos ignoran masa y se aplican como cambio de velocidad."))
	bool bImpulseVelChange = false;

	// Semilla opcional para reproducibilidad.
	// -1 = aleatorio normal.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Ejection", meta = (ToolTip = "Semilla para resultados reproducibles. -1 usa aleatoriedad normal del motor."))
	int32 RandomSeed = -1;

	// Compatibilidad con assets anteriores que usaban EjectionImpulse.
	// Si ImpulseStrength no fue ajustado y este valor difiere del default historico, se usa este como fallback.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Ejection", meta = (ToolTip = "Propiedad legacy para compatibilidad con assets previos."))
	float EjectionImpulseLegacy = 10.0f;

	UPROPERTY(EditAnywhere, Category = "CustomSettings|Sound")
	USoundCue* BulletShellSound;

	// Permite elegir entre SoundCue clasico y MetaSound moderno.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Sound")
	bool bUseMetaSound = false;

	UPROPERTY(EditAnywhere, Category = "CustomSettings|Sound", meta = (EditCondition = "bUseMetaSound", EditConditionHides))
	USoundBase* BulletShellMetaSound;

	// Retardo entre impacto y retorno al pool.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Pool", meta = (ClampMin = "0.0"))
	float ReturnToPoolDelay = 0.75f;

	// Tiempo maximo de vida activa como fail-safe.
	// Si el casquillo nunca colisiona, este timer fuerza el retorno al pool.
	// Valor 0 desactiva el fail-safe.
	UPROPERTY(EditAnywhere, Category = "CustomSettings|Pool", meta = (ClampMin = "0.0"))
	float MaxActiveLifetime = 5.0f;

	// Pool real que creo/gestiona este actor.
	// Se usa para evitar ambiguedad cuando el owner tiene multiples pools.
	UPROPERTY(Transient)
	TWeakObjectPtr<UBpcPoolBase> PoolSourceComponent;

	// Estado interno para hacer el retorno idempotente.
	// true cuando el actor ya fue regresado al pool.
	UPROPERTY(Transient)
	bool bIsInPool = false;

	// Estado interno para evitar programar multiples retornos en paralelo.
	UPROPERTY(Transient)
	bool bReturnScheduled = false;

	// Evita reproducir el sonido de impacto multiples veces por rebotes rapidos.
	UPROPERTY(Transient)
	bool bHasPlayedImpactSound = false;

	// Contador interno para secuencia determinista cuando RandomSeed >= 0.
	UPROPERTY(Transient)
	int32 EjectionActivationCount = 0;

	// Conteo de impactos desde la ultima activacion del pool.
	UPROPERTY(Transient)
	int32 HitCountSinceActivation = 0;

	// Timestamp de activacion para filtrar hits espurios inmediatamente tras eyectar.
	UPROPERTY(Transient)
	float ActivationWorldTimeSeconds = -1.0f;

	// Cache del valor original configurado para restaurarlo al volver al pool.
	UPROPERTY(Transient)
	float CachedStableSpinSpeedDegPerSec = 0.0f;

	UPROPERTY(Transient)
	bool bHasCachedStableSpinSpeed = false;

	// Timer para retorno normal post-impacto.
	FTimerHandle ReturnToPoolTimerHandle;
	// Timer de seguridad para evitar actores activos eternos.
	FTimerHandle ActiveFailSafeTimerHandle;

};
