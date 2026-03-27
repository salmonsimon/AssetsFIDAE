// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasePool/Actor/BP_PoolableActorBase_stt.h"

#ifdef TTSWEAPONS_BP_PoolableActorBase_stt_generated_h
#error "BP_PoolableActorBase_stt.generated.h already included, missing '#pragma once' in BP_PoolableActorBase_stt.h"
#endif
#define TTSWEAPONS_BP_PoolableActorBase_stt_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UBPC_PoolManager_stt;

// ********** Begin Class ABP_PoolableActorBase_stt ************************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_Actor_BP_PoolableActorBase_stt_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnBPIRequestDeactivateToPool_stt_Implementation(); \
	virtual void OnFinalReturnToPool_stt_Implementation(); \
	virtual void OnBeginReturnToPool_stt_Implementation(); \
	virtual void OnTakenFromPool_stt_Implementation(); \
	DECLARE_FUNCTION(execOnBPIRequestDeactivateToPool_stt); \
	DECLARE_FUNCTION(execOnFinalReturnToPool_stt); \
	DECLARE_FUNCTION(execOnBeginReturnToPool_stt); \
	DECLARE_FUNCTION(execOnTakenFromPool_stt); \
	DECLARE_FUNCTION(execGetPoolManager_stt); \
	DECLARE_FUNCTION(execIsReturnInProgress_stt); \
	DECLARE_FUNCTION(execIsInPool_stt); \
	DECLARE_FUNCTION(execDisablePhysicsAndGravity_stt); \
	DECLARE_FUNCTION(execEnablePhysicsAndGravity_stt); \
	DECLARE_FUNCTION(execSetPhysicsAndGravityEnabled_stt); \
	DECLARE_FUNCTION(execFinalizeReturnToPool_stt); \
	DECLARE_FUNCTION(execRequestDeactivateToPool_stt);


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_Actor_BP_PoolableActorBase_stt_h_20_CALLBACK_WRAPPERS
TTSWEAPONS_API UClass* Z_Construct_UClass_ABP_PoolableActorBase_stt_NoRegister();

#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_Actor_BP_PoolableActorBase_stt_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_PoolableActorBase_stt(); \
	friend struct Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TTSWEAPONS_API UClass* Z_Construct_UClass_ABP_PoolableActorBase_stt_NoRegister(); \
public: \
	DECLARE_CLASS2(ABP_PoolableActorBase_stt, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TTSWeapons"), Z_Construct_UClass_ABP_PoolableActorBase_stt_NoRegister) \
	DECLARE_SERIALIZER(ABP_PoolableActorBase_stt) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_PoolableActorBase_stt*>(this); }


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_Actor_BP_PoolableActorBase_stt_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABP_PoolableActorBase_stt(ABP_PoolableActorBase_stt&&) = delete; \
	ABP_PoolableActorBase_stt(const ABP_PoolableActorBase_stt&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_PoolableActorBase_stt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_PoolableActorBase_stt); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABP_PoolableActorBase_stt) \
	NO_API virtual ~ABP_PoolableActorBase_stt();


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_Actor_BP_PoolableActorBase_stt_h_17_PROLOG
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_Actor_BP_PoolableActorBase_stt_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_Actor_BP_PoolableActorBase_stt_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_Actor_BP_PoolableActorBase_stt_h_20_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_Actor_BP_PoolableActorBase_stt_h_20_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_Actor_BP_PoolableActorBase_stt_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABP_PoolableActorBase_stt;

// ********** End Class ABP_PoolableActorBase_stt **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_Actor_BP_PoolableActorBase_stt_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
