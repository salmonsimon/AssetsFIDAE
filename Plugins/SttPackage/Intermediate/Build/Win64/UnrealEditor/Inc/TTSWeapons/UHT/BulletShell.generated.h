// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Props/BulletShell.h"

#ifdef TTSWEAPONS_BulletShell_generated_h
#error "BulletShell.generated.h already included, missing '#pragma once' in BulletShell.h"
#endif
#define TTSWEAPONS_BulletShell_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ABulletShell *************************************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BulletShell_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execActivateEjection);


TTSWEAPONS_API UClass* Z_Construct_UClass_ABulletShell_NoRegister();

#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BulletShell_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABulletShell(); \
	friend struct Z_Construct_UClass_ABulletShell_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TTSWEAPONS_API UClass* Z_Construct_UClass_ABulletShell_NoRegister(); \
public: \
	DECLARE_CLASS2(ABulletShell, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TTSWeapons"), Z_Construct_UClass_ABulletShell_NoRegister) \
	DECLARE_SERIALIZER(ABulletShell) \
	virtual UObject* _getUObject() const override { return const_cast<ABulletShell*>(this); }


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BulletShell_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABulletShell(ABulletShell&&) = delete; \
	ABulletShell(const ABulletShell&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletShell); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletShell); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABulletShell) \
	NO_API virtual ~ABulletShell();


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BulletShell_h_24_PROLOG
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BulletShell_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BulletShell_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BulletShell_h_27_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BulletShell_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABulletShell;

// ********** End Class ABulletShell ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BulletShell_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
