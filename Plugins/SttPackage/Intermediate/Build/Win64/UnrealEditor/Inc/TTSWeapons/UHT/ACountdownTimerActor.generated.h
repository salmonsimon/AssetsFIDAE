// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Timer/ACountdownTimerActor.h"

#ifdef TTSWEAPONS_ACountdownTimerActor_generated_h
#error "ACountdownTimerActor.generated.h already included, missing '#pragma once' in ACountdownTimerActor.h"
#endif
#define TTSWEAPONS_ACountdownTimerActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ECountdownTimerState : uint8;
struct FTimerCheckpointSnapshot_stt;

// ********** Begin Delegate FCountdownTimerSimpleSignature ****************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountdownTimerActor_h_29_DELEGATE \
TTSWEAPONS_API void FCountdownTimerSimpleSignature_DelegateWrapper(const FMulticastScriptDelegate& CountdownTimerSimpleSignature);


// ********** End Delegate FCountdownTimerSimpleSignature ******************************************

// ********** Begin Delegate FCountdownTimerUpdatedSignature ***************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountdownTimerActor_h_45_DELEGATE \
TTSWEAPONS_API void FCountdownTimerUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& CountdownTimerUpdatedSignature, int32 RemainingMinutes, int32 RemainingSeconds, int32 RemainingMilliseconds, int64 RemainingTotalMilliseconds, float NormalizedProgress);


// ********** End Delegate FCountdownTimerUpdatedSignature *****************************************

// ********** Begin Delegate FCountdownTimerNearEndSignature ***************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountdownTimerActor_h_53_DELEGATE \
TTSWEAPONS_API void FCountdownTimerNearEndSignature_DelegateWrapper(const FMulticastScriptDelegate& CountdownTimerNearEndSignature, int64 RemainingTotalMilliseconds);


// ********** End Delegate FCountdownTimerNearEndSignature *****************************************

// ********** Begin Delegate FCountdownTimerCheckpointCapturedSignature ****************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountdownTimerActor_h_60_DELEGATE \
TTSWEAPONS_API void FCountdownTimerCheckpointCapturedSignature_DelegateWrapper(const FMulticastScriptDelegate& CountdownTimerCheckpointCapturedSignature, FTimerCheckpointSnapshot_stt Checkpoint);


// ********** End Delegate FCountdownTimerCheckpointCapturedSignature ******************************

// ********** Begin Class AACountdownTimerActor ****************************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountdownTimerActor_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCaptureCheckpoint); \
	DECLARE_FUNCTION(execGetCurrentCheckpoint); \
	DECLARE_FUNCTION(execGetFormattedRemainingTime); \
	DECLARE_FUNCTION(execIsIdle); \
	DECLARE_FUNCTION(execIsStopped); \
	DECLARE_FUNCTION(execIsFinished); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execGetNormalizedProgress); \
	DECLARE_FUNCTION(execGetTimerState); \
	DECLARE_FUNCTION(execGetInitialTotalMilliseconds); \
	DECLARE_FUNCTION(execGetRemainingTotalMilliseconds); \
	DECLARE_FUNCTION(execGetInitialTime); \
	DECLARE_FUNCTION(execGetRemainingTime); \
	DECLARE_FUNCTION(execSubtractTime); \
	DECLARE_FUNCTION(execAddTime); \
	DECLARE_FUNCTION(execFinishTimer); \
	DECLARE_FUNCTION(execResetTimer); \
	DECLARE_FUNCTION(execStopTimer); \
	DECLARE_FUNCTION(execResumeTimer); \
	DECLARE_FUNCTION(execPauseTimer); \
	DECLARE_FUNCTION(execStartTimer); \
	DECLARE_FUNCTION(execSetTime);


TTSWEAPONS_API UClass* Z_Construct_UClass_AACountdownTimerActor_NoRegister();

#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountdownTimerActor_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAACountdownTimerActor(); \
	friend struct Z_Construct_UClass_AACountdownTimerActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TTSWEAPONS_API UClass* Z_Construct_UClass_AACountdownTimerActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AACountdownTimerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TTSWeapons"), Z_Construct_UClass_AACountdownTimerActor_NoRegister) \
	DECLARE_SERIALIZER(AACountdownTimerActor) \
	virtual UObject* _getUObject() const override { return const_cast<AACountdownTimerActor*>(this); }


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountdownTimerActor_h_65_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AACountdownTimerActor(AACountdownTimerActor&&) = delete; \
	AACountdownTimerActor(const AACountdownTimerActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACountdownTimerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACountdownTimerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AACountdownTimerActor) \
	NO_API virtual ~AACountdownTimerActor();


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountdownTimerActor_h_62_PROLOG
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountdownTimerActor_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountdownTimerActor_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountdownTimerActor_h_65_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountdownTimerActor_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AACountdownTimerActor;

// ********** End Class AACountdownTimerActor ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountdownTimerActor_h

// ********** Begin Enum ECountdownTimerState ******************************************************
#define FOREACH_ENUM_ECOUNTDOWNTIMERSTATE(op) \
	op(ECountdownTimerState::Idle) \
	op(ECountdownTimerState::Running) \
	op(ECountdownTimerState::Paused) \
	op(ECountdownTimerState::Stopped) \
	op(ECountdownTimerState::Finished) 

enum class ECountdownTimerState : uint8;
template<> struct TIsUEnumClass<ECountdownTimerState> { enum { Value = true }; };
template<> TTSWEAPONS_API UEnum* StaticEnum<ECountdownTimerState>();
// ********** End Enum ECountdownTimerState ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
