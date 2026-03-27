// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Timer/ACountdownTimerActor.h"
#include "Timer/TimerCheckpointTypes_stt.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeACountdownTimerActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
TTSWEAPONS_API UClass* Z_Construct_UClass_AACountdownTimerActor();
TTSWEAPONS_API UClass* Z_Construct_UClass_AACountdownTimerActor_NoRegister();
TTSWEAPONS_API UClass* Z_Construct_UClass_UBPI_TimerCheckpoint_stt_NoRegister();
TTSWEAPONS_API UEnum* Z_Construct_UEnum_TTSWeapons_ECountdownTimerState();
TTSWEAPONS_API UFunction* Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerCheckpointCapturedSignature__DelegateSignature();
TTSWEAPONS_API UFunction* Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerNearEndSignature__DelegateSignature();
TTSWEAPONS_API UFunction* Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerSimpleSignature__DelegateSignature();
TTSWEAPONS_API UFunction* Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature();
TTSWEAPONS_API UScriptStruct* Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt();
UPackage* Z_Construct_UPackage__Script_TTSWeapons();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECountdownTimerState ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECountdownTimerState;
static UEnum* ECountdownTimerState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECountdownTimerState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECountdownTimerState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TTSWeapons_ECountdownTimerState, (UObject*)Z_Construct_UPackage__Script_TTSWeapons(), TEXT("ECountdownTimerState"));
	}
	return Z_Registration_Info_UEnum_ECountdownTimerState.OuterSingleton;
}
template<> TTSWEAPONS_API UEnum* StaticEnum<ECountdownTimerState>()
{
	return ECountdownTimerState_StaticEnum();
}
struct Z_Construct_UEnum_TTSWeapons_ECountdownTimerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Estado de alto nivel del temporizador.\n// Se expone a Blueprint para que widgets y gameplay puedan reaccionar sin\n// depender de comparaciones de bools sueltos.\n" },
		{ "Finished.DisplayName", "Finished" },
		{ "Finished.Name", "ECountdownTimerState::Finished" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "ECountdownTimerState::Idle" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "Paused.DisplayName", "Paused" },
		{ "Paused.Name", "ECountdownTimerState::Paused" },
		{ "Running.DisplayName", "Running" },
		{ "Running.Name", "ECountdownTimerState::Running" },
		{ "Stopped.DisplayName", "Stopped" },
		{ "Stopped.Name", "ECountdownTimerState::Stopped" },
		{ "ToolTip", "Estado de alto nivel del temporizador.\nSe expone a Blueprint para que widgets y gameplay puedan reaccionar sin\ndepender de comparaciones de bools sueltos." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECountdownTimerState::Idle", (int64)ECountdownTimerState::Idle },
		{ "ECountdownTimerState::Running", (int64)ECountdownTimerState::Running },
		{ "ECountdownTimerState::Paused", (int64)ECountdownTimerState::Paused },
		{ "ECountdownTimerState::Stopped", (int64)ECountdownTimerState::Stopped },
		{ "ECountdownTimerState::Finished", (int64)ECountdownTimerState::Finished },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TTSWeapons_ECountdownTimerState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons,
	nullptr,
	"ECountdownTimerState",
	"ECountdownTimerState",
	Z_Construct_UEnum_TTSWeapons_ECountdownTimerState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TTSWeapons_ECountdownTimerState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TTSWeapons_ECountdownTimerState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TTSWeapons_ECountdownTimerState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TTSWeapons_ECountdownTimerState()
{
	if (!Z_Registration_Info_UEnum_ECountdownTimerState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECountdownTimerState.InnerSingleton, Z_Construct_UEnum_TTSWeapons_ECountdownTimerState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECountdownTimerState.InnerSingleton;
}
// ********** End Enum ECountdownTimerState ********************************************************

// ********** Begin Delegate FCountdownTimerSimpleSignature ****************************************
struct Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerSimpleSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Delegate simple para eventos de transicion de estado.\n// Se eligio como multicast dinamico porque:\n// - permite multiples listeners (UMG, audio, game mode, etc.)\n// - es facil de bindear desde Blueprint\n// - mantiene el actor desacoplado de widgets u otros sistemas concretos\n" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Delegate simple para eventos de transicion de estado.\nSe eligio como multicast dinamico porque:\n- permite multiples listeners (UMG, audio, game mode, etc.)\n- es facil de bindear desde Blueprint\n- mantiene el actor desacoplado de widgets u otros sistemas concretos" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerSimpleSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons, nullptr, "CountdownTimerSimpleSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerSimpleSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerSimpleSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerSimpleSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerSimpleSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCountdownTimerSimpleSignature_DelegateWrapper(const FMulticastScriptDelegate& CountdownTimerSimpleSignature)
{
	CountdownTimerSimpleSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FCountdownTimerSimpleSignature ******************************************

// ********** Begin Delegate FCountdownTimerUpdatedSignature ***************************************
struct Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics
{
	struct _Script_TTSWeapons_eventCountdownTimerUpdatedSignature_Parms
	{
		int32 RemainingMinutes;
		int32 RemainingSeconds;
		int32 RemainingMilliseconds;
		int64 RemainingTotalMilliseconds;
		float NormalizedProgress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Delegate de actualizacion.\n// Expone el tiempo ya separado en partes para Blueprint/UMG y tambien el valor\n// total restante para sistemas que prefieren trabajar en milisegundos.\n" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Delegate de actualizacion.\nExpone el tiempo ya separado en partes para Blueprint/UMG y tambien el valor\ntotal restante para sistemas que prefieren trabajar en milisegundos." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingMinutes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingMilliseconds;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_RemainingTotalMilliseconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::NewProp_RemainingMinutes = { "RemainingMinutes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TTSWeapons_eventCountdownTimerUpdatedSignature_Parms, RemainingMinutes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::NewProp_RemainingSeconds = { "RemainingSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TTSWeapons_eventCountdownTimerUpdatedSignature_Parms, RemainingSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::NewProp_RemainingMilliseconds = { "RemainingMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TTSWeapons_eventCountdownTimerUpdatedSignature_Parms, RemainingMilliseconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::NewProp_RemainingTotalMilliseconds = { "RemainingTotalMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TTSWeapons_eventCountdownTimerUpdatedSignature_Parms, RemainingTotalMilliseconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::NewProp_NormalizedProgress = { "NormalizedProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TTSWeapons_eventCountdownTimerUpdatedSignature_Parms, NormalizedProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::NewProp_RemainingMinutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::NewProp_RemainingSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::NewProp_RemainingMilliseconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::NewProp_RemainingTotalMilliseconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::NewProp_NormalizedProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons, nullptr, "CountdownTimerUpdatedSignature__DelegateSignature", Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::_Script_TTSWeapons_eventCountdownTimerUpdatedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::_Script_TTSWeapons_eventCountdownTimerUpdatedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCountdownTimerUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& CountdownTimerUpdatedSignature, int32 RemainingMinutes, int32 RemainingSeconds, int32 RemainingMilliseconds, int64 RemainingTotalMilliseconds, float NormalizedProgress)
{
	struct _Script_TTSWeapons_eventCountdownTimerUpdatedSignature_Parms
	{
		int32 RemainingMinutes;
		int32 RemainingSeconds;
		int32 RemainingMilliseconds;
		int64 RemainingTotalMilliseconds;
		float NormalizedProgress;
	};
	_Script_TTSWeapons_eventCountdownTimerUpdatedSignature_Parms Parms;
	Parms.RemainingMinutes=RemainingMinutes;
	Parms.RemainingSeconds=RemainingSeconds;
	Parms.RemainingMilliseconds=RemainingMilliseconds;
	Parms.RemainingTotalMilliseconds=RemainingTotalMilliseconds;
	Parms.NormalizedProgress=NormalizedProgress;
	CountdownTimerUpdatedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FCountdownTimerUpdatedSignature *****************************************

// ********** Begin Delegate FCountdownTimerNearEndSignature ***************************************
struct Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerNearEndSignature__DelegateSignature_Statics
{
	struct _Script_TTSWeapons_eventCountdownTimerNearEndSignature_Parms
	{
		int64 RemainingTotalMilliseconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Delegate para advertencia de fin cercano.\n// Se dispara una sola vez por corrida cuando el tiempo restante entra en el\n// umbral configurado.\n" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Delegate para advertencia de fin cercano.\nSe dispara una sola vez por corrida cuando el tiempo restante entra en el\numbral configurado." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_RemainingTotalMilliseconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerNearEndSignature__DelegateSignature_Statics::NewProp_RemainingTotalMilliseconds = { "RemainingTotalMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TTSWeapons_eventCountdownTimerNearEndSignature_Parms, RemainingTotalMilliseconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerNearEndSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerNearEndSignature__DelegateSignature_Statics::NewProp_RemainingTotalMilliseconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerNearEndSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerNearEndSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons, nullptr, "CountdownTimerNearEndSignature__DelegateSignature", Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerNearEndSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerNearEndSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerNearEndSignature__DelegateSignature_Statics::_Script_TTSWeapons_eventCountdownTimerNearEndSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerNearEndSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerNearEndSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerNearEndSignature__DelegateSignature_Statics::_Script_TTSWeapons_eventCountdownTimerNearEndSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerNearEndSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerNearEndSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCountdownTimerNearEndSignature_DelegateWrapper(const FMulticastScriptDelegate& CountdownTimerNearEndSignature, int64 RemainingTotalMilliseconds)
{
	struct _Script_TTSWeapons_eventCountdownTimerNearEndSignature_Parms
	{
		int64 RemainingTotalMilliseconds;
	};
	_Script_TTSWeapons_eventCountdownTimerNearEndSignature_Parms Parms;
	Parms.RemainingTotalMilliseconds=RemainingTotalMilliseconds;
	CountdownTimerNearEndSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FCountdownTimerNearEndSignature *****************************************

// ********** Begin Delegate FCountdownTimerCheckpointCapturedSignature ****************************
struct Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerCheckpointCapturedSignature__DelegateSignature_Statics
{
	struct _Script_TTSWeapons_eventCountdownTimerCheckpointCapturedSignature_Parms
	{
		FTimerCheckpointSnapshot_stt Checkpoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Delegate para publicar checkpoints de tiempo capturados a pedido.\n// Se usa para registrar eventos de gameplay sin necesidad de polling.\n" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Delegate para publicar checkpoints de tiempo capturados a pedido.\nSe usa para registrar eventos de gameplay sin necesidad de polling." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Checkpoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerCheckpointCapturedSignature__DelegateSignature_Statics::NewProp_Checkpoint = { "Checkpoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TTSWeapons_eventCountdownTimerCheckpointCapturedSignature_Parms, Checkpoint), Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt, METADATA_PARAMS(0, nullptr) }; // 1439956601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerCheckpointCapturedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerCheckpointCapturedSignature__DelegateSignature_Statics::NewProp_Checkpoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerCheckpointCapturedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerCheckpointCapturedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons, nullptr, "CountdownTimerCheckpointCapturedSignature__DelegateSignature", Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerCheckpointCapturedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerCheckpointCapturedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerCheckpointCapturedSignature__DelegateSignature_Statics::_Script_TTSWeapons_eventCountdownTimerCheckpointCapturedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerCheckpointCapturedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerCheckpointCapturedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerCheckpointCapturedSignature__DelegateSignature_Statics::_Script_TTSWeapons_eventCountdownTimerCheckpointCapturedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerCheckpointCapturedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerCheckpointCapturedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCountdownTimerCheckpointCapturedSignature_DelegateWrapper(const FMulticastScriptDelegate& CountdownTimerCheckpointCapturedSignature, FTimerCheckpointSnapshot_stt Checkpoint)
{
	struct _Script_TTSWeapons_eventCountdownTimerCheckpointCapturedSignature_Parms
	{
		FTimerCheckpointSnapshot_stt Checkpoint;
	};
	_Script_TTSWeapons_eventCountdownTimerCheckpointCapturedSignature_Parms Parms;
	Parms.Checkpoint=Checkpoint;
	CountdownTimerCheckpointCapturedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FCountdownTimerCheckpointCapturedSignature ******************************

// ********** Begin Class AACountdownTimerActor Function AddTime ***********************************
struct Z_Construct_UFunction_AACountdownTimerActor_AddTime_Statics
{
	struct ACountdownTimerActor_eventAddTime_Parms
	{
		int32 InMinutes;
		int32 InSeconds;
		int32 InMilliseconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Control" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Add Time: sumar tiempo al countdown actual." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMinutes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMilliseconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountdownTimerActor_AddTime_Statics::NewProp_InMinutes = { "InMinutes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventAddTime_Parms, InMinutes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountdownTimerActor_AddTime_Statics::NewProp_InSeconds = { "InSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventAddTime_Parms, InSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountdownTimerActor_AddTime_Statics::NewProp_InMilliseconds = { "InMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventAddTime_Parms, InMilliseconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountdownTimerActor_AddTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_AddTime_Statics::NewProp_InMinutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_AddTime_Statics::NewProp_InSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_AddTime_Statics::NewProp_InMilliseconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_AddTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_AddTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "AddTime", Z_Construct_UFunction_AACountdownTimerActor_AddTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_AddTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountdownTimerActor_AddTime_Statics::ACountdownTimerActor_eventAddTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_AddTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_AddTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountdownTimerActor_AddTime_Statics::ACountdownTimerActor_eventAddTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountdownTimerActor_AddTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_AddTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execAddTime)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InMinutes);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSeconds);
	P_GET_PROPERTY(FIntProperty,Z_Param_InMilliseconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTime(Z_Param_InMinutes,Z_Param_InSeconds,Z_Param_InMilliseconds);
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function AddTime *************************************

// ********** Begin Class AACountdownTimerActor Function CaptureCheckpoint *************************
struct Z_Construct_UFunction_AACountdownTimerActor_CaptureCheckpoint_Statics
{
	struct ACountdownTimerActor_eventCaptureCheckpoint_Parms
	{
		FString CheckpointTag;
		FTimerCheckpointSnapshot_stt ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Checkpoint" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Capture Checkpoint: capturar y publicar un checkpoint del countdown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CheckpointTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AACountdownTimerActor_CaptureCheckpoint_Statics::NewProp_CheckpointTag = { "CheckpointTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventCaptureCheckpoint_Parms, CheckpointTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointTag_MetaData), NewProp_CheckpointTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACountdownTimerActor_CaptureCheckpoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventCaptureCheckpoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt, METADATA_PARAMS(0, nullptr) }; // 1439956601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountdownTimerActor_CaptureCheckpoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_CaptureCheckpoint_Statics::NewProp_CheckpointTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_CaptureCheckpoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_CaptureCheckpoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_CaptureCheckpoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "CaptureCheckpoint", Z_Construct_UFunction_AACountdownTimerActor_CaptureCheckpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_CaptureCheckpoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountdownTimerActor_CaptureCheckpoint_Statics::ACountdownTimerActor_eventCaptureCheckpoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_CaptureCheckpoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_CaptureCheckpoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountdownTimerActor_CaptureCheckpoint_Statics::ACountdownTimerActor_eventCaptureCheckpoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountdownTimerActor_CaptureCheckpoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_CaptureCheckpoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execCaptureCheckpoint)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CheckpointTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimerCheckpointSnapshot_stt*)Z_Param__Result=P_THIS->CaptureCheckpoint(Z_Param_CheckpointTag);
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function CaptureCheckpoint ***************************

// ********** Begin Class AACountdownTimerActor Function FinishTimer *******************************
struct Z_Construct_UFunction_AACountdownTimerActor_FinishTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Control" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Finish Timer: finalizar inmediatamente el countdown." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_FinishTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "FinishTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_FinishTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_FinishTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AACountdownTimerActor_FinishTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_FinishTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execFinishTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishTimer();
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function FinishTimer *********************************

// ********** Begin Class AACountdownTimerActor Function GetCurrentCheckpoint **********************
struct Z_Construct_UFunction_AACountdownTimerActor_GetCurrentCheckpoint_Statics
{
	struct ACountdownTimerActor_eventGetCurrentCheckpoint_Parms
	{
		FTimerCheckpointSnapshot_stt ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Checkpoint" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Get Current Checkpoint: obtener un snapshot actual del countdown." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACountdownTimerActor_GetCurrentCheckpoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventGetCurrentCheckpoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt, METADATA_PARAMS(0, nullptr) }; // 1439956601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountdownTimerActor_GetCurrentCheckpoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_GetCurrentCheckpoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetCurrentCheckpoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_GetCurrentCheckpoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "GetCurrentCheckpoint", Z_Construct_UFunction_AACountdownTimerActor_GetCurrentCheckpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetCurrentCheckpoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountdownTimerActor_GetCurrentCheckpoint_Statics::ACountdownTimerActor_eventGetCurrentCheckpoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetCurrentCheckpoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_GetCurrentCheckpoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountdownTimerActor_GetCurrentCheckpoint_Statics::ACountdownTimerActor_eventGetCurrentCheckpoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountdownTimerActor_GetCurrentCheckpoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_GetCurrentCheckpoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execGetCurrentCheckpoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimerCheckpointSnapshot_stt*)Z_Param__Result=P_THIS->GetCurrentCheckpoint();
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function GetCurrentCheckpoint ************************

// ********** Begin Class AACountdownTimerActor Function GetFormattedRemainingTime *****************
struct Z_Construct_UFunction_AACountdownTimerActor_GetFormattedRemainingTime_Statics
{
	struct ACountdownTimerActor_eventGetFormattedRemainingTime_Parms
	{
		bool bIncludeMilliseconds;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Get Formatted Remaining Time: obtener el restante del countdown como texto." },
	};
#endif // WITH_METADATA
	static void NewProp_bIncludeMilliseconds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeMilliseconds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AACountdownTimerActor_GetFormattedRemainingTime_Statics::NewProp_bIncludeMilliseconds_SetBit(void* Obj)
{
	((ACountdownTimerActor_eventGetFormattedRemainingTime_Parms*)Obj)->bIncludeMilliseconds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACountdownTimerActor_GetFormattedRemainingTime_Statics::NewProp_bIncludeMilliseconds = { "bIncludeMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACountdownTimerActor_eventGetFormattedRemainingTime_Parms), &Z_Construct_UFunction_AACountdownTimerActor_GetFormattedRemainingTime_Statics::NewProp_bIncludeMilliseconds_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AACountdownTimerActor_GetFormattedRemainingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventGetFormattedRemainingTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountdownTimerActor_GetFormattedRemainingTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_GetFormattedRemainingTime_Statics::NewProp_bIncludeMilliseconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_GetFormattedRemainingTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetFormattedRemainingTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_GetFormattedRemainingTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "GetFormattedRemainingTime", Z_Construct_UFunction_AACountdownTimerActor_GetFormattedRemainingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetFormattedRemainingTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountdownTimerActor_GetFormattedRemainingTime_Statics::ACountdownTimerActor_eventGetFormattedRemainingTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetFormattedRemainingTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_GetFormattedRemainingTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountdownTimerActor_GetFormattedRemainingTime_Statics::ACountdownTimerActor_eventGetFormattedRemainingTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountdownTimerActor_GetFormattedRemainingTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_GetFormattedRemainingTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execGetFormattedRemainingTime)
{
	P_GET_UBOOL(Z_Param_bIncludeMilliseconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetFormattedRemainingTime(Z_Param_bIncludeMilliseconds);
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function GetFormattedRemainingTime *******************

// ********** Begin Class AACountdownTimerActor Function GetInitialTime ****************************
struct Z_Construct_UFunction_AACountdownTimerActor_GetInitialTime_Statics
{
	struct ACountdownTimerActor_eventGetInitialTime_Parms
	{
		int32 OutMinutes;
		int32 OutSeconds;
		int32 OutMilliseconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Get Initial Time: obtener el tiempo inicial configurado." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutMinutes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutMilliseconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountdownTimerActor_GetInitialTime_Statics::NewProp_OutMinutes = { "OutMinutes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventGetInitialTime_Parms, OutMinutes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountdownTimerActor_GetInitialTime_Statics::NewProp_OutSeconds = { "OutSeconds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventGetInitialTime_Parms, OutSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountdownTimerActor_GetInitialTime_Statics::NewProp_OutMilliseconds = { "OutMilliseconds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventGetInitialTime_Parms, OutMilliseconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountdownTimerActor_GetInitialTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_GetInitialTime_Statics::NewProp_OutMinutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_GetInitialTime_Statics::NewProp_OutSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_GetInitialTime_Statics::NewProp_OutMilliseconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetInitialTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_GetInitialTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "GetInitialTime", Z_Construct_UFunction_AACountdownTimerActor_GetInitialTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetInitialTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountdownTimerActor_GetInitialTime_Statics::ACountdownTimerActor_eventGetInitialTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetInitialTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_GetInitialTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountdownTimerActor_GetInitialTime_Statics::ACountdownTimerActor_eventGetInitialTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountdownTimerActor_GetInitialTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_GetInitialTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execGetInitialTime)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMinutes);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutSeconds);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMilliseconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetInitialTime(Z_Param_Out_OutMinutes,Z_Param_Out_OutSeconds,Z_Param_Out_OutMilliseconds);
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function GetInitialTime ******************************

// ********** Begin Class AACountdownTimerActor Function GetInitialTotalMilliseconds ***************
struct Z_Construct_UFunction_AACountdownTimerActor_GetInitialTotalMilliseconds_Statics
{
	struct ACountdownTimerActor_eventGetInitialTotalMilliseconds_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Get Initial Total Milliseconds: obtener el tiempo inicial total." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_AACountdownTimerActor_GetInitialTotalMilliseconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventGetInitialTotalMilliseconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountdownTimerActor_GetInitialTotalMilliseconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_GetInitialTotalMilliseconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetInitialTotalMilliseconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_GetInitialTotalMilliseconds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "GetInitialTotalMilliseconds", Z_Construct_UFunction_AACountdownTimerActor_GetInitialTotalMilliseconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetInitialTotalMilliseconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountdownTimerActor_GetInitialTotalMilliseconds_Statics::ACountdownTimerActor_eventGetInitialTotalMilliseconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetInitialTotalMilliseconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_GetInitialTotalMilliseconds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountdownTimerActor_GetInitialTotalMilliseconds_Statics::ACountdownTimerActor_eventGetInitialTotalMilliseconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountdownTimerActor_GetInitialTotalMilliseconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_GetInitialTotalMilliseconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execGetInitialTotalMilliseconds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->GetInitialTotalMilliseconds();
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function GetInitialTotalMilliseconds *****************

// ********** Begin Class AACountdownTimerActor Function GetNormalizedProgress *********************
struct Z_Construct_UFunction_AACountdownTimerActor_GetNormalizedProgress_Statics
{
	struct ACountdownTimerActor_eventGetNormalizedProgress_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Get Normalized Progress: obtener progreso normalizado del countdown." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACountdownTimerActor_GetNormalizedProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventGetNormalizedProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountdownTimerActor_GetNormalizedProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_GetNormalizedProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetNormalizedProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_GetNormalizedProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "GetNormalizedProgress", Z_Construct_UFunction_AACountdownTimerActor_GetNormalizedProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetNormalizedProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountdownTimerActor_GetNormalizedProgress_Statics::ACountdownTimerActor_eventGetNormalizedProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetNormalizedProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_GetNormalizedProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountdownTimerActor_GetNormalizedProgress_Statics::ACountdownTimerActor_eventGetNormalizedProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountdownTimerActor_GetNormalizedProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_GetNormalizedProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execGetNormalizedProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNormalizedProgress();
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function GetNormalizedProgress ***********************

// ********** Begin Class AACountdownTimerActor Function GetRemainingTime **************************
struct Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTime_Statics
{
	struct ACountdownTimerActor_eventGetRemainingTime_Parms
	{
		int32 OutMinutes;
		int32 OutSeconds;
		int32 OutMilliseconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Get Remaining Time: obtener el tiempo restante separado en partes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutMinutes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutMilliseconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTime_Statics::NewProp_OutMinutes = { "OutMinutes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventGetRemainingTime_Parms, OutMinutes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTime_Statics::NewProp_OutSeconds = { "OutSeconds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventGetRemainingTime_Parms, OutSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTime_Statics::NewProp_OutMilliseconds = { "OutMilliseconds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventGetRemainingTime_Parms, OutMilliseconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTime_Statics::NewProp_OutMinutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTime_Statics::NewProp_OutSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTime_Statics::NewProp_OutMilliseconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "GetRemainingTime", Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTime_Statics::ACountdownTimerActor_eventGetRemainingTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTime_Statics::ACountdownTimerActor_eventGetRemainingTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execGetRemainingTime)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMinutes);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutSeconds);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMilliseconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRemainingTime(Z_Param_Out_OutMinutes,Z_Param_Out_OutSeconds,Z_Param_Out_OutMilliseconds);
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function GetRemainingTime ****************************

// ********** Begin Class AACountdownTimerActor Function GetRemainingTotalMilliseconds *************
struct Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTotalMilliseconds_Statics
{
	struct ACountdownTimerActor_eventGetRemainingTotalMilliseconds_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Get Remaining Total Milliseconds: obtener el tiempo restante total." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTotalMilliseconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventGetRemainingTotalMilliseconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTotalMilliseconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTotalMilliseconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTotalMilliseconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTotalMilliseconds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "GetRemainingTotalMilliseconds", Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTotalMilliseconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTotalMilliseconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTotalMilliseconds_Statics::ACountdownTimerActor_eventGetRemainingTotalMilliseconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTotalMilliseconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTotalMilliseconds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTotalMilliseconds_Statics::ACountdownTimerActor_eventGetRemainingTotalMilliseconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTotalMilliseconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTotalMilliseconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execGetRemainingTotalMilliseconds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->GetRemainingTotalMilliseconds();
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function GetRemainingTotalMilliseconds ***************

// ********** Begin Class AACountdownTimerActor Function GetTimerState *****************************
struct Z_Construct_UFunction_AACountdownTimerActor_GetTimerState_Statics
{
	struct ACountdownTimerActor_eventGetTimerState_Parms
	{
		ECountdownTimerState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Get Timer State: obtener el estado actual del countdown." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACountdownTimerActor_GetTimerState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACountdownTimerActor_GetTimerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventGetTimerState_Parms, ReturnValue), Z_Construct_UEnum_TTSWeapons_ECountdownTimerState, METADATA_PARAMS(0, nullptr) }; // 2415132823
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountdownTimerActor_GetTimerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_GetTimerState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_GetTimerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetTimerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_GetTimerState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "GetTimerState", Z_Construct_UFunction_AACountdownTimerActor_GetTimerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetTimerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountdownTimerActor_GetTimerState_Statics::ACountdownTimerActor_eventGetTimerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_GetTimerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_GetTimerState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountdownTimerActor_GetTimerState_Statics::ACountdownTimerActor_eventGetTimerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountdownTimerActor_GetTimerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_GetTimerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execGetTimerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECountdownTimerState*)Z_Param__Result=P_THIS->GetTimerState();
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function GetTimerState *******************************

// ********** Begin Class AACountdownTimerActor Function IsFinished ********************************
struct Z_Construct_UFunction_AACountdownTimerActor_IsFinished_Statics
{
	struct ACountdownTimerActor_eventIsFinished_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Is Finished: consultar si el countdown termino." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AACountdownTimerActor_IsFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ACountdownTimerActor_eventIsFinished_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACountdownTimerActor_IsFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACountdownTimerActor_eventIsFinished_Parms), &Z_Construct_UFunction_AACountdownTimerActor_IsFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountdownTimerActor_IsFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_IsFinished_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_IsFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_IsFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "IsFinished", Z_Construct_UFunction_AACountdownTimerActor_IsFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_IsFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountdownTimerActor_IsFinished_Statics::ACountdownTimerActor_eventIsFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_IsFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_IsFinished_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountdownTimerActor_IsFinished_Statics::ACountdownTimerActor_eventIsFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountdownTimerActor_IsFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_IsFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execIsFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFinished();
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function IsFinished **********************************

// ********** Begin Class AACountdownTimerActor Function IsIdle ************************************
struct Z_Construct_UFunction_AACountdownTimerActor_IsIdle_Statics
{
	struct ACountdownTimerActor_eventIsIdle_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Is Idle: consultar si el countdown esta listo sin correr." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AACountdownTimerActor_IsIdle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ACountdownTimerActor_eventIsIdle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACountdownTimerActor_IsIdle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACountdownTimerActor_eventIsIdle_Parms), &Z_Construct_UFunction_AACountdownTimerActor_IsIdle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountdownTimerActor_IsIdle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_IsIdle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_IsIdle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_IsIdle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "IsIdle", Z_Construct_UFunction_AACountdownTimerActor_IsIdle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_IsIdle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountdownTimerActor_IsIdle_Statics::ACountdownTimerActor_eventIsIdle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_IsIdle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_IsIdle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountdownTimerActor_IsIdle_Statics::ACountdownTimerActor_eventIsIdle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountdownTimerActor_IsIdle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_IsIdle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execIsIdle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsIdle();
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function IsIdle **************************************

// ********** Begin Class AACountdownTimerActor Function IsPaused **********************************
struct Z_Construct_UFunction_AACountdownTimerActor_IsPaused_Statics
{
	struct ACountdownTimerActor_eventIsPaused_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Is Paused: consultar si el countdown esta en pausa." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AACountdownTimerActor_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ACountdownTimerActor_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACountdownTimerActor_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACountdownTimerActor_eventIsPaused_Parms), &Z_Construct_UFunction_AACountdownTimerActor_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountdownTimerActor_IsPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_IsPaused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_IsPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_IsPaused_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "IsPaused", Z_Construct_UFunction_AACountdownTimerActor_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_IsPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountdownTimerActor_IsPaused_Statics::ACountdownTimerActor_eventIsPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_IsPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_IsPaused_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountdownTimerActor_IsPaused_Statics::ACountdownTimerActor_eventIsPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountdownTimerActor_IsPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_IsPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execIsPaused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPaused();
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function IsPaused ************************************

// ********** Begin Class AACountdownTimerActor Function IsRunning *********************************
struct Z_Construct_UFunction_AACountdownTimerActor_IsRunning_Statics
{
	struct ACountdownTimerActor_eventIsRunning_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Is Running: consultar si el countdown esta corriendo." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AACountdownTimerActor_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ACountdownTimerActor_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACountdownTimerActor_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACountdownTimerActor_eventIsRunning_Parms), &Z_Construct_UFunction_AACountdownTimerActor_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountdownTimerActor_IsRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_IsRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_IsRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_IsRunning_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "IsRunning", Z_Construct_UFunction_AACountdownTimerActor_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_IsRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountdownTimerActor_IsRunning_Statics::ACountdownTimerActor_eventIsRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_IsRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_IsRunning_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountdownTimerActor_IsRunning_Statics::ACountdownTimerActor_eventIsRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountdownTimerActor_IsRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_IsRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execIsRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRunning();
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function IsRunning ***********************************

// ********** Begin Class AACountdownTimerActor Function IsStopped *********************************
struct Z_Construct_UFunction_AACountdownTimerActor_IsStopped_Statics
{
	struct ACountdownTimerActor_eventIsStopped_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Is Stopped: consultar si el countdown fue detenido." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AACountdownTimerActor_IsStopped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ACountdownTimerActor_eventIsStopped_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACountdownTimerActor_IsStopped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACountdownTimerActor_eventIsStopped_Parms), &Z_Construct_UFunction_AACountdownTimerActor_IsStopped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountdownTimerActor_IsStopped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_IsStopped_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_IsStopped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_IsStopped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "IsStopped", Z_Construct_UFunction_AACountdownTimerActor_IsStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_IsStopped_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountdownTimerActor_IsStopped_Statics::ACountdownTimerActor_eventIsStopped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_IsStopped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_IsStopped_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountdownTimerActor_IsStopped_Statics::ACountdownTimerActor_eventIsStopped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountdownTimerActor_IsStopped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_IsStopped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execIsStopped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStopped();
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function IsStopped ***********************************

// ********** Begin Class AACountdownTimerActor Function PauseTimer ********************************
struct Z_Construct_UFunction_AACountdownTimerActor_PauseTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Control" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Pause Timer: pausar la corrida actual del countdown." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_PauseTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "PauseTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_PauseTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_PauseTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AACountdownTimerActor_PauseTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_PauseTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execPauseTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseTimer();
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function PauseTimer **********************************

// ********** Begin Class AACountdownTimerActor Function ResetTimer ********************************
struct Z_Construct_UFunction_AACountdownTimerActor_ResetTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Control" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Reset Timer: restaurar el countdown y dejarlo listo sin correr." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_ResetTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "ResetTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_ResetTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_ResetTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AACountdownTimerActor_ResetTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_ResetTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execResetTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetTimer();
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function ResetTimer **********************************

// ********** Begin Class AACountdownTimerActor Function ResumeTimer *******************************
struct Z_Construct_UFunction_AACountdownTimerActor_ResumeTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Control" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Resume Timer: reanudar un countdown pausado." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_ResumeTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "ResumeTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_ResumeTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_ResumeTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AACountdownTimerActor_ResumeTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_ResumeTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execResumeTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumeTimer();
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function ResumeTimer *********************************

// ********** Begin Class AACountdownTimerActor Function SetTime ***********************************
struct Z_Construct_UFunction_AACountdownTimerActor_SetTime_Statics
{
	struct ACountdownTimerActor_eventSetTime_Parms
	{
		int32 InMinutes;
		int32 InSeconds;
		int32 InMilliseconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Control" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Set Time: configurar el tiempo inicial del countdown." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMinutes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMilliseconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountdownTimerActor_SetTime_Statics::NewProp_InMinutes = { "InMinutes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventSetTime_Parms, InMinutes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountdownTimerActor_SetTime_Statics::NewProp_InSeconds = { "InSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventSetTime_Parms, InSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountdownTimerActor_SetTime_Statics::NewProp_InMilliseconds = { "InMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventSetTime_Parms, InMilliseconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountdownTimerActor_SetTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_SetTime_Statics::NewProp_InMinutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_SetTime_Statics::NewProp_InSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_SetTime_Statics::NewProp_InMilliseconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_SetTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_SetTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "SetTime", Z_Construct_UFunction_AACountdownTimerActor_SetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_SetTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountdownTimerActor_SetTime_Statics::ACountdownTimerActor_eventSetTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_SetTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_SetTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountdownTimerActor_SetTime_Statics::ACountdownTimerActor_eventSetTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountdownTimerActor_SetTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_SetTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execSetTime)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InMinutes);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSeconds);
	P_GET_PROPERTY(FIntProperty,Z_Param_InMilliseconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTime(Z_Param_InMinutes,Z_Param_InSeconds,Z_Param_InMilliseconds);
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function SetTime *************************************

// ********** Begin Class AACountdownTimerActor Function StartTimer ********************************
struct Z_Construct_UFunction_AACountdownTimerActor_StartTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Control" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Start Timer: iniciar una corrida nueva del countdown." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_StartTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "StartTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_StartTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_StartTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AACountdownTimerActor_StartTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_StartTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execStartTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartTimer();
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function StartTimer **********************************

// ********** Begin Class AACountdownTimerActor Function StopTimer *********************************
struct Z_Construct_UFunction_AACountdownTimerActor_StopTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Control" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Stop Timer: detener y restaurar el countdown al tiempo inicial." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_StopTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "StopTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_StopTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_StopTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AACountdownTimerActor_StopTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_StopTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execStopTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopTimer();
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function StopTimer ***********************************

// ********** Begin Class AACountdownTimerActor Function SubtractTime ******************************
struct Z_Construct_UFunction_AACountdownTimerActor_SubtractTime_Statics
{
	struct ACountdownTimerActor_eventSubtractTime_Parms
	{
		int32 InMinutes;
		int32 InSeconds;
		int32 InMilliseconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountdownTimer|Control" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Subtract Time: restar tiempo al countdown actual." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMinutes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMilliseconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountdownTimerActor_SubtractTime_Statics::NewProp_InMinutes = { "InMinutes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventSubtractTime_Parms, InMinutes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountdownTimerActor_SubtractTime_Statics::NewProp_InSeconds = { "InSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventSubtractTime_Parms, InSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountdownTimerActor_SubtractTime_Statics::NewProp_InMilliseconds = { "InMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountdownTimerActor_eventSubtractTime_Parms, InMilliseconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountdownTimerActor_SubtractTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_SubtractTime_Statics::NewProp_InMinutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_SubtractTime_Statics::NewProp_InSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountdownTimerActor_SubtractTime_Statics::NewProp_InMilliseconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_SubtractTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountdownTimerActor_SubtractTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountdownTimerActor, nullptr, "SubtractTime", Z_Construct_UFunction_AACountdownTimerActor_SubtractTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_SubtractTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountdownTimerActor_SubtractTime_Statics::ACountdownTimerActor_eventSubtractTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountdownTimerActor_SubtractTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountdownTimerActor_SubtractTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountdownTimerActor_SubtractTime_Statics::ACountdownTimerActor_eventSubtractTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountdownTimerActor_SubtractTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountdownTimerActor_SubtractTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountdownTimerActor::execSubtractTime)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InMinutes);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSeconds);
	P_GET_PROPERTY(FIntProperty,Z_Param_InMilliseconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SubtractTime(Z_Param_InMinutes,Z_Param_InSeconds,Z_Param_InMilliseconds);
	P_NATIVE_END;
}
// ********** End Class AACountdownTimerActor Function SubtractTime ********************************

// ********** Begin Class AACountdownTimerActor ****************************************************
void AACountdownTimerActor::StaticRegisterNativesAACountdownTimerActor()
{
	UClass* Class = AACountdownTimerActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTime", &AACountdownTimerActor::execAddTime },
		{ "CaptureCheckpoint", &AACountdownTimerActor::execCaptureCheckpoint },
		{ "FinishTimer", &AACountdownTimerActor::execFinishTimer },
		{ "GetCurrentCheckpoint", &AACountdownTimerActor::execGetCurrentCheckpoint },
		{ "GetFormattedRemainingTime", &AACountdownTimerActor::execGetFormattedRemainingTime },
		{ "GetInitialTime", &AACountdownTimerActor::execGetInitialTime },
		{ "GetInitialTotalMilliseconds", &AACountdownTimerActor::execGetInitialTotalMilliseconds },
		{ "GetNormalizedProgress", &AACountdownTimerActor::execGetNormalizedProgress },
		{ "GetRemainingTime", &AACountdownTimerActor::execGetRemainingTime },
		{ "GetRemainingTotalMilliseconds", &AACountdownTimerActor::execGetRemainingTotalMilliseconds },
		{ "GetTimerState", &AACountdownTimerActor::execGetTimerState },
		{ "IsFinished", &AACountdownTimerActor::execIsFinished },
		{ "IsIdle", &AACountdownTimerActor::execIsIdle },
		{ "IsPaused", &AACountdownTimerActor::execIsPaused },
		{ "IsRunning", &AACountdownTimerActor::execIsRunning },
		{ "IsStopped", &AACountdownTimerActor::execIsStopped },
		{ "PauseTimer", &AACountdownTimerActor::execPauseTimer },
		{ "ResetTimer", &AACountdownTimerActor::execResetTimer },
		{ "ResumeTimer", &AACountdownTimerActor::execResumeTimer },
		{ "SetTime", &AACountdownTimerActor::execSetTime },
		{ "StartTimer", &AACountdownTimerActor::execStartTimer },
		{ "StopTimer", &AACountdownTimerActor::execStopTimer },
		{ "SubtractTime", &AACountdownTimerActor::execSubtractTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AACountdownTimerActor;
UClass* AACountdownTimerActor::GetPrivateStaticClass()
{
	using TClass = AACountdownTimerActor;
	if (!Z_Registration_Info_UClass_AACountdownTimerActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ACountdownTimerActor"),
			Z_Registration_Info_UClass_AACountdownTimerActor.InnerSingleton,
			StaticRegisterNativesAACountdownTimerActor,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AACountdownTimerActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AACountdownTimerActor_NoRegister()
{
	return AACountdownTimerActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AACountdownTimerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Timer/ACountdownTimerActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialMinutes_MetaData[] = {
		{ "Category", "CountdownTimer|Config" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Initial Minutes: minutos iniciales del countdown." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialSeconds_MetaData[] = {
		{ "Category", "CountdownTimer|Config" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Initial Seconds: segundos iniciales del countdown." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialMilliseconds_MetaData[] = {
		{ "Category", "CountdownTimer|Config" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Initial Milliseconds: milisegundos iniciales del countdown." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStart_MetaData[] = {
		{ "Category", "CountdownTimer|Config" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Auto Start: iniciar el countdown automaticamente al comenzar." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
		{ "Category", "CountdownTimer|Config" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Loop: repetir automaticamente el countdown al terminar." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateIntervalSeconds_MetaData[] = {
		{ "Category", "CountdownTimer|Config" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.005" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Update Interval Seconds: frecuencia de actualizacion del countdown." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.005" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NearEndThresholdMs_MetaData[] = {
		{ "Category", "CountdownTimer|Config" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Near End Threshold Ms: umbral para avisar fin cercano del countdown." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialTotalMilliseconds_MetaData[] = {
		{ "Category", "CountdownTimer|Runtime" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Initial Total Milliseconds: tiempo inicial total del countdown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingTotalMilliseconds_MetaData[] = {
		{ "Category", "CountdownTimer|Runtime" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Remaining Total Milliseconds: tiempo restante actual del countdown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerState_MetaData[] = {
		{ "Category", "CountdownTimer|Runtime" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "Timer State: estado actual del countdown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimerStarted_MetaData[] = {
		{ "Category", "CountdownTimer|Events" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "On Timer Started: evento cuando inicia una corrida del countdown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimerPaused_MetaData[] = {
		{ "Category", "CountdownTimer|Events" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "On Timer Paused: evento cuando el countdown queda en pausa." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimerResumed_MetaData[] = {
		{ "Category", "CountdownTimer|Events" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "On Timer Resumed: evento cuando el countdown se reanuda." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimerStopped_MetaData[] = {
		{ "Category", "CountdownTimer|Events" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "On Timer Stopped: evento cuando se detiene el countdown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimerUpdated_MetaData[] = {
		{ "Category", "CountdownTimer|Events" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "On Timer Updated: evento de actualizacion del countdown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimerNearEnd_MetaData[] = {
		{ "Category", "CountdownTimer|Events" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "On Timer Near End: evento de advertencia de fin cercano." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimerFinished_MetaData[] = {
		{ "Category", "CountdownTimer|Events" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "On Timer Finished: evento cuando finaliza el countdown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCheckpointCaptured_MetaData[] = {
		{ "Category", "CountdownTimer|Events" },
		{ "ModuleRelativePath", "Public/Timer/ACountdownTimerActor.h" },
		{ "ToolTip", "On Checkpoint Captured: evento al capturar un checkpoint del countdown." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialMinutes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialMilliseconds;
	static void NewProp_bAutoStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStart;
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateIntervalSeconds;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_NearEndThresholdMs;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InitialTotalMilliseconds;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_RemainingTotalMilliseconds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimerState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimerState;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerPaused;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerResumed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerStopped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerNearEnd;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCheckpointCaptured;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AACountdownTimerActor_AddTime, "AddTime" }, // 562049314
		{ &Z_Construct_UFunction_AACountdownTimerActor_CaptureCheckpoint, "CaptureCheckpoint" }, // 3523715012
		{ &Z_Construct_UFunction_AACountdownTimerActor_FinishTimer, "FinishTimer" }, // 3562936327
		{ &Z_Construct_UFunction_AACountdownTimerActor_GetCurrentCheckpoint, "GetCurrentCheckpoint" }, // 521916314
		{ &Z_Construct_UFunction_AACountdownTimerActor_GetFormattedRemainingTime, "GetFormattedRemainingTime" }, // 743256665
		{ &Z_Construct_UFunction_AACountdownTimerActor_GetInitialTime, "GetInitialTime" }, // 249898047
		{ &Z_Construct_UFunction_AACountdownTimerActor_GetInitialTotalMilliseconds, "GetInitialTotalMilliseconds" }, // 3518225286
		{ &Z_Construct_UFunction_AACountdownTimerActor_GetNormalizedProgress, "GetNormalizedProgress" }, // 2208147715
		{ &Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTime, "GetRemainingTime" }, // 526053294
		{ &Z_Construct_UFunction_AACountdownTimerActor_GetRemainingTotalMilliseconds, "GetRemainingTotalMilliseconds" }, // 4084532046
		{ &Z_Construct_UFunction_AACountdownTimerActor_GetTimerState, "GetTimerState" }, // 3214607509
		{ &Z_Construct_UFunction_AACountdownTimerActor_IsFinished, "IsFinished" }, // 582146301
		{ &Z_Construct_UFunction_AACountdownTimerActor_IsIdle, "IsIdle" }, // 2887889788
		{ &Z_Construct_UFunction_AACountdownTimerActor_IsPaused, "IsPaused" }, // 3781585156
		{ &Z_Construct_UFunction_AACountdownTimerActor_IsRunning, "IsRunning" }, // 1559427875
		{ &Z_Construct_UFunction_AACountdownTimerActor_IsStopped, "IsStopped" }, // 2365322196
		{ &Z_Construct_UFunction_AACountdownTimerActor_PauseTimer, "PauseTimer" }, // 3132538130
		{ &Z_Construct_UFunction_AACountdownTimerActor_ResetTimer, "ResetTimer" }, // 2002678022
		{ &Z_Construct_UFunction_AACountdownTimerActor_ResumeTimer, "ResumeTimer" }, // 2432744556
		{ &Z_Construct_UFunction_AACountdownTimerActor_SetTime, "SetTime" }, // 4253018089
		{ &Z_Construct_UFunction_AACountdownTimerActor_StartTimer, "StartTimer" }, // 911447076
		{ &Z_Construct_UFunction_AACountdownTimerActor_StopTimer, "StopTimer" }, // 536358303
		{ &Z_Construct_UFunction_AACountdownTimerActor_SubtractTime, "SubtractTime" }, // 2739933117
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACountdownTimerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_InitialMinutes = { "InitialMinutes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountdownTimerActor, InitialMinutes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialMinutes_MetaData), NewProp_InitialMinutes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_InitialSeconds = { "InitialSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountdownTimerActor, InitialSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialSeconds_MetaData), NewProp_InitialSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_InitialMilliseconds = { "InitialMilliseconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountdownTimerActor, InitialMilliseconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialMilliseconds_MetaData), NewProp_InitialMilliseconds_MetaData) };
void Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_bAutoStart_SetBit(void* Obj)
{
	((AACountdownTimerActor*)Obj)->bAutoStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_bAutoStart = { "bAutoStart", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACountdownTimerActor), &Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_bAutoStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStart_MetaData), NewProp_bAutoStart_MetaData) };
void Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((AACountdownTimerActor*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACountdownTimerActor), &Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoop_MetaData), NewProp_bLoop_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_UpdateIntervalSeconds = { "UpdateIntervalSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountdownTimerActor, UpdateIntervalSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateIntervalSeconds_MetaData), NewProp_UpdateIntervalSeconds_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_NearEndThresholdMs = { "NearEndThresholdMs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountdownTimerActor, NearEndThresholdMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NearEndThresholdMs_MetaData), NewProp_NearEndThresholdMs_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_InitialTotalMilliseconds = { "InitialTotalMilliseconds", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountdownTimerActor, InitialTotalMilliseconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialTotalMilliseconds_MetaData), NewProp_InitialTotalMilliseconds_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_RemainingTotalMilliseconds = { "RemainingTotalMilliseconds", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountdownTimerActor, RemainingTotalMilliseconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingTotalMilliseconds_MetaData), NewProp_RemainingTotalMilliseconds_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_TimerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_TimerState = { "TimerState", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountdownTimerActor, TimerState), Z_Construct_UEnum_TTSWeapons_ECountdownTimerState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerState_MetaData), NewProp_TimerState_MetaData) }; // 2415132823
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_OnTimerStarted = { "OnTimerStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountdownTimerActor, OnTimerStarted), Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerSimpleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimerStarted_MetaData), NewProp_OnTimerStarted_MetaData) }; // 2248528012
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_OnTimerPaused = { "OnTimerPaused", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountdownTimerActor, OnTimerPaused), Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerSimpleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimerPaused_MetaData), NewProp_OnTimerPaused_MetaData) }; // 2248528012
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_OnTimerResumed = { "OnTimerResumed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountdownTimerActor, OnTimerResumed), Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerSimpleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimerResumed_MetaData), NewProp_OnTimerResumed_MetaData) }; // 2248528012
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_OnTimerStopped = { "OnTimerStopped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountdownTimerActor, OnTimerStopped), Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerSimpleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimerStopped_MetaData), NewProp_OnTimerStopped_MetaData) }; // 2248528012
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_OnTimerUpdated = { "OnTimerUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountdownTimerActor, OnTimerUpdated), Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerUpdatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimerUpdated_MetaData), NewProp_OnTimerUpdated_MetaData) }; // 1909296139
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_OnTimerNearEnd = { "OnTimerNearEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountdownTimerActor, OnTimerNearEnd), Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerNearEndSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimerNearEnd_MetaData), NewProp_OnTimerNearEnd_MetaData) }; // 1673623135
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_OnTimerFinished = { "OnTimerFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountdownTimerActor, OnTimerFinished), Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerSimpleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimerFinished_MetaData), NewProp_OnTimerFinished_MetaData) }; // 2248528012
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_OnCheckpointCaptured = { "OnCheckpointCaptured", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountdownTimerActor, OnCheckpointCaptured), Z_Construct_UDelegateFunction_TTSWeapons_CountdownTimerCheckpointCapturedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCheckpointCaptured_MetaData), NewProp_OnCheckpointCaptured_MetaData) }; // 3561853994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACountdownTimerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_InitialMinutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_InitialSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_InitialMilliseconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_bAutoStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_bLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_UpdateIntervalSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_NearEndThresholdMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_InitialTotalMilliseconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_RemainingTotalMilliseconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_TimerState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_TimerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_OnTimerStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_OnTimerPaused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_OnTimerResumed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_OnTimerStopped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_OnTimerUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_OnTimerNearEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_OnTimerFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountdownTimerActor_Statics::NewProp_OnCheckpointCaptured,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACountdownTimerActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AACountdownTimerActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TTSWeapons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACountdownTimerActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AACountdownTimerActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBPI_TimerCheckpoint_stt_NoRegister, (int32)VTABLE_OFFSET(AACountdownTimerActor, IBPI_TimerCheckpoint_stt), false },  // 285968615
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AACountdownTimerActor_Statics::ClassParams = {
	&AACountdownTimerActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AACountdownTimerActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AACountdownTimerActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACountdownTimerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AACountdownTimerActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AACountdownTimerActor()
{
	if (!Z_Registration_Info_UClass_AACountdownTimerActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACountdownTimerActor.OuterSingleton, Z_Construct_UClass_AACountdownTimerActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AACountdownTimerActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AACountdownTimerActor);
AACountdownTimerActor::~AACountdownTimerActor() {}
// ********** End Class AACountdownTimerActor ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountdownTimerActor_h__Script_TTSWeapons_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECountdownTimerState_StaticEnum, TEXT("ECountdownTimerState"), &Z_Registration_Info_UEnum_ECountdownTimerState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2415132823U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AACountdownTimerActor, AACountdownTimerActor::StaticClass, TEXT("AACountdownTimerActor"), &Z_Registration_Info_UClass_AACountdownTimerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACountdownTimerActor), 2791561579U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountdownTimerActor_h__Script_TTSWeapons_735802968(TEXT("/Script/TTSWeapons"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountdownTimerActor_h__Script_TTSWeapons_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountdownTimerActor_h__Script_TTSWeapons_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountdownTimerActor_h__Script_TTSWeapons_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountdownTimerActor_h__Script_TTSWeapons_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
