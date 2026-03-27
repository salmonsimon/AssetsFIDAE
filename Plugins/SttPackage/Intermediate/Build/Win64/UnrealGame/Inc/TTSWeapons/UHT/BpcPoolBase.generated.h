// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Props/BpcPoolBase.h"

#ifdef TTSWEAPONS_BpcPoolBase_generated_h
#error "BpcPoolBase.generated.h already included, missing '#pragma once' in BpcPoolBase.h"
#endif
#define TTSWEAPONS_BpcPoolBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class UBpcPoolBase *************************************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcPoolBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTotalCount); \
	DECLARE_FUNCTION(execGetAvailableCount); \
	DECLARE_FUNCTION(execReturnActorToPool); \
	DECLARE_FUNCTION(execGetAvailableActor); \
	DECLARE_FUNCTION(execFillPool); \
	DECLARE_FUNCTION(execInitPool);


TTSWEAPONS_API UClass* Z_Construct_UClass_UBpcPoolBase_NoRegister();

#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcPoolBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBpcPoolBase(); \
	friend struct Z_Construct_UClass_UBpcPoolBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TTSWEAPONS_API UClass* Z_Construct_UClass_UBpcPoolBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UBpcPoolBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TTSWeapons"), Z_Construct_UClass_UBpcPoolBase_NoRegister) \
	DECLARE_SERIALIZER(UBpcPoolBase)


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcPoolBase_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBpcPoolBase(UBpcPoolBase&&) = delete; \
	UBpcPoolBase(const UBpcPoolBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBpcPoolBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBpcPoolBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBpcPoolBase) \
	NO_API virtual ~UBpcPoolBase();


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcPoolBase_h_18_PROLOG
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcPoolBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcPoolBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcPoolBase_h_21_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcPoolBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBpcPoolBase;

// ********** End Class UBpcPoolBase ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcPoolBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
