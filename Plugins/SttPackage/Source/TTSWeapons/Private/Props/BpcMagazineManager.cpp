// Fill out your copyright notice in the Description page of Project Settings.

#include "Props/BpcMagazineManager.h"

// ============================================================
// UBpcMagazineManager
// Logica de estado balistico simple para arma corta:
// - Cargador
// - Recamara
// - Casquillo servido
// - Slide lock
//
// Regla central:
// Este componente no decide ni dispara animaciones/FX/SFX.
// Solo resuelve estado y emite eventos.
// ============================================================
UBpcMagazineManager::UBpcMagazineManager()
{
	PrimaryComponentTick.bCanEverTick = false;
}


void UBpcMagazineManager::BeginPlay()
{
	Super::BeginPlay();
	SanitizeState();
	UpdateSlideLockState();
	BroadcastUpdateAmmoUMG();
}


void UBpcMagazineManager::TryShoot(EShootAttemptResult& OutResult, EShootRejectReason& OutFailReason, bool& OutWasStateChanged)
{
	OutResult = EShootAttemptResult::Rejected;
	OutFailReason = EShootRejectReason::None;
	OutWasStateChanged = false;

	if (bIsActionBusy)
	{
		OutFailReason = EShootRejectReason::Busy;
		return;
	}

	if (bSlideLockedBack)
	{
		OutFailReason = EShootRejectReason::SlideLockedBack;
		return;
	}

	if (bChamberHasSpentCasing)
	{
		OutFailReason = EShootRejectReason::ChamberHasSpentCasing;
		return;
	}

	if (!HasLiveRoundInChamber())
	{
		OutFailReason = EShootRejectReason::NoRoundInChamber;
		return;
	}

	if (!ConsumeRoundOnFire())
	{
		OutFailReason = EShootRejectReason::NoRoundInChamber;
		return;
	}

	OutResult = EShootAttemptResult::Fired;
	OutFailReason = EShootRejectReason::None;
	OutWasStateChanged = true;
}


bool UBpcMagazineManager::ConsumeRoundOnFire()
{
	if (!HasLiveRoundInChamber() || bIsActionBusy)
	{
		return false;
	}

	// La bala sale del canion y queda casquillo servido pendiente de extraccion.
	bHasRoundChambered = false;
	bChamberHasSpentCasing = true;

	SanitizeState();
	UpdateSlideLockState();
	BroadcastUpdateAmmoUMG();
	return true;
}


bool UBpcMagazineManager::OnShotExtractionMoment()
{
	if (bIsActionBusy || !bChamberHasSpentCasing)
	{
		return false;
	}

	bChamberHasSpentCasing = false;
	bHasRoundChambered = false;

	OnSpentCasingEjected.Broadcast();

	SanitizeState();
	UpdateSlideLockState();
	BroadcastUpdateAmmoUMG();
	return true;
}


void UBpcMagazineManager::InsertMagazineDefault()
{
	InsertMagazineCustom(MaxMagAmmo);
}


void UBpcMagazineManager::InsertMagazineCustom(int32 InAmmo)
{
	const int32 SafeMaxAmmo = FMath::Max(0, MaxMagAmmo);
	const int32 ClampedAmmo = FMath::Clamp(InAmmo, 0, SafeMaxAmmo);

	bHasMagazineInserted = true;
	CurrentMagAmmo = ClampedAmmo;

	SanitizeState();
	UpdateSlideLockState();

	if (bAutoChamberOnInsertIfPossible && !HasAnyChamberContent())
	{
		TryChamberRound();
	}

	OnMagazineInserted.Broadcast(CurrentMagAmmo, SafeMaxAmmo);
	BroadcastUpdateAmmoUMG();
}


void UBpcMagazineManager::SetMaxMagAmmo(int32 InMaxMagAmmo)
{
	MaxMagAmmo = FMath::Max(0, InMaxMagAmmo);

	SanitizeState();
	UpdateSlideLockState();
	BroadcastUpdateAmmoUMG();
}


int32 UBpcMagazineManager::RemoveMagazine()
{
	const int32 RemovedAmmo = bHasMagazineInserted ? CurrentMagAmmo : 0;

	bHasMagazineInserted = false;
	CurrentMagAmmo = 0;

	SanitizeState();
	UpdateSlideLockState();

	OnMagazineRemoved.Broadcast(RemovedAmmo);
	BroadcastUpdateAmmoUMG();
	return RemovedAmmo;
}


bool UBpcMagazineManager::CanChamberRound() const
{
	if (bIsActionBusy)
	{
		return false;
	}

	if (!HasAmmoInMagazine())
	{
		return false;
	}

	// Solo se alimenta recamara si esta totalmente libre.
	return !HasAnyChamberContent();
}


bool UBpcMagazineManager::TryChamberRound()
{
	if (!CanChamberRound())
	{
		return false;
	}

	CurrentMagAmmo = FMath::Max(0, CurrentMagAmmo - 1);
	bHasRoundChambered = true;
	bChamberHasSpentCasing = false;

	SanitizeState();
	UpdateSlideLockState();
	BroadcastUpdateAmmoUMG();
	return true;
}


EChamberEjectedType UBpcMagazineManager::EjectChamber()
{
	if (bIsActionBusy)
	{
		return EChamberEjectedType::None;
	}

	if (bChamberHasSpentCasing)
	{
		bChamberHasSpentCasing = false;
		bHasRoundChambered = false;

		OnSpentCasingEjected.Broadcast();

		SanitizeState();
		UpdateSlideLockState();
		BroadcastUpdateAmmoUMG();
		return EChamberEjectedType::SpentCasing;
	}

	if (bHasRoundChambered)
	{
		bHasRoundChambered = false;
		bChamberHasSpentCasing = false;

		OnLiveRoundEjected.Broadcast();

		SanitizeState();
		UpdateSlideLockState();
		BroadcastUpdateAmmoUMG();
		return EChamberEjectedType::LiveRound;
	}

	SanitizeState();
	UpdateSlideLockState();
	BroadcastUpdateAmmoUMG();
	return EChamberEjectedType::None;
}


void UBpcMagazineManager::ManualChamber(EChamberEjectedType& OutEjectedType, bool& OutDidChamberNewRound)
{
	OutEjectedType = EChamberEjectedType::None;
	OutDidChamberNewRound = false;

	if (bIsActionBusy)
	{
		return;
	}

	OutEjectedType = EjectChamber();
	OutDidChamberNewRound = TryChamberRound();

	SanitizeState();
	UpdateSlideLockState();
	BroadcastUpdateAmmoUMG();
}


bool UBpcMagazineManager::HasLiveRoundInChamber() const
{
	return bHasRoundChambered && !bChamberHasSpentCasing;
}


bool UBpcMagazineManager::HasAnyChamberContent() const
{
	return bHasRoundChambered || bChamberHasSpentCasing;
}


bool UBpcMagazineManager::HasAmmoInMagazine() const
{
	return bHasMagazineInserted && CurrentMagAmmo > 0;
}


void UBpcMagazineManager::SanitizeState()
{
	MaxMagAmmo = FMath::Max(0, MaxMagAmmo);
	CurrentMagAmmo = FMath::Clamp(CurrentMagAmmo, 0, MaxMagAmmo);

	// No permitimos estado invalido "bala viva + casquillo" al mismo tiempo.
	if (bChamberHasSpentCasing)
	{
		bHasRoundChambered = false;
	}

	if (!bHasMagazineInserted)
	{
		CurrentMagAmmo = 0;
	}
}


void UBpcMagazineManager::UpdateSlideLockState()
{
	const bool bWasSlideLockedBack = bSlideLockedBack;

	// Slide lock solo cuando:
	// - Hay cargador insertado
	// - No queda municion en cargador
	// - Recamara vacia (sin bala ni casquillo)
	// - Si no esta el magazine y se dispara el arma, el slide no se bloquea aunque la recamara quede vacia, porque al no tener el seguro no tiene la costra del magazine que hace el bloqueo.
	const bool bChamberEmpty = !bHasRoundChambered && !bChamberHasSpentCasing;
	bSlideLockedBack = bHasMagazineInserted && CurrentMagAmmo == 0 && bChamberEmpty;

	if (!bWasSlideLockedBack && bSlideLockedBack)
	{
		OnSlideLockedBack.Broadcast();
	}
}


void UBpcMagazineManager::BroadcastUpdateAmmoUMG()
{
	const bool bCurrentHasMagazineInserted = bHasMagazineInserted;
	const bool bCurrentHasRoundInChamber = HasLiveRoundInChamber();
	const int32 CurrentAmmo = CurrentMagAmmo;
	const int32 MaxAmmo = MaxMagAmmo;

	const bool bIsSameAsLast =
		bHasBroadcastedAmmoState &&
		bLastBroadcastHasMagazineInserted == bCurrentHasMagazineInserted &&
		bLastBroadcastHasRoundInChamber == bCurrentHasRoundInChamber &&
		LastBroadcastCurrentMagAmmo == CurrentAmmo &&
		LastBroadcastMaxMagAmmo == MaxAmmo;

	if (bIsSameAsLast)
	{
		return;
	}

	bHasBroadcastedAmmoState = true;
	bLastBroadcastHasMagazineInserted = bCurrentHasMagazineInserted;
	bLastBroadcastHasRoundInChamber = bCurrentHasRoundInChamber;
	LastBroadcastCurrentMagAmmo = CurrentAmmo;
	LastBroadcastMaxMagAmmo = MaxAmmo;

	UpdateAmmoUMG.Broadcast(
		bCurrentHasMagazineInserted,
		bCurrentHasRoundInChamber,
		CurrentAmmo,
		MaxAmmo
	);
}
