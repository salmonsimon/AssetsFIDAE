// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Props/BpcMagazineManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBpcMagazineManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TTSWEAPONS_API UClass* Z_Construct_UClass_UBpcMagazineManager();
TTSWEAPONS_API UClass* Z_Construct_UClass_UBpcMagazineManager_NoRegister();
TTSWEAPONS_API UEnum* Z_Construct_UEnum_TTSWeapons_EChamberEjectedType();
TTSWEAPONS_API UEnum* Z_Construct_UEnum_TTSWeapons_EShootAttemptResult();
TTSWEAPONS_API UEnum* Z_Construct_UEnum_TTSWeapons_EShootRejectReason();
TTSWEAPONS_API UFunction* Z_Construct_UDelegateFunction_TTSWeapons_OnLiveRoundEjectedSignature__DelegateSignature();
TTSWEAPONS_API UFunction* Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineInsertedSignature__DelegateSignature();
TTSWEAPONS_API UFunction* Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineRemovedSignature__DelegateSignature();
TTSWEAPONS_API UFunction* Z_Construct_UDelegateFunction_TTSWeapons_OnSlideLockedBackSignature__DelegateSignature();
TTSWEAPONS_API UFunction* Z_Construct_UDelegateFunction_TTSWeapons_OnSpentCasingEjectedSignature__DelegateSignature();
TTSWEAPONS_API UFunction* Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_TTSWeapons();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EShootAttemptResult *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShootAttemptResult;
static UEnum* EShootAttemptResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EShootAttemptResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EShootAttemptResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TTSWeapons_EShootAttemptResult, (UObject*)Z_Construct_UPackage__Script_TTSWeapons(), TEXT("EShootAttemptResult"));
	}
	return Z_Registration_Info_UEnum_EShootAttemptResult.OuterSingleton;
}
template<> TTSWEAPONS_API UEnum* StaticEnum<EShootAttemptResult>()
{
	return EShootAttemptResult_StaticEnum();
}
struct Z_Construct_UEnum_TTSWeapons_EShootAttemptResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Fired.DisplayName", "Fired" },
		{ "Fired.Name", "EShootAttemptResult::Fired" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "Rejected.DisplayName", "Rejected" },
		{ "Rejected.Name", "EShootAttemptResult::Rejected" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EShootAttemptResult::Fired", (int64)EShootAttemptResult::Fired },
		{ "EShootAttemptResult::Rejected", (int64)EShootAttemptResult::Rejected },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TTSWeapons_EShootAttemptResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons,
	nullptr,
	"EShootAttemptResult",
	"EShootAttemptResult",
	Z_Construct_UEnum_TTSWeapons_EShootAttemptResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TTSWeapons_EShootAttemptResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TTSWeapons_EShootAttemptResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TTSWeapons_EShootAttemptResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TTSWeapons_EShootAttemptResult()
{
	if (!Z_Registration_Info_UEnum_EShootAttemptResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShootAttemptResult.InnerSingleton, Z_Construct_UEnum_TTSWeapons_EShootAttemptResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EShootAttemptResult.InnerSingleton;
}
// ********** End Enum EShootAttemptResult *********************************************************

// ********** Begin Enum EShootRejectReason ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShootRejectReason;
static UEnum* EShootRejectReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EShootRejectReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EShootRejectReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TTSWeapons_EShootRejectReason, (UObject*)Z_Construct_UPackage__Script_TTSWeapons(), TEXT("EShootRejectReason"));
	}
	return Z_Registration_Info_UEnum_EShootRejectReason.OuterSingleton;
}
template<> TTSWEAPONS_API UEnum* StaticEnum<EShootRejectReason>()
{
	return EShootRejectReason_StaticEnum();
}
struct Z_Construct_UEnum_TTSWeapons_EShootRejectReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Busy.DisplayName", "Busy" },
		{ "Busy.Name", "EShootRejectReason::Busy" },
		{ "ChamberHasSpentCasing.DisplayName", "Chamber Has Spent Casing" },
		{ "ChamberHasSpentCasing.Name", "EShootRejectReason::ChamberHasSpentCasing" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EShootRejectReason::None" },
		{ "NoRoundInChamber.DisplayName", "No Round In Chamber" },
		{ "NoRoundInChamber.Name", "EShootRejectReason::NoRoundInChamber" },
		{ "SlideLockedBack.DisplayName", "Slide Locked Back" },
		{ "SlideLockedBack.Name", "EShootRejectReason::SlideLockedBack" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EShootRejectReason::None", (int64)EShootRejectReason::None },
		{ "EShootRejectReason::NoRoundInChamber", (int64)EShootRejectReason::NoRoundInChamber },
		{ "EShootRejectReason::SlideLockedBack", (int64)EShootRejectReason::SlideLockedBack },
		{ "EShootRejectReason::ChamberHasSpentCasing", (int64)EShootRejectReason::ChamberHasSpentCasing },
		{ "EShootRejectReason::Busy", (int64)EShootRejectReason::Busy },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TTSWeapons_EShootRejectReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons,
	nullptr,
	"EShootRejectReason",
	"EShootRejectReason",
	Z_Construct_UEnum_TTSWeapons_EShootRejectReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TTSWeapons_EShootRejectReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TTSWeapons_EShootRejectReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TTSWeapons_EShootRejectReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TTSWeapons_EShootRejectReason()
{
	if (!Z_Registration_Info_UEnum_EShootRejectReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShootRejectReason.InnerSingleton, Z_Construct_UEnum_TTSWeapons_EShootRejectReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EShootRejectReason.InnerSingleton;
}
// ********** End Enum EShootRejectReason **********************************************************

// ********** Begin Enum EChamberEjectedType *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChamberEjectedType;
static UEnum* EChamberEjectedType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChamberEjectedType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChamberEjectedType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TTSWeapons_EChamberEjectedType, (UObject*)Z_Construct_UPackage__Script_TTSWeapons(), TEXT("EChamberEjectedType"));
	}
	return Z_Registration_Info_UEnum_EChamberEjectedType.OuterSingleton;
}
template<> TTSWEAPONS_API UEnum* StaticEnum<EChamberEjectedType>()
{
	return EChamberEjectedType_StaticEnum();
}
struct Z_Construct_UEnum_TTSWeapons_EChamberEjectedType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LiveRound.DisplayName", "Live Round" },
		{ "LiveRound.Name", "EChamberEjectedType::LiveRound" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EChamberEjectedType::None" },
		{ "SpentCasing.DisplayName", "Spent Casing" },
		{ "SpentCasing.Name", "EChamberEjectedType::SpentCasing" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChamberEjectedType::None", (int64)EChamberEjectedType::None },
		{ "EChamberEjectedType::LiveRound", (int64)EChamberEjectedType::LiveRound },
		{ "EChamberEjectedType::SpentCasing", (int64)EChamberEjectedType::SpentCasing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TTSWeapons_EChamberEjectedType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons,
	nullptr,
	"EChamberEjectedType",
	"EChamberEjectedType",
	Z_Construct_UEnum_TTSWeapons_EChamberEjectedType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TTSWeapons_EChamberEjectedType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TTSWeapons_EChamberEjectedType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TTSWeapons_EChamberEjectedType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TTSWeapons_EChamberEjectedType()
{
	if (!Z_Registration_Info_UEnum_EChamberEjectedType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChamberEjectedType.InnerSingleton, Z_Construct_UEnum_TTSWeapons_EChamberEjectedType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChamberEjectedType.InnerSingleton;
}
// ********** End Enum EChamberEjectedType *********************************************************

// ********** Begin Delegate FOnMagazineInsertedSignature ******************************************
struct Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineInsertedSignature__DelegateSignature_Statics
{
	struct _Script_TTSWeapons_eventOnMagazineInsertedSignature_Parms
	{
		int32 CurrentMagAmmo;
		int32 MaxMagAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMagAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMagAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineInsertedSignature__DelegateSignature_Statics::NewProp_CurrentMagAmmo = { "CurrentMagAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TTSWeapons_eventOnMagazineInsertedSignature_Parms, CurrentMagAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineInsertedSignature__DelegateSignature_Statics::NewProp_MaxMagAmmo = { "MaxMagAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TTSWeapons_eventOnMagazineInsertedSignature_Parms, MaxMagAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineInsertedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineInsertedSignature__DelegateSignature_Statics::NewProp_CurrentMagAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineInsertedSignature__DelegateSignature_Statics::NewProp_MaxMagAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineInsertedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineInsertedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons, nullptr, "OnMagazineInsertedSignature__DelegateSignature", Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineInsertedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineInsertedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineInsertedSignature__DelegateSignature_Statics::_Script_TTSWeapons_eventOnMagazineInsertedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineInsertedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineInsertedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineInsertedSignature__DelegateSignature_Statics::_Script_TTSWeapons_eventOnMagazineInsertedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineInsertedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineInsertedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMagazineInsertedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMagazineInsertedSignature, int32 CurrentMagAmmo, int32 MaxMagAmmo)
{
	struct _Script_TTSWeapons_eventOnMagazineInsertedSignature_Parms
	{
		int32 CurrentMagAmmo;
		int32 MaxMagAmmo;
	};
	_Script_TTSWeapons_eventOnMagazineInsertedSignature_Parms Parms;
	Parms.CurrentMagAmmo=CurrentMagAmmo;
	Parms.MaxMagAmmo=MaxMagAmmo;
	OnMagazineInsertedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMagazineInsertedSignature ********************************************

// ********** Begin Delegate FOnMagazineRemovedSignature *******************************************
struct Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineRemovedSignature__DelegateSignature_Statics
{
	struct _Script_TTSWeapons_eventOnMagazineRemovedSignature_Parms
	{
		int32 RemainingAmmoInRemovedMag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingAmmoInRemovedMag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineRemovedSignature__DelegateSignature_Statics::NewProp_RemainingAmmoInRemovedMag = { "RemainingAmmoInRemovedMag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TTSWeapons_eventOnMagazineRemovedSignature_Parms, RemainingAmmoInRemovedMag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineRemovedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineRemovedSignature__DelegateSignature_Statics::NewProp_RemainingAmmoInRemovedMag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineRemovedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineRemovedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons, nullptr, "OnMagazineRemovedSignature__DelegateSignature", Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineRemovedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineRemovedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineRemovedSignature__DelegateSignature_Statics::_Script_TTSWeapons_eventOnMagazineRemovedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineRemovedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineRemovedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineRemovedSignature__DelegateSignature_Statics::_Script_TTSWeapons_eventOnMagazineRemovedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineRemovedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineRemovedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMagazineRemovedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMagazineRemovedSignature, int32 RemainingAmmoInRemovedMag)
{
	struct _Script_TTSWeapons_eventOnMagazineRemovedSignature_Parms
	{
		int32 RemainingAmmoInRemovedMag;
	};
	_Script_TTSWeapons_eventOnMagazineRemovedSignature_Parms Parms;
	Parms.RemainingAmmoInRemovedMag=RemainingAmmoInRemovedMag;
	OnMagazineRemovedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMagazineRemovedSignature *********************************************

// ********** Begin Delegate FOnSpentCasingEjectedSignature ****************************************
struct Z_Construct_UDelegateFunction_TTSWeapons_OnSpentCasingEjectedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TTSWeapons_OnSpentCasingEjectedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons, nullptr, "OnSpentCasingEjectedSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_OnSpentCasingEjectedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TTSWeapons_OnSpentCasingEjectedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_TTSWeapons_OnSpentCasingEjectedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TTSWeapons_OnSpentCasingEjectedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSpentCasingEjectedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSpentCasingEjectedSignature)
{
	OnSpentCasingEjectedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnSpentCasingEjectedSignature ******************************************

// ********** Begin Delegate FOnLiveRoundEjectedSignature ******************************************
struct Z_Construct_UDelegateFunction_TTSWeapons_OnLiveRoundEjectedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TTSWeapons_OnLiveRoundEjectedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons, nullptr, "OnLiveRoundEjectedSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_OnLiveRoundEjectedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TTSWeapons_OnLiveRoundEjectedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_TTSWeapons_OnLiveRoundEjectedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TTSWeapons_OnLiveRoundEjectedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLiveRoundEjectedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnLiveRoundEjectedSignature)
{
	OnLiveRoundEjectedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnLiveRoundEjectedSignature ********************************************

// ********** Begin Delegate FOnSlideLockedBackSignature *******************************************
struct Z_Construct_UDelegateFunction_TTSWeapons_OnSlideLockedBackSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TTSWeapons_OnSlideLockedBackSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons, nullptr, "OnSlideLockedBackSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_OnSlideLockedBackSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TTSWeapons_OnSlideLockedBackSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_TTSWeapons_OnSlideLockedBackSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TTSWeapons_OnSlideLockedBackSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSlideLockedBackSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSlideLockedBackSignature)
{
	OnSlideLockedBackSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnSlideLockedBackSignature *********************************************

// ********** Begin Delegate FUpdateAmmoUMGSignature ***********************************************
struct Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics
{
	struct _Script_TTSWeapons_eventUpdateAmmoUMGSignature_Parms
	{
		bool bHasMagazineInserted;
		bool bHasRoundInChamber;
		int32 CurrentMagAmmo;
		int32 MaxMagAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasMagazineInserted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMagazineInserted;
	static void NewProp_bHasRoundInChamber_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRoundInChamber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMagAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMagAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::NewProp_bHasMagazineInserted_SetBit(void* Obj)
{
	((_Script_TTSWeapons_eventUpdateAmmoUMGSignature_Parms*)Obj)->bHasMagazineInserted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::NewProp_bHasMagazineInserted = { "bHasMagazineInserted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TTSWeapons_eventUpdateAmmoUMGSignature_Parms), &Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::NewProp_bHasMagazineInserted_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::NewProp_bHasRoundInChamber_SetBit(void* Obj)
{
	((_Script_TTSWeapons_eventUpdateAmmoUMGSignature_Parms*)Obj)->bHasRoundInChamber = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::NewProp_bHasRoundInChamber = { "bHasRoundInChamber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TTSWeapons_eventUpdateAmmoUMGSignature_Parms), &Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::NewProp_bHasRoundInChamber_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::NewProp_CurrentMagAmmo = { "CurrentMagAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TTSWeapons_eventUpdateAmmoUMGSignature_Parms, CurrentMagAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::NewProp_MaxMagAmmo = { "MaxMagAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TTSWeapons_eventUpdateAmmoUMGSignature_Parms, MaxMagAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::NewProp_bHasMagazineInserted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::NewProp_bHasRoundInChamber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::NewProp_CurrentMagAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::NewProp_MaxMagAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons, nullptr, "UpdateAmmoUMGSignature__DelegateSignature", Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::_Script_TTSWeapons_eventUpdateAmmoUMGSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::_Script_TTSWeapons_eventUpdateAmmoUMGSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FUpdateAmmoUMGSignature_DelegateWrapper(const FMulticastScriptDelegate& UpdateAmmoUMGSignature, bool bHasMagazineInserted, bool bHasRoundInChamber, int32 CurrentMagAmmo, int32 MaxMagAmmo)
{
	struct _Script_TTSWeapons_eventUpdateAmmoUMGSignature_Parms
	{
		bool bHasMagazineInserted;
		bool bHasRoundInChamber;
		int32 CurrentMagAmmo;
		int32 MaxMagAmmo;
	};
	_Script_TTSWeapons_eventUpdateAmmoUMGSignature_Parms Parms;
	Parms.bHasMagazineInserted=bHasMagazineInserted ? true : false;
	Parms.bHasRoundInChamber=bHasRoundInChamber ? true : false;
	Parms.CurrentMagAmmo=CurrentMagAmmo;
	Parms.MaxMagAmmo=MaxMagAmmo;
	UpdateAmmoUMGSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FUpdateAmmoUMGSignature *************************************************

// ********** Begin Class UBpcMagazineManager Function CanChamberRound *****************************
struct Z_Construct_UFunction_UBpcMagazineManager_CanChamberRound_Statics
{
	struct BpcMagazineManager_eventCanChamberRound_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|Chamber" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Inputs: none. Return: true if there is magazine ammo available, the chamber is free, and the action is not busy." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBpcMagazineManager_CanChamberRound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BpcMagazineManager_eventCanChamberRound_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBpcMagazineManager_CanChamberRound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BpcMagazineManager_eventCanChamberRound_Parms), &Z_Construct_UFunction_UBpcMagazineManager_CanChamberRound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_CanChamberRound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_CanChamberRound_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_CanChamberRound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_CanChamberRound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "CanChamberRound", Z_Construct_UFunction_UBpcMagazineManager_CanChamberRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_CanChamberRound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_CanChamberRound_Statics::BpcMagazineManager_eventCanChamberRound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_CanChamberRound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_CanChamberRound_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_CanChamberRound_Statics::BpcMagazineManager_eventCanChamberRound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_CanChamberRound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_CanChamberRound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execCanChamberRound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanChamberRound();
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function CanChamberRound *******************************

// ********** Begin Class UBpcMagazineManager Function ConsumeRoundOnFire **************************
struct Z_Construct_UFunction_UBpcMagazineManager_ConsumeRoundOnFire_Statics
{
	struct BpcMagazineManager_eventConsumeRoundOnFire_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|Shoot" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Inputs: none. Return: true if a live round was consumed from the chamber and a spent casing was left pending extraction." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBpcMagazineManager_ConsumeRoundOnFire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BpcMagazineManager_eventConsumeRoundOnFire_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBpcMagazineManager_ConsumeRoundOnFire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BpcMagazineManager_eventConsumeRoundOnFire_Parms), &Z_Construct_UFunction_UBpcMagazineManager_ConsumeRoundOnFire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_ConsumeRoundOnFire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_ConsumeRoundOnFire_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_ConsumeRoundOnFire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_ConsumeRoundOnFire_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "ConsumeRoundOnFire", Z_Construct_UFunction_UBpcMagazineManager_ConsumeRoundOnFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_ConsumeRoundOnFire_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_ConsumeRoundOnFire_Statics::BpcMagazineManager_eventConsumeRoundOnFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_ConsumeRoundOnFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_ConsumeRoundOnFire_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_ConsumeRoundOnFire_Statics::BpcMagazineManager_eventConsumeRoundOnFire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_ConsumeRoundOnFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_ConsumeRoundOnFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execConsumeRoundOnFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConsumeRoundOnFire();
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function ConsumeRoundOnFire ****************************

// ********** Begin Class UBpcMagazineManager Function EjectChamber ********************************
struct Z_Construct_UFunction_UBpcMagazineManager_EjectChamber_Statics
{
	struct BpcMagazineManager_eventEjectChamber_Parms
	{
		EChamberEjectedType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|Chamber" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Inputs: none. Return: what was ejected from the chamber: none, live round, or spent casing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBpcMagazineManager_EjectChamber_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBpcMagazineManager_EjectChamber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BpcMagazineManager_eventEjectChamber_Parms, ReturnValue), Z_Construct_UEnum_TTSWeapons_EChamberEjectedType, METADATA_PARAMS(0, nullptr) }; // 4173442251
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_EjectChamber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_EjectChamber_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_EjectChamber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_EjectChamber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_EjectChamber_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "EjectChamber", Z_Construct_UFunction_UBpcMagazineManager_EjectChamber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_EjectChamber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_EjectChamber_Statics::BpcMagazineManager_eventEjectChamber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_EjectChamber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_EjectChamber_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_EjectChamber_Statics::BpcMagazineManager_eventEjectChamber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_EjectChamber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_EjectChamber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execEjectChamber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EChamberEjectedType*)Z_Param__Result=P_THIS->EjectChamber();
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function EjectChamber **********************************

// ********** Begin Class UBpcMagazineManager Function GetCurrentMagAmmo ***************************
struct Z_Construct_UFunction_UBpcMagazineManager_GetCurrentMagAmmo_Statics
{
	struct BpcMagazineManager_eventGetCurrentMagAmmo_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|State" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Inputs: none. Return: ammo remaining in the currently inserted magazine." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBpcMagazineManager_GetCurrentMagAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BpcMagazineManager_eventGetCurrentMagAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_GetCurrentMagAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_GetCurrentMagAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_GetCurrentMagAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_GetCurrentMagAmmo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "GetCurrentMagAmmo", Z_Construct_UFunction_UBpcMagazineManager_GetCurrentMagAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_GetCurrentMagAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_GetCurrentMagAmmo_Statics::BpcMagazineManager_eventGetCurrentMagAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_GetCurrentMagAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_GetCurrentMagAmmo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_GetCurrentMagAmmo_Statics::BpcMagazineManager_eventGetCurrentMagAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_GetCurrentMagAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_GetCurrentMagAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execGetCurrentMagAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentMagAmmo();
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function GetCurrentMagAmmo *****************************

// ********** Begin Class UBpcMagazineManager Function GetMaxMagAmmo *******************************
struct Z_Construct_UFunction_UBpcMagazineManager_GetMaxMagAmmo_Statics
{
	struct BpcMagazineManager_eventGetMaxMagAmmo_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|State" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Inputs: none. Return: configured maximum magazine capacity." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBpcMagazineManager_GetMaxMagAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BpcMagazineManager_eventGetMaxMagAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_GetMaxMagAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_GetMaxMagAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_GetMaxMagAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_GetMaxMagAmmo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "GetMaxMagAmmo", Z_Construct_UFunction_UBpcMagazineManager_GetMaxMagAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_GetMaxMagAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_GetMaxMagAmmo_Statics::BpcMagazineManager_eventGetMaxMagAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_GetMaxMagAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_GetMaxMagAmmo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_GetMaxMagAmmo_Statics::BpcMagazineManager_eventGetMaxMagAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_GetMaxMagAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_GetMaxMagAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execGetMaxMagAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxMagAmmo();
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function GetMaxMagAmmo *********************************

// ********** Begin Class UBpcMagazineManager Function HasAmmoInMagazine ***************************
struct Z_Construct_UFunction_UBpcMagazineManager_HasAmmoInMagazine_Statics
{
	struct BpcMagazineManager_eventHasAmmoInMagazine_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|State" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Inputs: none. Return: true if a magazine is inserted and it still has ammo." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBpcMagazineManager_HasAmmoInMagazine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BpcMagazineManager_eventHasAmmoInMagazine_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBpcMagazineManager_HasAmmoInMagazine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BpcMagazineManager_eventHasAmmoInMagazine_Parms), &Z_Construct_UFunction_UBpcMagazineManager_HasAmmoInMagazine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_HasAmmoInMagazine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_HasAmmoInMagazine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_HasAmmoInMagazine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_HasAmmoInMagazine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "HasAmmoInMagazine", Z_Construct_UFunction_UBpcMagazineManager_HasAmmoInMagazine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_HasAmmoInMagazine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_HasAmmoInMagazine_Statics::BpcMagazineManager_eventHasAmmoInMagazine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_HasAmmoInMagazine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_HasAmmoInMagazine_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_HasAmmoInMagazine_Statics::BpcMagazineManager_eventHasAmmoInMagazine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_HasAmmoInMagazine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_HasAmmoInMagazine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execHasAmmoInMagazine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAmmoInMagazine();
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function HasAmmoInMagazine *****************************

// ********** Begin Class UBpcMagazineManager Function HasAnyChamberContent ************************
struct Z_Construct_UFunction_UBpcMagazineManager_HasAnyChamberContent_Statics
{
	struct BpcMagazineManager_eventHasAnyChamberContent_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|State" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Inputs: none. Return: true if the chamber contains anything, either a live round or a spent casing." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBpcMagazineManager_HasAnyChamberContent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BpcMagazineManager_eventHasAnyChamberContent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBpcMagazineManager_HasAnyChamberContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BpcMagazineManager_eventHasAnyChamberContent_Parms), &Z_Construct_UFunction_UBpcMagazineManager_HasAnyChamberContent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_HasAnyChamberContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_HasAnyChamberContent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_HasAnyChamberContent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_HasAnyChamberContent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "HasAnyChamberContent", Z_Construct_UFunction_UBpcMagazineManager_HasAnyChamberContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_HasAnyChamberContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_HasAnyChamberContent_Statics::BpcMagazineManager_eventHasAnyChamberContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_HasAnyChamberContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_HasAnyChamberContent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_HasAnyChamberContent_Statics::BpcMagazineManager_eventHasAnyChamberContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_HasAnyChamberContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_HasAnyChamberContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execHasAnyChamberContent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAnyChamberContent();
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function HasAnyChamberContent **************************

// ********** Begin Class UBpcMagazineManager Function HasLiveRoundInChamber ***********************
struct Z_Construct_UFunction_UBpcMagazineManager_HasLiveRoundInChamber_Statics
{
	struct BpcMagazineManager_eventHasLiveRoundInChamber_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|State" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Inputs: none. Return: true only when there is a live round in the chamber." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBpcMagazineManager_HasLiveRoundInChamber_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BpcMagazineManager_eventHasLiveRoundInChamber_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBpcMagazineManager_HasLiveRoundInChamber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BpcMagazineManager_eventHasLiveRoundInChamber_Parms), &Z_Construct_UFunction_UBpcMagazineManager_HasLiveRoundInChamber_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_HasLiveRoundInChamber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_HasLiveRoundInChamber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_HasLiveRoundInChamber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_HasLiveRoundInChamber_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "HasLiveRoundInChamber", Z_Construct_UFunction_UBpcMagazineManager_HasLiveRoundInChamber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_HasLiveRoundInChamber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_HasLiveRoundInChamber_Statics::BpcMagazineManager_eventHasLiveRoundInChamber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_HasLiveRoundInChamber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_HasLiveRoundInChamber_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_HasLiveRoundInChamber_Statics::BpcMagazineManager_eventHasLiveRoundInChamber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_HasLiveRoundInChamber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_HasLiveRoundInChamber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execHasLiveRoundInChamber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasLiveRoundInChamber();
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function HasLiveRoundInChamber *************************

// ********** Begin Class UBpcMagazineManager Function InsertMagazineCustom ************************
struct Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineCustom_Statics
{
	struct BpcMagazineManager_eventInsertMagazineCustom_Parms
	{
		int32 InAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|Magazine" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Input: InAmmo = current ammo in the magazine being inserted. Outputs: none. Ammo is clamped to [0, MaxMagAmmo]." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineCustom_Statics::NewProp_InAmmo = { "InAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BpcMagazineManager_eventInsertMagazineCustom_Parms, InAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineCustom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineCustom_Statics::NewProp_InAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineCustom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineCustom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "InsertMagazineCustom", Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineCustom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineCustom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineCustom_Statics::BpcMagazineManager_eventInsertMagazineCustom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineCustom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineCustom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineCustom_Statics::BpcMagazineManager_eventInsertMagazineCustom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineCustom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineCustom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execInsertMagazineCustom)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InsertMagazineCustom(Z_Param_InAmmo);
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function InsertMagazineCustom **************************

// ********** Begin Class UBpcMagazineManager Function InsertMagazineDefault ***********************
struct Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|Magazine" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Inputs: none. Outputs: none. Inserts a magazine using MaxMagAmmo as initial ammo." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineDefault_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "InsertMagazineDefault", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineDefault_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execInsertMagazineDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InsertMagazineDefault();
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function InsertMagazineDefault *************************

// ********** Begin Class UBpcMagazineManager Function IsActionBusy ********************************
struct Z_Construct_UFunction_UBpcMagazineManager_IsActionBusy_Statics
{
	struct BpcMagazineManager_eventIsActionBusy_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|State" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Inputs: none. Return: true if weapon actions are currently blocked." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBpcMagazineManager_IsActionBusy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BpcMagazineManager_eventIsActionBusy_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBpcMagazineManager_IsActionBusy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BpcMagazineManager_eventIsActionBusy_Parms), &Z_Construct_UFunction_UBpcMagazineManager_IsActionBusy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_IsActionBusy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_IsActionBusy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_IsActionBusy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_IsActionBusy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "IsActionBusy", Z_Construct_UFunction_UBpcMagazineManager_IsActionBusy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_IsActionBusy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_IsActionBusy_Statics::BpcMagazineManager_eventIsActionBusy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_IsActionBusy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_IsActionBusy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_IsActionBusy_Statics::BpcMagazineManager_eventIsActionBusy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_IsActionBusy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_IsActionBusy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execIsActionBusy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActionBusy();
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function IsActionBusy **********************************

// ********** Begin Class UBpcMagazineManager Function IsMagazineInserted **************************
struct Z_Construct_UFunction_UBpcMagazineManager_IsMagazineInserted_Statics
{
	struct BpcMagazineManager_eventIsMagazineInserted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|State" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Inputs: none. Return: true if a magazine is currently inserted." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBpcMagazineManager_IsMagazineInserted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BpcMagazineManager_eventIsMagazineInserted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBpcMagazineManager_IsMagazineInserted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BpcMagazineManager_eventIsMagazineInserted_Parms), &Z_Construct_UFunction_UBpcMagazineManager_IsMagazineInserted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_IsMagazineInserted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_IsMagazineInserted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_IsMagazineInserted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_IsMagazineInserted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "IsMagazineInserted", Z_Construct_UFunction_UBpcMagazineManager_IsMagazineInserted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_IsMagazineInserted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_IsMagazineInserted_Statics::BpcMagazineManager_eventIsMagazineInserted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_IsMagazineInserted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_IsMagazineInserted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_IsMagazineInserted_Statics::BpcMagazineManager_eventIsMagazineInserted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_IsMagazineInserted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_IsMagazineInserted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execIsMagazineInserted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMagazineInserted();
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function IsMagazineInserted ****************************

// ********** Begin Class UBpcMagazineManager Function IsRoundInChamber ****************************
struct Z_Construct_UFunction_UBpcMagazineManager_IsRoundInChamber_Statics
{
	struct BpcMagazineManager_eventIsRoundInChamber_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|State" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Inputs: none. Return: true only when there is a live round in the chamber. Explicit alias for UI/Blueprint." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBpcMagazineManager_IsRoundInChamber_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BpcMagazineManager_eventIsRoundInChamber_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBpcMagazineManager_IsRoundInChamber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BpcMagazineManager_eventIsRoundInChamber_Parms), &Z_Construct_UFunction_UBpcMagazineManager_IsRoundInChamber_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_IsRoundInChamber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_IsRoundInChamber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_IsRoundInChamber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_IsRoundInChamber_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "IsRoundInChamber", Z_Construct_UFunction_UBpcMagazineManager_IsRoundInChamber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_IsRoundInChamber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_IsRoundInChamber_Statics::BpcMagazineManager_eventIsRoundInChamber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_IsRoundInChamber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_IsRoundInChamber_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_IsRoundInChamber_Statics::BpcMagazineManager_eventIsRoundInChamber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_IsRoundInChamber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_IsRoundInChamber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execIsRoundInChamber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRoundInChamber();
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function IsRoundInChamber ******************************

// ********** Begin Class UBpcMagazineManager Function IsSlideLockedBack ***************************
struct Z_Construct_UFunction_UBpcMagazineManager_IsSlideLockedBack_Statics
{
	struct BpcMagazineManager_eventIsSlideLockedBack_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|State" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Inputs: none. Return: true if the slide is logically locked back." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBpcMagazineManager_IsSlideLockedBack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BpcMagazineManager_eventIsSlideLockedBack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBpcMagazineManager_IsSlideLockedBack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BpcMagazineManager_eventIsSlideLockedBack_Parms), &Z_Construct_UFunction_UBpcMagazineManager_IsSlideLockedBack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_IsSlideLockedBack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_IsSlideLockedBack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_IsSlideLockedBack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_IsSlideLockedBack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "IsSlideLockedBack", Z_Construct_UFunction_UBpcMagazineManager_IsSlideLockedBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_IsSlideLockedBack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_IsSlideLockedBack_Statics::BpcMagazineManager_eventIsSlideLockedBack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_IsSlideLockedBack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_IsSlideLockedBack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_IsSlideLockedBack_Statics::BpcMagazineManager_eventIsSlideLockedBack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_IsSlideLockedBack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_IsSlideLockedBack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execIsSlideLockedBack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSlideLockedBack();
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function IsSlideLockedBack *****************************

// ********** Begin Class UBpcMagazineManager Function ManualChamber *******************************
struct Z_Construct_UFunction_UBpcMagazineManager_ManualChamber_Statics
{
	struct BpcMagazineManager_eventManualChamber_Parms
	{
		EChamberEjectedType OutEjectedType;
		bool OutDidChamberNewRound;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|Chamber" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Inputs: none. Outputs: OutEjectedType = what was expelled from the chamber first; OutDidChamberNewRound = true only if this same manual cycle successfully chambered a new live round from the magazine afterward." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutEjectedType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutEjectedType;
	static void NewProp_OutDidChamberNewRound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutDidChamberNewRound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBpcMagazineManager_ManualChamber_Statics::NewProp_OutEjectedType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBpcMagazineManager_ManualChamber_Statics::NewProp_OutEjectedType = { "OutEjectedType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BpcMagazineManager_eventManualChamber_Parms, OutEjectedType), Z_Construct_UEnum_TTSWeapons_EChamberEjectedType, METADATA_PARAMS(0, nullptr) }; // 4173442251
void Z_Construct_UFunction_UBpcMagazineManager_ManualChamber_Statics::NewProp_OutDidChamberNewRound_SetBit(void* Obj)
{
	((BpcMagazineManager_eventManualChamber_Parms*)Obj)->OutDidChamberNewRound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBpcMagazineManager_ManualChamber_Statics::NewProp_OutDidChamberNewRound = { "OutDidChamberNewRound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BpcMagazineManager_eventManualChamber_Parms), &Z_Construct_UFunction_UBpcMagazineManager_ManualChamber_Statics::NewProp_OutDidChamberNewRound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_ManualChamber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_ManualChamber_Statics::NewProp_OutEjectedType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_ManualChamber_Statics::NewProp_OutEjectedType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_ManualChamber_Statics::NewProp_OutDidChamberNewRound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_ManualChamber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_ManualChamber_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "ManualChamber", Z_Construct_UFunction_UBpcMagazineManager_ManualChamber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_ManualChamber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_ManualChamber_Statics::BpcMagazineManager_eventManualChamber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_ManualChamber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_ManualChamber_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_ManualChamber_Statics::BpcMagazineManager_eventManualChamber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_ManualChamber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_ManualChamber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execManualChamber)
{
	P_GET_ENUM_REF(EChamberEjectedType,Z_Param_Out_OutEjectedType);
	P_GET_UBOOL_REF(Z_Param_Out_OutDidChamberNewRound);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ManualChamber((EChamberEjectedType&)(Z_Param_Out_OutEjectedType),Z_Param_Out_OutDidChamberNewRound);
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function ManualChamber *********************************

// ********** Begin Class UBpcMagazineManager Function OnShotExtractionMoment **********************
struct Z_Construct_UFunction_UBpcMagazineManager_OnShotExtractionMoment_Statics
{
	struct BpcMagazineManager_eventOnShotExtractionMoment_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|Shoot" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Inputs: none. Return: true if a spent casing was present in the chamber, got cleared, and OnSpentCasingEjected was emitted." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBpcMagazineManager_OnShotExtractionMoment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BpcMagazineManager_eventOnShotExtractionMoment_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBpcMagazineManager_OnShotExtractionMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BpcMagazineManager_eventOnShotExtractionMoment_Parms), &Z_Construct_UFunction_UBpcMagazineManager_OnShotExtractionMoment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_OnShotExtractionMoment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_OnShotExtractionMoment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_OnShotExtractionMoment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_OnShotExtractionMoment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "OnShotExtractionMoment", Z_Construct_UFunction_UBpcMagazineManager_OnShotExtractionMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_OnShotExtractionMoment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_OnShotExtractionMoment_Statics::BpcMagazineManager_eventOnShotExtractionMoment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_OnShotExtractionMoment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_OnShotExtractionMoment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_OnShotExtractionMoment_Statics::BpcMagazineManager_eventOnShotExtractionMoment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_OnShotExtractionMoment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_OnShotExtractionMoment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execOnShotExtractionMoment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OnShotExtractionMoment();
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function OnShotExtractionMoment ************************

// ********** Begin Class UBpcMagazineManager Function RemoveMagazine ******************************
struct Z_Construct_UFunction_UBpcMagazineManager_RemoveMagazine_Statics
{
	struct BpcMagazineManager_eventRemoveMagazine_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|Magazine" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Inputs: none. Return: remaining ammo in the removed magazine, or 0 if no magazine was inserted." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBpcMagazineManager_RemoveMagazine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BpcMagazineManager_eventRemoveMagazine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_RemoveMagazine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_RemoveMagazine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_RemoveMagazine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_RemoveMagazine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "RemoveMagazine", Z_Construct_UFunction_UBpcMagazineManager_RemoveMagazine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_RemoveMagazine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_RemoveMagazine_Statics::BpcMagazineManager_eventRemoveMagazine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_RemoveMagazine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_RemoveMagazine_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_RemoveMagazine_Statics::BpcMagazineManager_eventRemoveMagazine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_RemoveMagazine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_RemoveMagazine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execRemoveMagazine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->RemoveMagazine();
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function RemoveMagazine ********************************

// ********** Begin Class UBpcMagazineManager Function SetActionBusy *******************************
struct Z_Construct_UFunction_UBpcMagazineManager_SetActionBusy_Statics
{
	struct BpcMagazineManager_eventSetActionBusy_Parms
	{
		bool bInBusy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|State" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Input: bInBusy = true to block weapon actions, false to allow them again. Outputs: none." },
	};
#endif // WITH_METADATA
	static void NewProp_bInBusy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInBusy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBpcMagazineManager_SetActionBusy_Statics::NewProp_bInBusy_SetBit(void* Obj)
{
	((BpcMagazineManager_eventSetActionBusy_Parms*)Obj)->bInBusy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBpcMagazineManager_SetActionBusy_Statics::NewProp_bInBusy = { "bInBusy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BpcMagazineManager_eventSetActionBusy_Parms), &Z_Construct_UFunction_UBpcMagazineManager_SetActionBusy_Statics::NewProp_bInBusy_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_SetActionBusy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_SetActionBusy_Statics::NewProp_bInBusy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_SetActionBusy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_SetActionBusy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "SetActionBusy", Z_Construct_UFunction_UBpcMagazineManager_SetActionBusy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_SetActionBusy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_SetActionBusy_Statics::BpcMagazineManager_eventSetActionBusy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_SetActionBusy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_SetActionBusy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_SetActionBusy_Statics::BpcMagazineManager_eventSetActionBusy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_SetActionBusy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_SetActionBusy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execSetActionBusy)
{
	P_GET_UBOOL(Z_Param_bInBusy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActionBusy(Z_Param_bInBusy);
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function SetActionBusy *********************************

// ********** Begin Class UBpcMagazineManager Function SetMaxMagAmmo *******************************
struct Z_Construct_UFunction_UBpcMagazineManager_SetMaxMagAmmo_Statics
{
	struct BpcMagazineManager_eventSetMaxMagAmmo_Parms
	{
		int32 InMaxMagAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|Magazine" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Input: InMaxMagAmmo = new maximum magazine capacity. Outputs: none. If the new max is below CurrentMagAmmo, current ammo is clamped down to the new max." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMaxMagAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBpcMagazineManager_SetMaxMagAmmo_Statics::NewProp_InMaxMagAmmo = { "InMaxMagAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BpcMagazineManager_eventSetMaxMagAmmo_Parms, InMaxMagAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_SetMaxMagAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_SetMaxMagAmmo_Statics::NewProp_InMaxMagAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_SetMaxMagAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_SetMaxMagAmmo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "SetMaxMagAmmo", Z_Construct_UFunction_UBpcMagazineManager_SetMaxMagAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_SetMaxMagAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_SetMaxMagAmmo_Statics::BpcMagazineManager_eventSetMaxMagAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_SetMaxMagAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_SetMaxMagAmmo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_SetMaxMagAmmo_Statics::BpcMagazineManager_eventSetMaxMagAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_SetMaxMagAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_SetMaxMagAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execSetMaxMagAmmo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InMaxMagAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxMagAmmo(Z_Param_InMaxMagAmmo);
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function SetMaxMagAmmo *********************************

// ********** Begin Class UBpcMagazineManager Function TryChamberRound *****************************
struct Z_Construct_UFunction_UBpcMagazineManager_TryChamberRound_Statics
{
	struct BpcMagazineManager_eventTryChamberRound_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|Chamber" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Inputs: none. Return: true if a new live round was successfully fed from the magazine into the chamber." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBpcMagazineManager_TryChamberRound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BpcMagazineManager_eventTryChamberRound_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBpcMagazineManager_TryChamberRound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BpcMagazineManager_eventTryChamberRound_Parms), &Z_Construct_UFunction_UBpcMagazineManager_TryChamberRound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_TryChamberRound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_TryChamberRound_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_TryChamberRound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_TryChamberRound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "TryChamberRound", Z_Construct_UFunction_UBpcMagazineManager_TryChamberRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_TryChamberRound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_TryChamberRound_Statics::BpcMagazineManager_eventTryChamberRound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_TryChamberRound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_TryChamberRound_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_TryChamberRound_Statics::BpcMagazineManager_eventTryChamberRound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_TryChamberRound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_TryChamberRound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execTryChamberRound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryChamberRound();
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function TryChamberRound *******************************

// ********** Begin Class UBpcMagazineManager Function TryShoot ************************************
struct Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics
{
	struct BpcMagazineManager_eventTryShoot_Parms
	{
		EShootAttemptResult OutResult;
		EShootRejectReason OutFailReason;
		bool OutWasStateChanged;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|Shoot" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Inputs: none. Outputs: OutResult = fired/rejected; OutFailReason = reject reason when rejected; OutWasStateChanged = true only if this call changed weapon state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutFailReason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutFailReason;
	static void NewProp_OutWasStateChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutWasStateChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BpcMagazineManager_eventTryShoot_Parms, OutResult), Z_Construct_UEnum_TTSWeapons_EShootAttemptResult, METADATA_PARAMS(0, nullptr) }; // 3978797976
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::NewProp_OutFailReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::NewProp_OutFailReason = { "OutFailReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BpcMagazineManager_eventTryShoot_Parms, OutFailReason), Z_Construct_UEnum_TTSWeapons_EShootRejectReason, METADATA_PARAMS(0, nullptr) }; // 2531892201
void Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::NewProp_OutWasStateChanged_SetBit(void* Obj)
{
	((BpcMagazineManager_eventTryShoot_Parms*)Obj)->OutWasStateChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::NewProp_OutWasStateChanged = { "OutWasStateChanged", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BpcMagazineManager_eventTryShoot_Parms), &Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::NewProp_OutWasStateChanged_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::NewProp_OutFailReason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::NewProp_OutFailReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::NewProp_OutWasStateChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcMagazineManager, nullptr, "TryShoot", Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::BpcMagazineManager_eventTryShoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::BpcMagazineManager_eventTryShoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcMagazineManager_TryShoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcMagazineManager_TryShoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcMagazineManager::execTryShoot)
{
	P_GET_ENUM_REF(EShootAttemptResult,Z_Param_Out_OutResult);
	P_GET_ENUM_REF(EShootRejectReason,Z_Param_Out_OutFailReason);
	P_GET_UBOOL_REF(Z_Param_Out_OutWasStateChanged);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryShoot((EShootAttemptResult&)(Z_Param_Out_OutResult),(EShootRejectReason&)(Z_Param_Out_OutFailReason),Z_Param_Out_OutWasStateChanged);
	P_NATIVE_END;
}
// ********** End Class UBpcMagazineManager Function TryShoot **************************************

// ********** Begin Class UBpcMagazineManager ******************************************************
void UBpcMagazineManager::StaticRegisterNativesUBpcMagazineManager()
{
	UClass* Class = UBpcMagazineManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanChamberRound", &UBpcMagazineManager::execCanChamberRound },
		{ "ConsumeRoundOnFire", &UBpcMagazineManager::execConsumeRoundOnFire },
		{ "EjectChamber", &UBpcMagazineManager::execEjectChamber },
		{ "GetCurrentMagAmmo", &UBpcMagazineManager::execGetCurrentMagAmmo },
		{ "GetMaxMagAmmo", &UBpcMagazineManager::execGetMaxMagAmmo },
		{ "HasAmmoInMagazine", &UBpcMagazineManager::execHasAmmoInMagazine },
		{ "HasAnyChamberContent", &UBpcMagazineManager::execHasAnyChamberContent },
		{ "HasLiveRoundInChamber", &UBpcMagazineManager::execHasLiveRoundInChamber },
		{ "InsertMagazineCustom", &UBpcMagazineManager::execInsertMagazineCustom },
		{ "InsertMagazineDefault", &UBpcMagazineManager::execInsertMagazineDefault },
		{ "IsActionBusy", &UBpcMagazineManager::execIsActionBusy },
		{ "IsMagazineInserted", &UBpcMagazineManager::execIsMagazineInserted },
		{ "IsRoundInChamber", &UBpcMagazineManager::execIsRoundInChamber },
		{ "IsSlideLockedBack", &UBpcMagazineManager::execIsSlideLockedBack },
		{ "ManualChamber", &UBpcMagazineManager::execManualChamber },
		{ "OnShotExtractionMoment", &UBpcMagazineManager::execOnShotExtractionMoment },
		{ "RemoveMagazine", &UBpcMagazineManager::execRemoveMagazine },
		{ "SetActionBusy", &UBpcMagazineManager::execSetActionBusy },
		{ "SetMaxMagAmmo", &UBpcMagazineManager::execSetMaxMagAmmo },
		{ "TryChamberRound", &UBpcMagazineManager::execTryChamberRound },
		{ "TryShoot", &UBpcMagazineManager::execTryShoot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBpcMagazineManager;
UClass* UBpcMagazineManager::GetPrivateStaticClass()
{
	using TClass = UBpcMagazineManager;
	if (!Z_Registration_Info_UClass_UBpcMagazineManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BpcMagazineManager"),
			Z_Registration_Info_UClass_UBpcMagazineManager.InnerSingleton,
			StaticRegisterNativesUBpcMagazineManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UBpcMagazineManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UBpcMagazineManager_NoRegister()
{
	return UBpcMagazineManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBpcMagazineManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// Componente C++ para controlar estado de cargador/recamara/slide desacoplado de animaciones.\n// Este BPC no ejecuta animaciones ni FX; solo valida y muta estado.\n" },
		{ "IncludePath", "Props/BpcMagazineManager.h" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Componente C++ para controlar estado de cargador/recamara/slide desacoplado de animaciones.\nEste BPC no ejecuta animaciones ni FX; solo valida y muta estado." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMagazineInserted_MetaData[] = {
		{ "Category", "Weapon|Events" },
		{ "Comment", "// === Eventos Blueprint ===\n" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "=== Eventos Blueprint ===" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMagazineRemoved_MetaData[] = {
		{ "Category", "Weapon|Events" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSpentCasingEjected_MetaData[] = {
		{ "Category", "Weapon|Events" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLiveRoundEjected_MetaData[] = {
		{ "Category", "Weapon|Events" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSlideLockedBack_MetaData[] = {
		{ "Category", "Weapon|Events" },
		{ "Comment", "// Dispara solo cuando el slide pasa de no-retenido a retenido atras.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Dispara solo cuando el slide pasa de no-retenido a retenido atras." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateAmmoUMG_MetaData[] = {
		{ "Category", "Weapon|Events" },
		{ "Comment", "// Evento unificado para refrescar HUD/UMG de municion y recamara.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Evento unificado para refrescar HUD/UMG de municion y recamara." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoChamberOnInsertIfPossible_MetaData[] = {
		{ "Category", "Weapon|Magazine" },
		{ "Comment", "// Si true, al insertar cargador intenta alimentar recamara si esta vacia.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Si true, al insertar cargador intenta alimentar recamara si esta vacia." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMagAmmo_MetaData[] = {
		{ "Category", "Weapon|Magazine" },
		{ "ClampMin", "0" },
		{ "Comment", "// Capacidad maxima del cargador (para InsertMagazineDefault y clamp de custom).\n" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Capacidad maxima del cargador (para InsertMagazineDefault y clamp de custom)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasMagazineInserted_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon|State" },
		{ "Comment", "// Estado de runtime: cargador insertado.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Estado de runtime: cargador insertado." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMagAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon|State" },
		{ "Comment", "// Estado de runtime: balas restantes en cargador insertado.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Estado de runtime: balas restantes en cargador insertado." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasRoundChambered_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon|State" },
		{ "Comment", "// Estado de runtime: hay bala viva en recamara.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Estado de runtime: hay bala viva en recamara." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChamberHasSpentCasing_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon|State" },
		{ "Comment", "// Estado de runtime: hay casquillo servido pendiente en recamara.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Estado de runtime: hay casquillo servido pendiente en recamara." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSlideLockedBack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon|State" },
		{ "Comment", "// Estado de runtime: slide retenido atras (tipicamente por cargador vacio con recamara vacia).\n" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Estado de runtime: slide retenido atras (tipicamente por cargador vacio con recamara vacia)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActionBusy_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon|State" },
		{ "Comment", "// Bloqueo externo para evitar acciones en momentos invalidos de gameplay/animacion.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcMagazineManager.h" },
		{ "ToolTip", "Bloqueo externo para evitar acciones en momentos invalidos de gameplay/animacion." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMagazineInserted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMagazineRemoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpentCasingEjected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLiveRoundEjected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSlideLockedBack;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UpdateAmmoUMG;
	static void NewProp_bAutoChamberOnInsertIfPossible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoChamberOnInsertIfPossible;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMagAmmo;
	static void NewProp_bHasMagazineInserted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMagazineInserted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMagAmmo;
	static void NewProp_bHasRoundChambered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRoundChambered;
	static void NewProp_bChamberHasSpentCasing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChamberHasSpentCasing;
	static void NewProp_bSlideLockedBack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSlideLockedBack;
	static void NewProp_bIsActionBusy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActionBusy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBpcMagazineManager_CanChamberRound, "CanChamberRound" }, // 282341893
		{ &Z_Construct_UFunction_UBpcMagazineManager_ConsumeRoundOnFire, "ConsumeRoundOnFire" }, // 2642293105
		{ &Z_Construct_UFunction_UBpcMagazineManager_EjectChamber, "EjectChamber" }, // 2286329002
		{ &Z_Construct_UFunction_UBpcMagazineManager_GetCurrentMagAmmo, "GetCurrentMagAmmo" }, // 2867966758
		{ &Z_Construct_UFunction_UBpcMagazineManager_GetMaxMagAmmo, "GetMaxMagAmmo" }, // 358623807
		{ &Z_Construct_UFunction_UBpcMagazineManager_HasAmmoInMagazine, "HasAmmoInMagazine" }, // 1614125060
		{ &Z_Construct_UFunction_UBpcMagazineManager_HasAnyChamberContent, "HasAnyChamberContent" }, // 809079479
		{ &Z_Construct_UFunction_UBpcMagazineManager_HasLiveRoundInChamber, "HasLiveRoundInChamber" }, // 4045359097
		{ &Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineCustom, "InsertMagazineCustom" }, // 3931305736
		{ &Z_Construct_UFunction_UBpcMagazineManager_InsertMagazineDefault, "InsertMagazineDefault" }, // 2949064625
		{ &Z_Construct_UFunction_UBpcMagazineManager_IsActionBusy, "IsActionBusy" }, // 3774479357
		{ &Z_Construct_UFunction_UBpcMagazineManager_IsMagazineInserted, "IsMagazineInserted" }, // 5134920
		{ &Z_Construct_UFunction_UBpcMagazineManager_IsRoundInChamber, "IsRoundInChamber" }, // 2770732929
		{ &Z_Construct_UFunction_UBpcMagazineManager_IsSlideLockedBack, "IsSlideLockedBack" }, // 2189132811
		{ &Z_Construct_UFunction_UBpcMagazineManager_ManualChamber, "ManualChamber" }, // 1656369832
		{ &Z_Construct_UFunction_UBpcMagazineManager_OnShotExtractionMoment, "OnShotExtractionMoment" }, // 621932996
		{ &Z_Construct_UFunction_UBpcMagazineManager_RemoveMagazine, "RemoveMagazine" }, // 2107830766
		{ &Z_Construct_UFunction_UBpcMagazineManager_SetActionBusy, "SetActionBusy" }, // 3440774109
		{ &Z_Construct_UFunction_UBpcMagazineManager_SetMaxMagAmmo, "SetMaxMagAmmo" }, // 1965455325
		{ &Z_Construct_UFunction_UBpcMagazineManager_TryChamberRound, "TryChamberRound" }, // 3231728141
		{ &Z_Construct_UFunction_UBpcMagazineManager_TryShoot, "TryShoot" }, // 3793395773
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBpcMagazineManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_OnMagazineInserted = { "OnMagazineInserted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBpcMagazineManager, OnMagazineInserted), Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineInsertedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMagazineInserted_MetaData), NewProp_OnMagazineInserted_MetaData) }; // 2277283167
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_OnMagazineRemoved = { "OnMagazineRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBpcMagazineManager, OnMagazineRemoved), Z_Construct_UDelegateFunction_TTSWeapons_OnMagazineRemovedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMagazineRemoved_MetaData), NewProp_OnMagazineRemoved_MetaData) }; // 3908533923
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_OnSpentCasingEjected = { "OnSpentCasingEjected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBpcMagazineManager, OnSpentCasingEjected), Z_Construct_UDelegateFunction_TTSWeapons_OnSpentCasingEjectedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSpentCasingEjected_MetaData), NewProp_OnSpentCasingEjected_MetaData) }; // 837522063
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_OnLiveRoundEjected = { "OnLiveRoundEjected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBpcMagazineManager, OnLiveRoundEjected), Z_Construct_UDelegateFunction_TTSWeapons_OnLiveRoundEjectedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLiveRoundEjected_MetaData), NewProp_OnLiveRoundEjected_MetaData) }; // 3768523454
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_OnSlideLockedBack = { "OnSlideLockedBack", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBpcMagazineManager, OnSlideLockedBack), Z_Construct_UDelegateFunction_TTSWeapons_OnSlideLockedBackSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSlideLockedBack_MetaData), NewProp_OnSlideLockedBack_MetaData) }; // 927748520
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_UpdateAmmoUMG = { "UpdateAmmoUMG", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBpcMagazineManager, UpdateAmmoUMG), Z_Construct_UDelegateFunction_TTSWeapons_UpdateAmmoUMGSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateAmmoUMG_MetaData), NewProp_UpdateAmmoUMG_MetaData) }; // 14356937
void Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bAutoChamberOnInsertIfPossible_SetBit(void* Obj)
{
	((UBpcMagazineManager*)Obj)->bAutoChamberOnInsertIfPossible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bAutoChamberOnInsertIfPossible = { "bAutoChamberOnInsertIfPossible", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBpcMagazineManager), &Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bAutoChamberOnInsertIfPossible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoChamberOnInsertIfPossible_MetaData), NewProp_bAutoChamberOnInsertIfPossible_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_MaxMagAmmo = { "MaxMagAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBpcMagazineManager, MaxMagAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMagAmmo_MetaData), NewProp_MaxMagAmmo_MetaData) };
void Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bHasMagazineInserted_SetBit(void* Obj)
{
	((UBpcMagazineManager*)Obj)->bHasMagazineInserted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bHasMagazineInserted = { "bHasMagazineInserted", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBpcMagazineManager), &Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bHasMagazineInserted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasMagazineInserted_MetaData), NewProp_bHasMagazineInserted_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_CurrentMagAmmo = { "CurrentMagAmmo", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBpcMagazineManager, CurrentMagAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMagAmmo_MetaData), NewProp_CurrentMagAmmo_MetaData) };
void Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bHasRoundChambered_SetBit(void* Obj)
{
	((UBpcMagazineManager*)Obj)->bHasRoundChambered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bHasRoundChambered = { "bHasRoundChambered", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBpcMagazineManager), &Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bHasRoundChambered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasRoundChambered_MetaData), NewProp_bHasRoundChambered_MetaData) };
void Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bChamberHasSpentCasing_SetBit(void* Obj)
{
	((UBpcMagazineManager*)Obj)->bChamberHasSpentCasing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bChamberHasSpentCasing = { "bChamberHasSpentCasing", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBpcMagazineManager), &Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bChamberHasSpentCasing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChamberHasSpentCasing_MetaData), NewProp_bChamberHasSpentCasing_MetaData) };
void Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bSlideLockedBack_SetBit(void* Obj)
{
	((UBpcMagazineManager*)Obj)->bSlideLockedBack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bSlideLockedBack = { "bSlideLockedBack", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBpcMagazineManager), &Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bSlideLockedBack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSlideLockedBack_MetaData), NewProp_bSlideLockedBack_MetaData) };
void Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bIsActionBusy_SetBit(void* Obj)
{
	((UBpcMagazineManager*)Obj)->bIsActionBusy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bIsActionBusy = { "bIsActionBusy", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBpcMagazineManager), &Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bIsActionBusy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActionBusy_MetaData), NewProp_bIsActionBusy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBpcMagazineManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_OnMagazineInserted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_OnMagazineRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_OnSpentCasingEjected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_OnLiveRoundEjected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_OnSlideLockedBack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_UpdateAmmoUMG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bAutoChamberOnInsertIfPossible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_MaxMagAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bHasMagazineInserted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_CurrentMagAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bHasRoundChambered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bChamberHasSpentCasing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bSlideLockedBack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcMagazineManager_Statics::NewProp_bIsActionBusy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBpcMagazineManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBpcMagazineManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TTSWeapons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBpcMagazineManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBpcMagazineManager_Statics::ClassParams = {
	&UBpcMagazineManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBpcMagazineManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBpcMagazineManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBpcMagazineManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UBpcMagazineManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBpcMagazineManager()
{
	if (!Z_Registration_Info_UClass_UBpcMagazineManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBpcMagazineManager.OuterSingleton, Z_Construct_UClass_UBpcMagazineManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBpcMagazineManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBpcMagazineManager);
UBpcMagazineManager::~UBpcMagazineManager() {}
// ********** End Class UBpcMagazineManager ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h__Script_TTSWeapons_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EShootAttemptResult_StaticEnum, TEXT("EShootAttemptResult"), &Z_Registration_Info_UEnum_EShootAttemptResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3978797976U) },
		{ EShootRejectReason_StaticEnum, TEXT("EShootRejectReason"), &Z_Registration_Info_UEnum_EShootRejectReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2531892201U) },
		{ EChamberEjectedType_StaticEnum, TEXT("EChamberEjectedType"), &Z_Registration_Info_UEnum_EChamberEjectedType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4173442251U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBpcMagazineManager, UBpcMagazineManager::StaticClass, TEXT("UBpcMagazineManager"), &Z_Registration_Info_UClass_UBpcMagazineManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBpcMagazineManager), 2709523499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h__Script_TTSWeapons_3230064690(TEXT("/Script/TTSWeapons"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h__Script_TTSWeapons_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h__Script_TTSWeapons_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h__Script_TTSWeapons_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h__Script_TTSWeapons_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
