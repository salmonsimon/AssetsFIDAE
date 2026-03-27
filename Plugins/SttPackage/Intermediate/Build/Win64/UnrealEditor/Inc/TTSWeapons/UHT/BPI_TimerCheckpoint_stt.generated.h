// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Timer/BPI/BPI_TimerCheckpoint_stt.h"

#ifdef TTSWEAPONS_BPI_TimerCheckpoint_stt_generated_h
#error "BPI_TimerCheckpoint_stt.generated.h already included, missing '#pragma once' in BPI_TimerCheckpoint_stt.h"
#endif
#define TTSWEAPONS_BPI_TimerCheckpoint_stt_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FTimerCheckpointSnapshot_stt;

// ********** Begin Interface UBPI_TimerCheckpoint_stt *********************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_BPI_BPI_TimerCheckpoint_stt_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FTimerCheckpointSnapshot_stt BPI_CaptureTimerCheckpoint_stt_Implementation(const FString& CheckpointTag) { return FTimerCheckpointSnapshot_stt(); }; \
	virtual FTimerCheckpointSnapshot_stt BPI_GetTimerCheckpoint_stt_Implementation() const { return FTimerCheckpointSnapshot_stt(); }; \
	DECLARE_FUNCTION(execBPI_CaptureTimerCheckpoint_stt); \
	DECLARE_FUNCTION(execBPI_GetTimerCheckpoint_stt);


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_BPI_BPI_TimerCheckpoint_stt_h_12_CALLBACK_WRAPPERS
TTSWEAPONS_API UClass* Z_Construct_UClass_UBPI_TimerCheckpoint_stt_NoRegister();

#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_BPI_BPI_TimerCheckpoint_stt_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPI_TimerCheckpoint_stt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBPI_TimerCheckpoint_stt(UBPI_TimerCheckpoint_stt&&) = delete; \
	UBPI_TimerCheckpoint_stt(const UBPI_TimerCheckpoint_stt&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPI_TimerCheckpoint_stt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPI_TimerCheckpoint_stt); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPI_TimerCheckpoint_stt) \
	virtual ~UBPI_TimerCheckpoint_stt() = default;


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_BPI_BPI_TimerCheckpoint_stt_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBPI_TimerCheckpoint_stt(); \
	friend struct Z_Construct_UClass_UBPI_TimerCheckpoint_stt_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TTSWEAPONS_API UClass* Z_Construct_UClass_UBPI_TimerCheckpoint_stt_NoRegister(); \
public: \
	DECLARE_CLASS2(UBPI_TimerCheckpoint_stt, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TTSWeapons"), Z_Construct_UClass_UBPI_TimerCheckpoint_stt_NoRegister) \
	DECLARE_SERIALIZER(UBPI_TimerCheckpoint_stt)


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_BPI_BPI_TimerCheckpoint_stt_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_BPI_BPI_TimerCheckpoint_stt_h_12_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_BPI_BPI_TimerCheckpoint_stt_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_BPI_BPI_TimerCheckpoint_stt_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBPI_TimerCheckpoint_stt() {} \
public: \
	typedef UBPI_TimerCheckpoint_stt UClassType; \
	typedef IBPI_TimerCheckpoint_stt ThisClass; \
	static FTimerCheckpointSnapshot_stt Execute_BPI_CaptureTimerCheckpoint_stt(UObject* O, const FString& CheckpointTag); \
	static FTimerCheckpointSnapshot_stt Execute_BPI_GetTimerCheckpoint_stt(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_BPI_BPI_TimerCheckpoint_stt_h_9_PROLOG
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_BPI_BPI_TimerCheckpoint_stt_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_BPI_BPI_TimerCheckpoint_stt_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_BPI_BPI_TimerCheckpoint_stt_h_12_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_BPI_BPI_TimerCheckpoint_stt_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBPI_TimerCheckpoint_stt;

// ********** End Interface UBPI_TimerCheckpoint_stt ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_BPI_BPI_TimerCheckpoint_stt_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
