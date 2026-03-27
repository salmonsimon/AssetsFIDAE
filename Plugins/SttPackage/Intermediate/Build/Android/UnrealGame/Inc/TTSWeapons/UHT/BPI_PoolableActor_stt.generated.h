// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasePool/BPI/BPI_PoolableActor_stt.h"

#ifdef TTSWEAPONS_BPI_PoolableActor_stt_generated_h
#error "BPI_PoolableActor_stt.generated.h already included, missing '#pragma once' in BPI_PoolableActor_stt.h"
#endif
#define TTSWEAPONS_BPI_PoolableActor_stt_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UBPI_PoolableActor_stt ***********************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPI_BPI_PoolableActor_stt_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool BPI_IsReturnInProgress_stt_Implementation() const { return false; }; \
	virtual bool BPI_IsInPool_stt_Implementation() const { return false; }; \
	virtual void BPI_DisablePhysicsAndGravity_stt_Implementation() {}; \
	virtual void BPI_EnablePhysicsAndGravity_stt_Implementation() {}; \
	virtual void BPI_SetPhysicsAndGravityEnabled_stt_Implementation(bool bEnablePhysics, bool bEnableGravity) {}; \
	virtual void BPI_FinalizeReturnToPool_stt_Implementation() {}; \
	virtual void BPI_RequestDeactivateToPool_stt_Implementation() {}; \
	DECLARE_FUNCTION(execBPI_IsReturnInProgress_stt); \
	DECLARE_FUNCTION(execBPI_IsInPool_stt); \
	DECLARE_FUNCTION(execBPI_DisablePhysicsAndGravity_stt); \
	DECLARE_FUNCTION(execBPI_EnablePhysicsAndGravity_stt); \
	DECLARE_FUNCTION(execBPI_SetPhysicsAndGravityEnabled_stt); \
	DECLARE_FUNCTION(execBPI_FinalizeReturnToPool_stt); \
	DECLARE_FUNCTION(execBPI_RequestDeactivateToPool_stt);


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPI_BPI_PoolableActor_stt_h_13_CALLBACK_WRAPPERS
TTSWEAPONS_API UClass* Z_Construct_UClass_UBPI_PoolableActor_stt_NoRegister();

#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPI_BPI_PoolableActor_stt_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPI_PoolableActor_stt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBPI_PoolableActor_stt(UBPI_PoolableActor_stt&&) = delete; \
	UBPI_PoolableActor_stt(const UBPI_PoolableActor_stt&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPI_PoolableActor_stt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPI_PoolableActor_stt); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPI_PoolableActor_stt) \
	virtual ~UBPI_PoolableActor_stt() = default;


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPI_BPI_PoolableActor_stt_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBPI_PoolableActor_stt(); \
	friend struct Z_Construct_UClass_UBPI_PoolableActor_stt_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TTSWEAPONS_API UClass* Z_Construct_UClass_UBPI_PoolableActor_stt_NoRegister(); \
public: \
	DECLARE_CLASS2(UBPI_PoolableActor_stt, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TTSWeapons"), Z_Construct_UClass_UBPI_PoolableActor_stt_NoRegister) \
	DECLARE_SERIALIZER(UBPI_PoolableActor_stt)


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPI_BPI_PoolableActor_stt_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPI_BPI_PoolableActor_stt_h_13_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPI_BPI_PoolableActor_stt_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPI_BPI_PoolableActor_stt_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBPI_PoolableActor_stt() {} \
public: \
	typedef UBPI_PoolableActor_stt UClassType; \
	typedef IBPI_PoolableActor_stt ThisClass; \
	static void Execute_BPI_DisablePhysicsAndGravity_stt(UObject* O); \
	static void Execute_BPI_EnablePhysicsAndGravity_stt(UObject* O); \
	static void Execute_BPI_FinalizeReturnToPool_stt(UObject* O); \
	static bool Execute_BPI_IsInPool_stt(const UObject* O); \
	static bool Execute_BPI_IsReturnInProgress_stt(const UObject* O); \
	static void Execute_BPI_RequestDeactivateToPool_stt(UObject* O); \
	static void Execute_BPI_SetPhysicsAndGravityEnabled_stt(UObject* O, bool bEnablePhysics, bool bEnableGravity); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPI_BPI_PoolableActor_stt_h_10_PROLOG
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPI_BPI_PoolableActor_stt_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPI_BPI_PoolableActor_stt_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPI_BPI_PoolableActor_stt_h_13_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPI_BPI_PoolableActor_stt_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBPI_PoolableActor_stt;

// ********** End Interface UBPI_PoolableActor_stt *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPI_BPI_PoolableActor_stt_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
