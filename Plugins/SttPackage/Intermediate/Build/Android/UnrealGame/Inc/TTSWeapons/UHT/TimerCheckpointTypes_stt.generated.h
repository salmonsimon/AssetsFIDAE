// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Timer/TimerCheckpointTypes_stt.h"

#ifdef TTSWEAPONS_TimerCheckpointTypes_stt_generated_h
#error "TimerCheckpointTypes_stt.generated.h already included, missing '#pragma once' in TimerCheckpointTypes_stt.h"
#endif
#define TTSWEAPONS_TimerCheckpointTypes_stt_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTimerCheckpointSnapshot_stt **************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_TimerCheckpointTypes_stt_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics; \
	static class UScriptStruct* StaticStruct();


struct FTimerCheckpointSnapshot_stt;
// ********** End ScriptStruct FTimerCheckpointSnapshot_stt ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_TimerCheckpointTypes_stt_h

// ********** Begin Enum ETimerCheckpointKind_stt **************************************************
#define FOREACH_ENUM_ETIMERCHECKPOINTKIND_STT(op) \
	op(ETimerCheckpointKind_stt::CountdownRemaining) \
	op(ETimerCheckpointKind_stt::CountupElapsed) 

enum class ETimerCheckpointKind_stt : uint8;
template<> struct TIsUEnumClass<ETimerCheckpointKind_stt> { enum { Value = true }; };
template<> TTSWEAPONS_API UEnum* StaticEnum<ETimerCheckpointKind_stt>();
// ********** End Enum ETimerCheckpointKind_stt ****************************************************

// ********** Begin Enum ETimerCheckpointState_stt *************************************************
#define FOREACH_ENUM_ETIMERCHECKPOINTSTATE_STT(op) \
	op(ETimerCheckpointState_stt::Idle) \
	op(ETimerCheckpointState_stt::Running) \
	op(ETimerCheckpointState_stt::Paused) \
	op(ETimerCheckpointState_stt::Stopped) \
	op(ETimerCheckpointState_stt::Finished) 

enum class ETimerCheckpointState_stt : uint8;
template<> struct TIsUEnumClass<ETimerCheckpointState_stt> { enum { Value = true }; };
template<> TTSWEAPONS_API UEnum* StaticEnum<ETimerCheckpointState_stt>();
// ********** End Enum ETimerCheckpointState_stt ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
