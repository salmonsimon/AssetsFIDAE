// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Timer/ACountupTimerActor.h"

#ifdef TTSWEAPONS_ACountupTimerActor_generated_h
#error "ACountupTimerActor.generated.h already included, missing '#pragma once' in ACountupTimerActor.h"
#endif
#define TTSWEAPONS_ACountupTimerActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ECountupTimerState : uint8;
struct FTimerCheckpointSnapshot_stt;

// ********** Begin ScriptStruct FCountupSecondLogEntry ********************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCountupSecondLogEntry_Statics; \
	TTSWEAPONS_API static class UScriptStruct* StaticStruct();


struct FCountupSecondLogEntry;
// ********** End ScriptStruct FCountupSecondLogEntry **********************************************

// ********** Begin Delegate FCountupTimerSimpleSignature ******************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h_44_DELEGATE \
TTSWEAPONS_API void FCountupTimerSimpleSignature_DelegateWrapper(const FMulticastScriptDelegate& CountupTimerSimpleSignature);


// ********** End Delegate FCountupTimerSimpleSignature ********************************************

// ********** Begin Delegate FCountupTimerUpdatedSignature *****************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h_57_DELEGATE \
TTSWEAPONS_API void FCountupTimerUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& CountupTimerUpdatedSignature, int32 ElapsedMinutes, int32 ElapsedSeconds, int32 ElapsedMilliseconds, int64 ElapsedTotalMilliseconds);


// ********** End Delegate FCountupTimerUpdatedSignature *******************************************

// ********** Begin Delegate FCountupTimerSecondReachedSignature ***********************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h_67_DELEGATE \
TTSWEAPONS_API void FCountupTimerSecondReachedSignature_DelegateWrapper(const FMulticastScriptDelegate& CountupTimerSecondReachedSignature, int32 ReachedWholeSecond, int64 ReachedElapsedTotalMilliseconds);


// ********** End Delegate FCountupTimerSecondReachedSignature *************************************

// ********** Begin Delegate FCountupTimerCheckpointCapturedSignature ******************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h_73_DELEGATE \
TTSWEAPONS_API void FCountupTimerCheckpointCapturedSignature_DelegateWrapper(const FMulticastScriptDelegate& CountupTimerCheckpointCapturedSignature, FTimerCheckpointSnapshot_stt Checkpoint);


// ********** End Delegate FCountupTimerCheckpointCapturedSignature ********************************

// ********** Begin Class AACountupTimerActor ******************************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCaptureCheckpoint); \
	DECLARE_FUNCTION(execGetCurrentCheckpoint); \
	DECLARE_FUNCTION(execGetFormattedElapsedTime); \
	DECLARE_FUNCTION(execHasActiveMaxDuration); \
	DECLARE_FUNCTION(execIsIdle); \
	DECLARE_FUNCTION(execIsStopped); \
	DECLARE_FUNCTION(execIsFinished); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execGetTimerState); \
	DECLARE_FUNCTION(execGetLoggedSecondCount); \
	DECLARE_FUNCTION(execGetLastRegisteredWholeSecond); \
	DECLARE_FUNCTION(execGetElapsedWholeSeconds); \
	DECLARE_FUNCTION(execGetNormalizedProgressToMax); \
	DECLARE_FUNCTION(execGetMaxTotalMilliseconds); \
	DECLARE_FUNCTION(execGetInitialTotalMilliseconds); \
	DECLARE_FUNCTION(execGetElapsedTotalMilliseconds); \
	DECLARE_FUNCTION(execGetMaxDuration); \
	DECLARE_FUNCTION(execGetInitialTime); \
	DECLARE_FUNCTION(execGetElapsedTime); \
	DECLARE_FUNCTION(execClearSecondLog); \
	DECLARE_FUNCTION(execFinishTimer); \
	DECLARE_FUNCTION(execResetTimer); \
	DECLARE_FUNCTION(execStopTimer); \
	DECLARE_FUNCTION(execResumeTimer); \
	DECLARE_FUNCTION(execPauseTimer); \
	DECLARE_FUNCTION(execStartTimer); \
	DECLARE_FUNCTION(execSetMaxDuration); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execSetInitialTime);


TTSWEAPONS_API UClass* Z_Construct_UClass_AACountupTimerActor_NoRegister();

#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAACountupTimerActor(); \
	friend struct Z_Construct_UClass_AACountupTimerActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TTSWEAPONS_API UClass* Z_Construct_UClass_AACountupTimerActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AACountupTimerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TTSWeapons"), Z_Construct_UClass_AACountupTimerActor_NoRegister) \
	DECLARE_SERIALIZER(AACountupTimerActor) \
	virtual UObject* _getUObject() const override { return const_cast<AACountupTimerActor*>(this); }


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h_78_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AACountupTimerActor(AACountupTimerActor&&) = delete; \
	AACountupTimerActor(const AACountupTimerActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AACountupTimerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AACountupTimerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AACountupTimerActor) \
	NO_API virtual ~AACountupTimerActor();


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h_75_PROLOG
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h_78_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AACountupTimerActor;

// ********** End Class AACountupTimerActor ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h

// ********** Begin Enum ECountupTimerState ********************************************************
#define FOREACH_ENUM_ECOUNTUPTIMERSTATE(op) \
	op(ECountupTimerState::Idle) \
	op(ECountupTimerState::Running) \
	op(ECountupTimerState::Paused) \
	op(ECountupTimerState::Stopped) \
	op(ECountupTimerState::Finished) 

enum class ECountupTimerState : uint8;
template<> struct TIsUEnumClass<ECountupTimerState> { enum { Value = true }; };
template<> TTSWEAPONS_API UEnum* StaticEnum<ECountupTimerState>();
// ********** End Enum ECountupTimerState **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
