// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "BpcMagazineManager.generated.h"

UENUM(BlueprintType)
enum class EShootAttemptResult : uint8
{
	Fired UMETA(DisplayName = "Fired"),
	Rejected UMETA(DisplayName = "Rejected")
};

UENUM(BlueprintType)
enum class EShootRejectReason : uint8
{
	None UMETA(DisplayName = "None"),
	NoRoundInChamber UMETA(DisplayName = "No Round In Chamber"),
	SlideLockedBack UMETA(DisplayName = "Slide Locked Back"),
	ChamberHasSpentCasing UMETA(DisplayName = "Chamber Has Spent Casing"),
	Busy UMETA(DisplayName = "Busy")
};

UENUM(BlueprintType)
enum class EChamberEjectedType : uint8
{
	None UMETA(DisplayName = "None"),
	LiveRound UMETA(DisplayName = "Live Round"),
	SpentCasing UMETA(DisplayName = "Spent Casing")
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMagazineInsertedSignature, int32, CurrentMagAmmo, int32, MaxMagAmmo);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMagazineRemovedSignature, int32, RemainingAmmoInRemovedMag);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSpentCasingEjectedSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLiveRoundEjectedSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSlideLockedBackSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FUpdateAmmoUMGSignature, bool, bHasMagazineInserted, bool, bHasRoundInChamber, int32, CurrentMagAmmo, int32, MaxMagAmmo);

// Componente C++ para controlar estado de cargador/recamara/slide desacoplado de animaciones.
// Este BPC no ejecuta animaciones ni FX; solo valida y muta estado.
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class TTSWEAPONS_API UBpcMagazineManager : public UActorComponent
{
	GENERATED_BODY()

public:
	UBpcMagazineManager();

	// === Disparo ===
	// Inputs: ninguno.
	// Outputs:
	// - OutResult: Fired si el arma disparo; Rejected si no pudo disparar.
	// - OutFailReason: motivo de rechazo cuando OutResult = Rejected.
	// - OutWasStateChanged: true solo si este llamado cambio el estado del arma.
	// No reproduce animaciones ni VFX/SFX.
	UFUNCTION(BlueprintCallable, Category = "Weapon|Shoot", meta = (ToolTip = "Inputs: none. Outputs: OutResult = fired/rejected; OutFailReason = reject reason when rejected; OutWasStateChanged = true only if this call changed weapon state."))
	void TryShoot(EShootAttemptResult& OutResult, EShootRejectReason& OutFailReason, bool& OutWasStateChanged);

	// Inputs: ninguno.
	// Return: true si consumio una bala viva de la recamara y dejo un casquillo servido pendiente de extraccion.
	// Se expone para compatibilidad con flujos BP existentes.
	UFUNCTION(BlueprintCallable, Category = "Weapon|Shoot", meta = (ToolTip = "Inputs: none. Return: true if a live round was consumed from the chamber and a spent casing was left pending extraction."))
	bool ConsumeRoundOnFire();

	// Inputs: ninguno.
	// Return: true si habia un casquillo servido en recamara, se limpio y se emitio OnSpentCasingEjected.
	// Debe llamarse desde Anim Notify en el frame de extraccion/eyeccion del disparo.
	UFUNCTION(BlueprintCallable, Category = "Weapon|Shoot", meta = (ToolTip = "Inputs: none. Return: true if a spent casing was present in the chamber, got cleared, and OnSpentCasingEjected was emitted."))
	bool OnShotExtractionMoment();

	// === Cargador ===
	// Inputs: ninguno.
	// Outputs: ninguno.
	// Inserta un cargador lleno usando MaxMagAmmo como municion inicial.
	UFUNCTION(BlueprintCallable, Category = "Weapon|Magazine", meta = (ToolTip = "Inputs: none. Outputs: none. Inserts a magazine using MaxMagAmmo as initial ammo."))
	void InsertMagazineDefault();

	// Inputs:
	// - InAmmo: municion actual del cargador que se esta insertando.
	// Outputs: ninguno.
	// La municion se clampa al rango [0, MaxMagAmmo].
	UFUNCTION(BlueprintCallable, Category = "Weapon|Magazine", meta = (ToolTip = "Input: InAmmo = current ammo in the magazine being inserted. Outputs: none. Ammo is clamped to [0, MaxMagAmmo]."))
	void InsertMagazineCustom(int32 InAmmo);

	// Inputs: ninguno.
	// Return: municion restante del cargador extraido; devuelve 0 si no habia cargador insertado.
	UFUNCTION(BlueprintCallable, Category = "Weapon|Magazine", meta = (ToolTip = "Inputs: none. Return: remaining ammo in the removed magazine, or 0 if no magazine was inserted."))
	int32 RemoveMagazine();

	// === Recamara / Slide ===
	// Inputs: ninguno.
	// Return: true si hay municion en cargador, la recamara esta libre y la accion no esta bloqueada.
	UFUNCTION(BlueprintPure, Category = "Weapon|Chamber", meta = (ToolTip = "Inputs: none. Return: true if there is magazine ammo available, the chamber is free, and the action is not busy."))
	bool CanChamberRound() const;

	// Inputs: ninguno.
	// Return: true si logro alimentar una nueva bala viva desde el cargador hacia la recamara.
	UFUNCTION(BlueprintCallable, Category = "Weapon|Chamber", meta = (ToolTip = "Inputs: none. Return: true if a new live round was successfully fed from the magazine into the chamber."))
	bool TryChamberRound();

	// Inputs: ninguno.
	// Return:
	// - None: no habia contenido en recamara o la accion estaba bloqueada.
	// - LiveRound: se expulso una bala viva.
	// - SpentCasing: se expulso un casquillo servido.
	UFUNCTION(BlueprintCallable, Category = "Weapon|Chamber", meta = (ToolTip = "Inputs: none. Return: what was ejected from the chamber: none, live round, or spent casing."))
	EChamberEjectedType EjectChamber();

	// Inputs: ninguno.
	// Outputs:
	// - OutEjectedType: que contenido fue expulsado de la recamara antes de intentar alimentar.
	// - OutDidChamberNewRound: true solo si, despues de expulsar el contenido actual, se logro recamarar una nueva bala viva desde el cargador en este mismo ciclo manual.
	// Simula ciclado manual: expulsar lo que haya + intentar alimentar nueva ronda.
	UFUNCTION(BlueprintCallable, Category = "Weapon|Chamber", meta = (ToolTip = "Inputs: none. Outputs: OutEjectedType = what was expelled from the chamber first; OutDidChamberNewRound = true only if this same manual cycle successfully chambered a new live round from the magazine afterward."))
	void ManualChamber(EChamberEjectedType& OutEjectedType, bool& OutDidChamberNewRound);

	// === Estado / utilidades ===
	// Inputs: ninguno.
	// Return: true solo cuando hay una bala viva en recamara.
	UFUNCTION(BlueprintPure, Category = "Weapon|State", meta = (ToolTip = "Inputs: none. Return: true only when there is a live round in the chamber."))
	bool HasLiveRoundInChamber() const;

	// Inputs: ninguno.
	// Return: true solo cuando hay una bala viva en recamara; alias explicito para UI/Blueprint.
	UFUNCTION(BlueprintPure, Category = "Weapon|State", meta = (ToolTip = "Inputs: none. Return: true only when there is a live round in the chamber. Explicit alias for UI/Blueprint."))
	bool IsRoundInChamber() const { return HasLiveRoundInChamber(); }

	// Inputs: ninguno.
	// Return: true si hay cualquier contenido en recamara, ya sea bala viva o casquillo.
	UFUNCTION(BlueprintPure, Category = "Weapon|State", meta = (ToolTip = "Inputs: none. Return: true if the chamber contains anything, either a live round or a spent casing."))
	bool HasAnyChamberContent() const;

	// Inputs: ninguno.
	// Return: true si hay cargador insertado y todavia quedan balas en el cargador.
	UFUNCTION(BlueprintPure, Category = "Weapon|State", meta = (ToolTip = "Inputs: none. Return: true if a magazine is inserted and it still has ammo."))
	bool HasAmmoInMagazine() const;

	// Inputs: ninguno.
	// Return: true si el slide esta retenido atras por estado logico del arma.
	UFUNCTION(BlueprintPure, Category = "Weapon|State", meta = (ToolTip = "Inputs: none. Return: true if the slide is logically locked back."))
	bool IsSlideLockedBack() const { return bSlideLockedBack; }

	// Inputs: ninguno.
	// Return: true si actualmente hay un cargador insertado.
	UFUNCTION(BlueprintPure, Category = "Weapon|State", meta = (ToolTip = "Inputs: none. Return: true if a magazine is currently inserted."))
	bool IsMagazineInserted() const { return bHasMagazineInserted; }

	// Inputs: ninguno.
	// Return: balas restantes en el cargador actualmente insertado.
	UFUNCTION(BlueprintPure, Category = "Weapon|State", meta = (ToolTip = "Inputs: none. Return: ammo remaining in the currently inserted magazine."))
	int32 GetCurrentMagAmmo() const { return CurrentMagAmmo; }

	// Inputs: ninguno.
	// Return: capacidad maxima configurada para el cargador.
	UFUNCTION(BlueprintPure, Category = "Weapon|State", meta = (ToolTip = "Inputs: none. Return: configured maximum magazine capacity."))
	int32 GetMaxMagAmmo() const { return MaxMagAmmo; }

	// Inputs:
	// - InMaxMagAmmo: nueva capacidad maxima del cargador.
	// Outputs: ninguno.
	// Si el valor baja por debajo de CurrentMagAmmo, se clampa al nuevo maximo.
	UFUNCTION(BlueprintCallable, Category = "Weapon|Magazine", meta = (ToolTip = "Input: InMaxMagAmmo = new maximum magazine capacity. Outputs: none. If the new max is below CurrentMagAmmo, current ammo is clamped down to the new max."))
	void SetMaxMagAmmo(int32 InMaxMagAmmo);

	// Inputs:
	// - bInBusy: true para bloquear acciones; false para liberarlas.
	// Outputs: ninguno.
	// Gate opcional para bloquear acciones durante secuencias de animacion/interaction.
	UFUNCTION(BlueprintCallable, Category = "Weapon|State", meta = (ToolTip = "Input: bInBusy = true to block weapon actions, false to allow them again. Outputs: none."))
	void SetActionBusy(bool bInBusy) { bIsActionBusy = bInBusy; }

	// Inputs: ninguno.
	// Return: true si el arma esta bloqueada para acciones.
	UFUNCTION(BlueprintPure, Category = "Weapon|State", meta = (ToolTip = "Inputs: none. Return: true if weapon actions are currently blocked."))
	bool IsActionBusy() const { return bIsActionBusy; }

	// === Eventos Blueprint ===
	UPROPERTY(BlueprintAssignable, Category = "Weapon|Events")
	FOnMagazineInsertedSignature OnMagazineInserted;

	UPROPERTY(BlueprintAssignable, Category = "Weapon|Events")
	FOnMagazineRemovedSignature OnMagazineRemoved;

	UPROPERTY(BlueprintAssignable, Category = "Weapon|Events")
	FOnSpentCasingEjectedSignature OnSpentCasingEjected;

	UPROPERTY(BlueprintAssignable, Category = "Weapon|Events")
	FOnLiveRoundEjectedSignature OnLiveRoundEjected;

	// Dispara solo cuando el slide pasa de no-retenido a retenido atras.
	UPROPERTY(BlueprintAssignable, Category = "Weapon|Events")
	FOnSlideLockedBackSignature OnSlideLockedBack;

	// Evento unificado para refrescar HUD/UMG de municion y recamara.
	UPROPERTY(BlueprintAssignable, Category = "Weapon|Events")
	FUpdateAmmoUMGSignature UpdateAmmoUMG;

protected:
	virtual void BeginPlay() override;

private:
	void SanitizeState();
	void UpdateSlideLockState();
	void BroadcastUpdateAmmoUMG();

private:
	// Si true, al insertar cargador intenta alimentar recamara si esta vacia.
	UPROPERTY(EditAnywhere, Category = "Weapon|Magazine")
	bool bAutoChamberOnInsertIfPossible = false;

	// Capacidad maxima del cargador (para InsertMagazineDefault y clamp de custom).
	UPROPERTY(EditAnywhere, Category = "Weapon|Magazine", meta = (ClampMin = "0"))
	int32 MaxMagAmmo = 17;

	// Estado de runtime: cargador insertado.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon|State", meta = (AllowPrivateAccess = "true"))
	bool bHasMagazineInserted = false;

	// Estado de runtime: balas restantes en cargador insertado.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon|State", meta = (AllowPrivateAccess = "true"))
	int32 CurrentMagAmmo = 0;

	// Estado de runtime: hay bala viva en recamara.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon|State", meta = (AllowPrivateAccess = "true"))
	bool bHasRoundChambered = false;

	// Estado de runtime: hay casquillo servido pendiente en recamara.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon|State", meta = (AllowPrivateAccess = "true"))
	bool bChamberHasSpentCasing = false;

	// Estado de runtime: slide retenido atras (tipicamente por cargador vacio con recamara vacia).
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon|State", meta = (AllowPrivateAccess = "true"))
	bool bSlideLockedBack = false;

	// Bloqueo externo para evitar acciones en momentos invalidos de gameplay/animacion.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon|State", meta = (AllowPrivateAccess = "true"))
	bool bIsActionBusy = false;

	// Cache del ultimo estado emitido para no spamear UpdateAmmoUMG con valores repetidos.
	bool bHasBroadcastedAmmoState = false;
	bool bLastBroadcastHasMagazineInserted = false;
	bool bLastBroadcastHasRoundInChamber = false;
	int32 LastBroadcastCurrentMagAmmo = 0;
	int32 LastBroadcastMaxMagAmmo = 0;
};
