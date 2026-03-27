// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Props/BpcMagazineManager.h"

#ifdef TTSWEAPONS_BpcMagazineManager_generated_h
#error "BpcMagazineManager.generated.h already included, missing '#pragma once' in BpcMagazineManager.h"
#endif
#define TTSWEAPONS_BpcMagazineManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EChamberEjectedType : uint8;
enum class EShootAttemptResult : uint8;
enum class EShootRejectReason : uint8;

// ********** Begin Delegate FOnMagazineInsertedSignature ******************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h_35_DELEGATE \
TTSWEAPONS_API void FOnMagazineInsertedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMagazineInsertedSignature, int32 CurrentMagAmmo, int32 MaxMagAmmo);


// ********** End Delegate FOnMagazineInsertedSignature ********************************************

// ********** Begin Delegate FOnMagazineRemovedSignature *******************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h_36_DELEGATE \
TTSWEAPONS_API void FOnMagazineRemovedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMagazineRemovedSignature, int32 RemainingAmmoInRemovedMag);


// ********** End Delegate FOnMagazineRemovedSignature *********************************************

// ********** Begin Delegate FOnSpentCasingEjectedSignature ****************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h_37_DELEGATE \
TTSWEAPONS_API void FOnSpentCasingEjectedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSpentCasingEjectedSignature);


// ********** End Delegate FOnSpentCasingEjectedSignature ******************************************

// ********** Begin Delegate FOnLiveRoundEjectedSignature ******************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h_38_DELEGATE \
TTSWEAPONS_API void FOnLiveRoundEjectedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnLiveRoundEjectedSignature);


// ********** End Delegate FOnLiveRoundEjectedSignature ********************************************

// ********** Begin Delegate FOnSlideLockedBackSignature *******************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h_39_DELEGATE \
TTSWEAPONS_API void FOnSlideLockedBackSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSlideLockedBackSignature);


// ********** End Delegate FOnSlideLockedBackSignature *********************************************

// ********** Begin Delegate FUpdateAmmoUMGSignature ***********************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h_40_DELEGATE \
TTSWEAPONS_API void FUpdateAmmoUMGSignature_DelegateWrapper(const FMulticastScriptDelegate& UpdateAmmoUMGSignature, bool bHasMagazineInserted, bool bHasRoundInChamber, int32 CurrentMagAmmo, int32 MaxMagAmmo);


// ********** End Delegate FUpdateAmmoUMGSignature *************************************************

// ********** Begin Class UBpcMagazineManager ******************************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsActionBusy); \
	DECLARE_FUNCTION(execSetActionBusy); \
	DECLARE_FUNCTION(execSetMaxMagAmmo); \
	DECLARE_FUNCTION(execGetMaxMagAmmo); \
	DECLARE_FUNCTION(execGetCurrentMagAmmo); \
	DECLARE_FUNCTION(execIsMagazineInserted); \
	DECLARE_FUNCTION(execIsSlideLockedBack); \
	DECLARE_FUNCTION(execHasAmmoInMagazine); \
	DECLARE_FUNCTION(execHasAnyChamberContent); \
	DECLARE_FUNCTION(execIsRoundInChamber); \
	DECLARE_FUNCTION(execHasLiveRoundInChamber); \
	DECLARE_FUNCTION(execManualChamber); \
	DECLARE_FUNCTION(execEjectChamber); \
	DECLARE_FUNCTION(execTryChamberRound); \
	DECLARE_FUNCTION(execCanChamberRound); \
	DECLARE_FUNCTION(execRemoveMagazine); \
	DECLARE_FUNCTION(execInsertMagazineCustom); \
	DECLARE_FUNCTION(execInsertMagazineDefault); \
	DECLARE_FUNCTION(execOnShotExtractionMoment); \
	DECLARE_FUNCTION(execConsumeRoundOnFire); \
	DECLARE_FUNCTION(execTryShoot);


TTSWEAPONS_API UClass* Z_Construct_UClass_UBpcMagazineManager_NoRegister();

#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBpcMagazineManager(); \
	friend struct Z_Construct_UClass_UBpcMagazineManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TTSWEAPONS_API UClass* Z_Construct_UClass_UBpcMagazineManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UBpcMagazineManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TTSWeapons"), Z_Construct_UClass_UBpcMagazineManager_NoRegister) \
	DECLARE_SERIALIZER(UBpcMagazineManager)


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBpcMagazineManager(UBpcMagazineManager&&) = delete; \
	UBpcMagazineManager(const UBpcMagazineManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBpcMagazineManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBpcMagazineManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBpcMagazineManager) \
	NO_API virtual ~UBpcMagazineManager();


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h_44_PROLOG
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h_47_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBpcMagazineManager;

// ********** End Class UBpcMagazineManager ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcMagazineManager_h

// ********** Begin Enum EShootAttemptResult *******************************************************
#define FOREACH_ENUM_ESHOOTATTEMPTRESULT(op) \
	op(EShootAttemptResult::Fired) \
	op(EShootAttemptResult::Rejected) 

enum class EShootAttemptResult : uint8;
template<> struct TIsUEnumClass<EShootAttemptResult> { enum { Value = true }; };
template<> TTSWEAPONS_API UEnum* StaticEnum<EShootAttemptResult>();
// ********** End Enum EShootAttemptResult *********************************************************

// ********** Begin Enum EShootRejectReason ********************************************************
#define FOREACH_ENUM_ESHOOTREJECTREASON(op) \
	op(EShootRejectReason::None) \
	op(EShootRejectReason::NoRoundInChamber) \
	op(EShootRejectReason::SlideLockedBack) \
	op(EShootRejectReason::ChamberHasSpentCasing) \
	op(EShootRejectReason::Busy) 

enum class EShootRejectReason : uint8;
template<> struct TIsUEnumClass<EShootRejectReason> { enum { Value = true }; };
template<> TTSWEAPONS_API UEnum* StaticEnum<EShootRejectReason>();
// ********** End Enum EShootRejectReason **********************************************************

// ********** Begin Enum EChamberEjectedType *******************************************************
#define FOREACH_ENUM_ECHAMBEREJECTEDTYPE(op) \
	op(EChamberEjectedType::None) \
	op(EChamberEjectedType::LiveRound) \
	op(EChamberEjectedType::SpentCasing) 

enum class EChamberEjectedType : uint8;
template<> struct TIsUEnumClass<EChamberEjectedType> { enum { Value = true }; };
template<> TTSWEAPONS_API UEnum* StaticEnum<EChamberEjectedType>();
// ********** End Enum EChamberEjectedType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
