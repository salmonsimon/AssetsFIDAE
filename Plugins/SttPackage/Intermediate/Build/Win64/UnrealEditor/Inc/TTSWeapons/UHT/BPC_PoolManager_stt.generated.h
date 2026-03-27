// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasePool/BPC/BPC_PoolManager_stt.h"

#ifdef TTSWEAPONS_BPC_PoolManager_stt_generated_h
#error "BPC_PoolManager_stt.generated.h already included, missing '#pragma once' in BPC_PoolManager_stt.h"
#endif
#define TTSWEAPONS_BPC_PoolManager_stt_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ABP_PoolableActorBase_stt;
class IBPI_PoolableActor_stt;

// ********** Begin Class UBPC_PoolManager_stt *****************************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPC_BPC_PoolManager_stt_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsManagingPhysicsAndGravityState_stt); \
	DECLARE_FUNCTION(execIsActorOwnedByPool_stt); \
	DECLARE_FUNCTION(execGetTotalCount_stt); \
	DECLARE_FUNCTION(execGetAvailableCount_stt); \
	DECLARE_FUNCTION(execFinalizeReturnActorToPoolByBPI_stt); \
	DECLARE_FUNCTION(execFinalizeReturnActorToPool_stt); \
	DECLARE_FUNCTION(execRequestReturnActorToPoolByBPI_stt); \
	DECLARE_FUNCTION(execRequestReturnActorToPool_stt); \
	DECLARE_FUNCTION(execGetActorFromPool_stt); \
	DECLARE_FUNCTION(execFillPool_stt); \
	DECLARE_FUNCTION(execInitPool_stt);


TTSWEAPONS_API UClass* Z_Construct_UClass_UBPC_PoolManager_stt_NoRegister();

#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPC_BPC_PoolManager_stt_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBPC_PoolManager_stt(); \
	friend struct Z_Construct_UClass_UBPC_PoolManager_stt_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TTSWEAPONS_API UClass* Z_Construct_UClass_UBPC_PoolManager_stt_NoRegister(); \
public: \
	DECLARE_CLASS2(UBPC_PoolManager_stt, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TTSWeapons"), Z_Construct_UClass_UBPC_PoolManager_stt_NoRegister) \
	DECLARE_SERIALIZER(UBPC_PoolManager_stt)


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPC_BPC_PoolManager_stt_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBPC_PoolManager_stt(UBPC_PoolManager_stt&&) = delete; \
	UBPC_PoolManager_stt(const UBPC_PoolManager_stt&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPC_PoolManager_stt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPC_PoolManager_stt); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBPC_PoolManager_stt) \
	NO_API virtual ~UBPC_PoolManager_stt();


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPC_BPC_PoolManager_stt_h_18_PROLOG
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPC_BPC_PoolManager_stt_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPC_BPC_PoolManager_stt_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPC_BPC_PoolManager_stt_h_21_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPC_BPC_PoolManager_stt_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBPC_PoolManager_stt;

// ********** End Class UBPC_PoolManager_stt *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPC_BPC_PoolManager_stt_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
