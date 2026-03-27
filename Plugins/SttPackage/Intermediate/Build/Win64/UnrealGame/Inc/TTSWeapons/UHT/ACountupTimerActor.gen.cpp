// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Timer/ACountupTimerActor.h"
#include "Timer/TimerCheckpointTypes_stt.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeACountupTimerActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
TTSWEAPONS_API UClass* Z_Construct_UClass_AACountupTimerActor();
TTSWEAPONS_API UClass* Z_Construct_UClass_AACountupTimerActor_NoRegister();
TTSWEAPONS_API UClass* Z_Construct_UClass_UBPI_TimerCheckpoint_stt_NoRegister();
TTSWEAPONS_API UEnum* Z_Construct_UEnum_TTSWeapons_ECountupTimerState();
TTSWEAPONS_API UFunction* Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerCheckpointCapturedSignature__DelegateSignature();
TTSWEAPONS_API UFunction* Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSecondReachedSignature__DelegateSignature();
TTSWEAPONS_API UFunction* Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSimpleSignature__DelegateSignature();
TTSWEAPONS_API UFunction* Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature();
TTSWEAPONS_API UScriptStruct* Z_Construct_UScriptStruct_FCountupSecondLogEntry();
TTSWEAPONS_API UScriptStruct* Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt();
UPackage* Z_Construct_UPackage__Script_TTSWeapons();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECountupTimerState ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECountupTimerState;
static UEnum* ECountupTimerState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECountupTimerState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECountupTimerState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TTSWeapons_ECountupTimerState, (UObject*)Z_Construct_UPackage__Script_TTSWeapons(), TEXT("ECountupTimerState"));
	}
	return Z_Registration_Info_UEnum_ECountupTimerState.OuterSingleton;
}
template<> TTSWEAPONS_API UEnum* StaticEnum<ECountupTimerState>()
{
	return ECountupTimerState_StaticEnum();
}
struct Z_Construct_UEnum_TTSWeapons_ECountupTimerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Estado de alto nivel del contador ascendente.\n// Se expone a Blueprint para que widgets y gameplay puedan reaccionar sin\n// depender de bools sueltos.\n" },
		{ "Finished.DisplayName", "Finished" },
		{ "Finished.Name", "ECountupTimerState::Finished" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "ECountupTimerState::Idle" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "Paused.DisplayName", "Paused" },
		{ "Paused.Name", "ECountupTimerState::Paused" },
		{ "Running.DisplayName", "Running" },
		{ "Running.Name", "ECountupTimerState::Running" },
		{ "Stopped.DisplayName", "Stopped" },
		{ "Stopped.Name", "ECountupTimerState::Stopped" },
		{ "ToolTip", "Estado de alto nivel del contador ascendente.\nSe expone a Blueprint para que widgets y gameplay puedan reaccionar sin\ndepender de bools sueltos." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECountupTimerState::Idle", (int64)ECountupTimerState::Idle },
		{ "ECountupTimerState::Running", (int64)ECountupTimerState::Running },
		{ "ECountupTimerState::Paused", (int64)ECountupTimerState::Paused },
		{ "ECountupTimerState::Stopped", (int64)ECountupTimerState::Stopped },
		{ "ECountupTimerState::Finished", (int64)ECountupTimerState::Finished },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TTSWeapons_ECountupTimerState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons,
	nullptr,
	"ECountupTimerState",
	"ECountupTimerState",
	Z_Construct_UEnum_TTSWeapons_ECountupTimerState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TTSWeapons_ECountupTimerState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TTSWeapons_ECountupTimerState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TTSWeapons_ECountupTimerState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TTSWeapons_ECountupTimerState()
{
	if (!Z_Registration_Info_UEnum_ECountupTimerState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECountupTimerState.InnerSingleton, Z_Construct_UEnum_TTSWeapons_ECountupTimerState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECountupTimerState.InnerSingleton;
}
// ********** End Enum ECountupTimerState **********************************************************

// ********** Begin ScriptStruct FCountupSecondLogEntry ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCountupSecondLogEntry;
class UScriptStruct* FCountupSecondLogEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCountupSecondLogEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCountupSecondLogEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCountupSecondLogEntry, (UObject*)Z_Construct_UPackage__Script_TTSWeapons(), TEXT("CountupSecondLogEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FCountupSecondLogEntry.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCountupSecondLogEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Entrada del log por segundo.\n// Representa un segundo entero alcanzado durante la corrida actual.\n// El valor en milisegundos corresponde al borde exacto de ese segundo.\n" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Entrada del log por segundo.\nRepresenta un segundo entero alcanzado durante la corrida actual.\nEl valor en milisegundos corresponde al borde exacto de ese segundo." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReachedWholeSecond_MetaData[] = {
		{ "Category", "CountupTimer|Runtime" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Reached Whole Second: segundo entero registrado por el countup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReachedElapsedTotalMilliseconds_MetaData[] = {
		{ "Category", "CountupTimer|Runtime" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Reached Elapsed Total Milliseconds: tiempo total del segundo registrado." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReachedWholeSecond;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReachedElapsedTotalMilliseconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCountupSecondLogEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCountupSecondLogEntry_Statics::NewProp_ReachedWholeSecond = { "ReachedWholeSecond", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountupSecondLogEntry, ReachedWholeSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReachedWholeSecond_MetaData), NewProp_ReachedWholeSecond_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FCountupSecondLogEntry_Statics::NewProp_ReachedElapsedTotalMilliseconds = { "ReachedElapsedTotalMilliseconds", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCountupSecondLogEntry, ReachedElapsedTotalMilliseconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReachedElapsedTotalMilliseconds_MetaData), NewProp_ReachedElapsedTotalMilliseconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCountupSecondLogEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountupSecondLogEntry_Statics::NewProp_ReachedWholeSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCountupSecondLogEntry_Statics::NewProp_ReachedElapsedTotalMilliseconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountupSecondLogEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCountupSecondLogEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TTSWeapons,
	nullptr,
	&NewStructOps,
	"CountupSecondLogEntry",
	Z_Construct_UScriptStruct_FCountupSecondLogEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountupSecondLogEntry_Statics::PropPointers),
	sizeof(FCountupSecondLogEntry),
	alignof(FCountupSecondLogEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCountupSecondLogEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCountupSecondLogEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCountupSecondLogEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FCountupSecondLogEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCountupSecondLogEntry.InnerSingleton, Z_Construct_UScriptStruct_FCountupSecondLogEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCountupSecondLogEntry.InnerSingleton;
}
// ********** End ScriptStruct FCountupSecondLogEntry **********************************************

// ********** Begin Delegate FCountupTimerSimpleSignature ******************************************
struct Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSimpleSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Delegate simple para eventos de transicion de estado.\n" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Delegate simple para eventos de transicion de estado." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSimpleSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons, nullptr, "CountupTimerSimpleSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSimpleSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSimpleSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSimpleSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSimpleSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCountupTimerSimpleSignature_DelegateWrapper(const FMulticastScriptDelegate& CountupTimerSimpleSignature)
{
	CountupTimerSimpleSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FCountupTimerSimpleSignature ********************************************

// ********** Begin Delegate FCountupTimerUpdatedSignature *****************************************
struct Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature_Statics
{
	struct _Script_TTSWeapons_eventCountupTimerUpdatedSignature_Parms
	{
		int32 ElapsedMinutes;
		int32 ElapsedSeconds;
		int32 ElapsedMilliseconds;
		int64 ElapsedTotalMilliseconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Delegate principal de actualizacion.\n// Expone el tiempo ya separado en partes y tambien el total acumulado.\n" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Delegate principal de actualizacion.\nExpone el tiempo ya separado en partes y tambien el total acumulado." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElapsedMinutes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElapsedSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElapsedMilliseconds;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ElapsedTotalMilliseconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature_Statics::NewProp_ElapsedMinutes = { "ElapsedMinutes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TTSWeapons_eventCountupTimerUpdatedSignature_Parms, ElapsedMinutes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature_Statics::NewProp_ElapsedSeconds = { "ElapsedSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TTSWeapons_eventCountupTimerUpdatedSignature_Parms, ElapsedSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature_Statics::NewProp_ElapsedMilliseconds = { "ElapsedMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TTSWeapons_eventCountupTimerUpdatedSignature_Parms, ElapsedMilliseconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature_Statics::NewProp_ElapsedTotalMilliseconds = { "ElapsedTotalMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TTSWeapons_eventCountupTimerUpdatedSignature_Parms, ElapsedTotalMilliseconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature_Statics::NewProp_ElapsedMinutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature_Statics::NewProp_ElapsedSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature_Statics::NewProp_ElapsedMilliseconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature_Statics::NewProp_ElapsedTotalMilliseconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons, nullptr, "CountupTimerUpdatedSignature__DelegateSignature", Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature_Statics::_Script_TTSWeapons_eventCountupTimerUpdatedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature_Statics::_Script_TTSWeapons_eventCountupTimerUpdatedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCountupTimerUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& CountupTimerUpdatedSignature, int32 ElapsedMinutes, int32 ElapsedSeconds, int32 ElapsedMilliseconds, int64 ElapsedTotalMilliseconds)
{
	struct _Script_TTSWeapons_eventCountupTimerUpdatedSignature_Parms
	{
		int32 ElapsedMinutes;
		int32 ElapsedSeconds;
		int32 ElapsedMilliseconds;
		int64 ElapsedTotalMilliseconds;
	};
	_Script_TTSWeapons_eventCountupTimerUpdatedSignature_Parms Parms;
	Parms.ElapsedMinutes=ElapsedMinutes;
	Parms.ElapsedSeconds=ElapsedSeconds;
	Parms.ElapsedMilliseconds=ElapsedMilliseconds;
	Parms.ElapsedTotalMilliseconds=ElapsedTotalMilliseconds;
	CountupTimerUpdatedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FCountupTimerUpdatedSignature *******************************************

// ********** Begin Delegate FCountupTimerSecondReachedSignature ***********************************
struct Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSecondReachedSignature__DelegateSignature_Statics
{
	struct _Script_TTSWeapons_eventCountupTimerSecondReachedSignature_Parms
	{
		int32 ReachedWholeSecond;
		int64 ReachedElapsedTotalMilliseconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Delegate para avisar que se alcanzo un nuevo segundo entero.\n// Este evento no depende de que el update caiga exacto en el segundo:\n// si hubo un hitch, emite todos los segundos que se hayan cruzado.\n" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Delegate para avisar que se alcanzo un nuevo segundo entero.\nEste evento no depende de que el update caiga exacto en el segundo:\nsi hubo un hitch, emite todos los segundos que se hayan cruzado." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReachedWholeSecond;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReachedElapsedTotalMilliseconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSecondReachedSignature__DelegateSignature_Statics::NewProp_ReachedWholeSecond = { "ReachedWholeSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TTSWeapons_eventCountupTimerSecondReachedSignature_Parms, ReachedWholeSecond), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSecondReachedSignature__DelegateSignature_Statics::NewProp_ReachedElapsedTotalMilliseconds = { "ReachedElapsedTotalMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TTSWeapons_eventCountupTimerSecondReachedSignature_Parms, ReachedElapsedTotalMilliseconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSecondReachedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSecondReachedSignature__DelegateSignature_Statics::NewProp_ReachedWholeSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSecondReachedSignature__DelegateSignature_Statics::NewProp_ReachedElapsedTotalMilliseconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSecondReachedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSecondReachedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons, nullptr, "CountupTimerSecondReachedSignature__DelegateSignature", Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSecondReachedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSecondReachedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSecondReachedSignature__DelegateSignature_Statics::_Script_TTSWeapons_eventCountupTimerSecondReachedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSecondReachedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSecondReachedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSecondReachedSignature__DelegateSignature_Statics::_Script_TTSWeapons_eventCountupTimerSecondReachedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSecondReachedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSecondReachedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCountupTimerSecondReachedSignature_DelegateWrapper(const FMulticastScriptDelegate& CountupTimerSecondReachedSignature, int32 ReachedWholeSecond, int64 ReachedElapsedTotalMilliseconds)
{
	struct _Script_TTSWeapons_eventCountupTimerSecondReachedSignature_Parms
	{
		int32 ReachedWholeSecond;
		int64 ReachedElapsedTotalMilliseconds;
	};
	_Script_TTSWeapons_eventCountupTimerSecondReachedSignature_Parms Parms;
	Parms.ReachedWholeSecond=ReachedWholeSecond;
	Parms.ReachedElapsedTotalMilliseconds=ReachedElapsedTotalMilliseconds;
	CountupTimerSecondReachedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FCountupTimerSecondReachedSignature *************************************

// ********** Begin Delegate FCountupTimerCheckpointCapturedSignature ******************************
struct Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerCheckpointCapturedSignature__DelegateSignature_Statics
{
	struct _Script_TTSWeapons_eventCountupTimerCheckpointCapturedSignature_Parms
	{
		FTimerCheckpointSnapshot_stt Checkpoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Delegate para publicar checkpoints de tiempo capturados a pedido.\n" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Delegate para publicar checkpoints de tiempo capturados a pedido." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Checkpoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerCheckpointCapturedSignature__DelegateSignature_Statics::NewProp_Checkpoint = { "Checkpoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TTSWeapons_eventCountupTimerCheckpointCapturedSignature_Parms, Checkpoint), Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt, METADATA_PARAMS(0, nullptr) }; // 1439956601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerCheckpointCapturedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerCheckpointCapturedSignature__DelegateSignature_Statics::NewProp_Checkpoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerCheckpointCapturedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerCheckpointCapturedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons, nullptr, "CountupTimerCheckpointCapturedSignature__DelegateSignature", Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerCheckpointCapturedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerCheckpointCapturedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerCheckpointCapturedSignature__DelegateSignature_Statics::_Script_TTSWeapons_eventCountupTimerCheckpointCapturedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerCheckpointCapturedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerCheckpointCapturedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerCheckpointCapturedSignature__DelegateSignature_Statics::_Script_TTSWeapons_eventCountupTimerCheckpointCapturedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerCheckpointCapturedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerCheckpointCapturedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCountupTimerCheckpointCapturedSignature_DelegateWrapper(const FMulticastScriptDelegate& CountupTimerCheckpointCapturedSignature, FTimerCheckpointSnapshot_stt Checkpoint)
{
	struct _Script_TTSWeapons_eventCountupTimerCheckpointCapturedSignature_Parms
	{
		FTimerCheckpointSnapshot_stt Checkpoint;
	};
	_Script_TTSWeapons_eventCountupTimerCheckpointCapturedSignature_Parms Parms;
	Parms.Checkpoint=Checkpoint;
	CountupTimerCheckpointCapturedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FCountupTimerCheckpointCapturedSignature ********************************

// ********** Begin Class AACountupTimerActor Function CaptureCheckpoint ***************************
struct Z_Construct_UFunction_AACountupTimerActor_CaptureCheckpoint_Statics
{
	struct ACountupTimerActor_eventCaptureCheckpoint_Parms
	{
		FString CheckpointTag;
		FTimerCheckpointSnapshot_stt ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Checkpoint" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Capture Checkpoint: capturar y publicar un checkpoint del countup." },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AACountupTimerActor_CaptureCheckpoint_Statics::NewProp_CheckpointTag = { "CheckpointTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventCaptureCheckpoint_Parms, CheckpointTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointTag_MetaData), NewProp_CheckpointTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACountupTimerActor_CaptureCheckpoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventCaptureCheckpoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt, METADATA_PARAMS(0, nullptr) }; // 1439956601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_CaptureCheckpoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_CaptureCheckpoint_Statics::NewProp_CheckpointTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_CaptureCheckpoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_CaptureCheckpoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_CaptureCheckpoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "CaptureCheckpoint", Z_Construct_UFunction_AACountupTimerActor_CaptureCheckpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_CaptureCheckpoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_CaptureCheckpoint_Statics::ACountupTimerActor_eventCaptureCheckpoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_CaptureCheckpoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_CaptureCheckpoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_CaptureCheckpoint_Statics::ACountupTimerActor_eventCaptureCheckpoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_CaptureCheckpoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_CaptureCheckpoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execCaptureCheckpoint)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CheckpointTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimerCheckpointSnapshot_stt*)Z_Param__Result=P_THIS->CaptureCheckpoint(Z_Param_CheckpointTag);
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function CaptureCheckpoint *****************************

// ********** Begin Class AACountupTimerActor Function ClearSecondLog ******************************
struct Z_Construct_UFunction_AACountupTimerActor_ClearSecondLog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Control" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Clear Second Log: limpiar el registro de segundos del countup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_ClearSecondLog_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "ClearSecondLog", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_ClearSecondLog_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_ClearSecondLog_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AACountupTimerActor_ClearSecondLog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_ClearSecondLog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execClearSecondLog)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearSecondLog();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function ClearSecondLog ********************************

// ********** Begin Class AACountupTimerActor Function FinishTimer *********************************
struct Z_Construct_UFunction_AACountupTimerActor_FinishTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Control" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Finish Timer: finalizar inmediatamente el countup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_FinishTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "FinishTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_FinishTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_FinishTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AACountupTimerActor_FinishTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_FinishTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execFinishTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishTimer();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function FinishTimer ***********************************

// ********** Begin Class AACountupTimerActor Function GetCurrentCheckpoint ************************
struct Z_Construct_UFunction_AACountupTimerActor_GetCurrentCheckpoint_Statics
{
	struct ACountupTimerActor_eventGetCurrentCheckpoint_Parms
	{
		FTimerCheckpointSnapshot_stt ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Checkpoint" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Get Current Checkpoint: obtener un snapshot actual del countup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AACountupTimerActor_GetCurrentCheckpoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventGetCurrentCheckpoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt, METADATA_PARAMS(0, nullptr) }; // 1439956601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_GetCurrentCheckpoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetCurrentCheckpoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetCurrentCheckpoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_GetCurrentCheckpoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "GetCurrentCheckpoint", Z_Construct_UFunction_AACountupTimerActor_GetCurrentCheckpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetCurrentCheckpoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_GetCurrentCheckpoint_Statics::ACountupTimerActor_eventGetCurrentCheckpoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetCurrentCheckpoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_GetCurrentCheckpoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_GetCurrentCheckpoint_Statics::ACountupTimerActor_eventGetCurrentCheckpoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_GetCurrentCheckpoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_GetCurrentCheckpoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execGetCurrentCheckpoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimerCheckpointSnapshot_stt*)Z_Param__Result=P_THIS->GetCurrentCheckpoint();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function GetCurrentCheckpoint **************************

// ********** Begin Class AACountupTimerActor Function GetElapsedTime ******************************
struct Z_Construct_UFunction_AACountupTimerActor_GetElapsedTime_Statics
{
	struct ACountupTimerActor_eventGetElapsedTime_Parms
	{
		int32 OutMinutes;
		int32 OutSeconds;
		int32 OutMilliseconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Get Elapsed Time: obtener el tiempo acumulado separado en partes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutMinutes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutMilliseconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_GetElapsedTime_Statics::NewProp_OutMinutes = { "OutMinutes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventGetElapsedTime_Parms, OutMinutes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_GetElapsedTime_Statics::NewProp_OutSeconds = { "OutSeconds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventGetElapsedTime_Parms, OutSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_GetElapsedTime_Statics::NewProp_OutMilliseconds = { "OutMilliseconds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventGetElapsedTime_Parms, OutMilliseconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_GetElapsedTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetElapsedTime_Statics::NewProp_OutMinutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetElapsedTime_Statics::NewProp_OutSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetElapsedTime_Statics::NewProp_OutMilliseconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetElapsedTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_GetElapsedTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "GetElapsedTime", Z_Construct_UFunction_AACountupTimerActor_GetElapsedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetElapsedTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_GetElapsedTime_Statics::ACountupTimerActor_eventGetElapsedTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetElapsedTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_GetElapsedTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_GetElapsedTime_Statics::ACountupTimerActor_eventGetElapsedTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_GetElapsedTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_GetElapsedTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execGetElapsedTime)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMinutes);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutSeconds);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMilliseconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetElapsedTime(Z_Param_Out_OutMinutes,Z_Param_Out_OutSeconds,Z_Param_Out_OutMilliseconds);
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function GetElapsedTime ********************************

// ********** Begin Class AACountupTimerActor Function GetElapsedTotalMilliseconds *****************
struct Z_Construct_UFunction_AACountupTimerActor_GetElapsedTotalMilliseconds_Statics
{
	struct ACountupTimerActor_eventGetElapsedTotalMilliseconds_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Get Elapsed Total Milliseconds: obtener el tiempo acumulado total." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_AACountupTimerActor_GetElapsedTotalMilliseconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventGetElapsedTotalMilliseconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_GetElapsedTotalMilliseconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetElapsedTotalMilliseconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetElapsedTotalMilliseconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_GetElapsedTotalMilliseconds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "GetElapsedTotalMilliseconds", Z_Construct_UFunction_AACountupTimerActor_GetElapsedTotalMilliseconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetElapsedTotalMilliseconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_GetElapsedTotalMilliseconds_Statics::ACountupTimerActor_eventGetElapsedTotalMilliseconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetElapsedTotalMilliseconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_GetElapsedTotalMilliseconds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_GetElapsedTotalMilliseconds_Statics::ACountupTimerActor_eventGetElapsedTotalMilliseconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_GetElapsedTotalMilliseconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_GetElapsedTotalMilliseconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execGetElapsedTotalMilliseconds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->GetElapsedTotalMilliseconds();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function GetElapsedTotalMilliseconds *******************

// ********** Begin Class AACountupTimerActor Function GetElapsedWholeSeconds **********************
struct Z_Construct_UFunction_AACountupTimerActor_GetElapsedWholeSeconds_Statics
{
	struct ACountupTimerActor_eventGetElapsedWholeSeconds_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Get Elapsed Whole Seconds: obtener el segundo entero actual del countup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_GetElapsedWholeSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventGetElapsedWholeSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_GetElapsedWholeSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetElapsedWholeSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetElapsedWholeSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_GetElapsedWholeSeconds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "GetElapsedWholeSeconds", Z_Construct_UFunction_AACountupTimerActor_GetElapsedWholeSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetElapsedWholeSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_GetElapsedWholeSeconds_Statics::ACountupTimerActor_eventGetElapsedWholeSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetElapsedWholeSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_GetElapsedWholeSeconds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_GetElapsedWholeSeconds_Statics::ACountupTimerActor_eventGetElapsedWholeSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_GetElapsedWholeSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_GetElapsedWholeSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execGetElapsedWholeSeconds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetElapsedWholeSeconds();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function GetElapsedWholeSeconds ************************

// ********** Begin Class AACountupTimerActor Function GetFormattedElapsedTime *********************
struct Z_Construct_UFunction_AACountupTimerActor_GetFormattedElapsedTime_Statics
{
	struct ACountupTimerActor_eventGetFormattedElapsedTime_Parms
	{
		bool bIncludeMilliseconds;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Get Formatted Elapsed Time: obtener el countup como texto formateado." },
	};
#endif // WITH_METADATA
	static void NewProp_bIncludeMilliseconds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeMilliseconds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AACountupTimerActor_GetFormattedElapsedTime_Statics::NewProp_bIncludeMilliseconds_SetBit(void* Obj)
{
	((ACountupTimerActor_eventGetFormattedElapsedTime_Parms*)Obj)->bIncludeMilliseconds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACountupTimerActor_GetFormattedElapsedTime_Statics::NewProp_bIncludeMilliseconds = { "bIncludeMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACountupTimerActor_eventGetFormattedElapsedTime_Parms), &Z_Construct_UFunction_AACountupTimerActor_GetFormattedElapsedTime_Statics::NewProp_bIncludeMilliseconds_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AACountupTimerActor_GetFormattedElapsedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventGetFormattedElapsedTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_GetFormattedElapsedTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetFormattedElapsedTime_Statics::NewProp_bIncludeMilliseconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetFormattedElapsedTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetFormattedElapsedTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_GetFormattedElapsedTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "GetFormattedElapsedTime", Z_Construct_UFunction_AACountupTimerActor_GetFormattedElapsedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetFormattedElapsedTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_GetFormattedElapsedTime_Statics::ACountupTimerActor_eventGetFormattedElapsedTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetFormattedElapsedTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_GetFormattedElapsedTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_GetFormattedElapsedTime_Statics::ACountupTimerActor_eventGetFormattedElapsedTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_GetFormattedElapsedTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_GetFormattedElapsedTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execGetFormattedElapsedTime)
{
	P_GET_UBOOL(Z_Param_bIncludeMilliseconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetFormattedElapsedTime(Z_Param_bIncludeMilliseconds);
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function GetFormattedElapsedTime ***********************

// ********** Begin Class AACountupTimerActor Function GetInitialTime ******************************
struct Z_Construct_UFunction_AACountupTimerActor_GetInitialTime_Statics
{
	struct ACountupTimerActor_eventGetInitialTime_Parms
	{
		int32 OutMinutes;
		int32 OutSeconds;
		int32 OutMilliseconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Get Initial Time: obtener el tiempo inicial configurado del countup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutMinutes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutMilliseconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_GetInitialTime_Statics::NewProp_OutMinutes = { "OutMinutes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventGetInitialTime_Parms, OutMinutes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_GetInitialTime_Statics::NewProp_OutSeconds = { "OutSeconds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventGetInitialTime_Parms, OutSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_GetInitialTime_Statics::NewProp_OutMilliseconds = { "OutMilliseconds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventGetInitialTime_Parms, OutMilliseconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_GetInitialTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetInitialTime_Statics::NewProp_OutMinutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetInitialTime_Statics::NewProp_OutSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetInitialTime_Statics::NewProp_OutMilliseconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetInitialTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_GetInitialTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "GetInitialTime", Z_Construct_UFunction_AACountupTimerActor_GetInitialTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetInitialTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_GetInitialTime_Statics::ACountupTimerActor_eventGetInitialTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetInitialTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_GetInitialTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_GetInitialTime_Statics::ACountupTimerActor_eventGetInitialTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_GetInitialTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_GetInitialTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execGetInitialTime)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMinutes);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutSeconds);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMilliseconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetInitialTime(Z_Param_Out_OutMinutes,Z_Param_Out_OutSeconds,Z_Param_Out_OutMilliseconds);
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function GetInitialTime ********************************

// ********** Begin Class AACountupTimerActor Function GetInitialTotalMilliseconds *****************
struct Z_Construct_UFunction_AACountupTimerActor_GetInitialTotalMilliseconds_Statics
{
	struct ACountupTimerActor_eventGetInitialTotalMilliseconds_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Get Initial Total Milliseconds: obtener el tiempo inicial total del countup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_AACountupTimerActor_GetInitialTotalMilliseconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventGetInitialTotalMilliseconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_GetInitialTotalMilliseconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetInitialTotalMilliseconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetInitialTotalMilliseconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_GetInitialTotalMilliseconds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "GetInitialTotalMilliseconds", Z_Construct_UFunction_AACountupTimerActor_GetInitialTotalMilliseconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetInitialTotalMilliseconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_GetInitialTotalMilliseconds_Statics::ACountupTimerActor_eventGetInitialTotalMilliseconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetInitialTotalMilliseconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_GetInitialTotalMilliseconds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_GetInitialTotalMilliseconds_Statics::ACountupTimerActor_eventGetInitialTotalMilliseconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_GetInitialTotalMilliseconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_GetInitialTotalMilliseconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execGetInitialTotalMilliseconds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->GetInitialTotalMilliseconds();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function GetInitialTotalMilliseconds *******************

// ********** Begin Class AACountupTimerActor Function GetLastRegisteredWholeSecond ****************
struct Z_Construct_UFunction_AACountupTimerActor_GetLastRegisteredWholeSecond_Statics
{
	struct ACountupTimerActor_eventGetLastRegisteredWholeSecond_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Get Last Registered Whole Second: obtener el ultimo segundo entero registrado." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_GetLastRegisteredWholeSecond_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventGetLastRegisteredWholeSecond_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_GetLastRegisteredWholeSecond_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetLastRegisteredWholeSecond_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetLastRegisteredWholeSecond_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_GetLastRegisteredWholeSecond_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "GetLastRegisteredWholeSecond", Z_Construct_UFunction_AACountupTimerActor_GetLastRegisteredWholeSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetLastRegisteredWholeSecond_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_GetLastRegisteredWholeSecond_Statics::ACountupTimerActor_eventGetLastRegisteredWholeSecond_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetLastRegisteredWholeSecond_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_GetLastRegisteredWholeSecond_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_GetLastRegisteredWholeSecond_Statics::ACountupTimerActor_eventGetLastRegisteredWholeSecond_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_GetLastRegisteredWholeSecond()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_GetLastRegisteredWholeSecond_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execGetLastRegisteredWholeSecond)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLastRegisteredWholeSecond();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function GetLastRegisteredWholeSecond ******************

// ********** Begin Class AACountupTimerActor Function GetLoggedSecondCount ************************
struct Z_Construct_UFunction_AACountupTimerActor_GetLoggedSecondCount_Statics
{
	struct ACountupTimerActor_eventGetLoggedSecondCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Get Logged Second Count: obtener la cantidad de segundos registrados." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_GetLoggedSecondCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventGetLoggedSecondCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_GetLoggedSecondCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetLoggedSecondCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetLoggedSecondCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_GetLoggedSecondCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "GetLoggedSecondCount", Z_Construct_UFunction_AACountupTimerActor_GetLoggedSecondCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetLoggedSecondCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_GetLoggedSecondCount_Statics::ACountupTimerActor_eventGetLoggedSecondCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetLoggedSecondCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_GetLoggedSecondCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_GetLoggedSecondCount_Statics::ACountupTimerActor_eventGetLoggedSecondCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_GetLoggedSecondCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_GetLoggedSecondCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execGetLoggedSecondCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLoggedSecondCount();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function GetLoggedSecondCount **************************

// ********** Begin Class AACountupTimerActor Function GetMaxDuration ******************************
struct Z_Construct_UFunction_AACountupTimerActor_GetMaxDuration_Statics
{
	struct ACountupTimerActor_eventGetMaxDuration_Parms
	{
		int32 OutMinutes;
		int32 OutSeconds;
		int32 OutMilliseconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Get Max Duration: obtener el tope maximo configurado del countup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutMinutes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutMilliseconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_GetMaxDuration_Statics::NewProp_OutMinutes = { "OutMinutes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventGetMaxDuration_Parms, OutMinutes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_GetMaxDuration_Statics::NewProp_OutSeconds = { "OutSeconds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventGetMaxDuration_Parms, OutSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_GetMaxDuration_Statics::NewProp_OutMilliseconds = { "OutMilliseconds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventGetMaxDuration_Parms, OutMilliseconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_GetMaxDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetMaxDuration_Statics::NewProp_OutMinutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetMaxDuration_Statics::NewProp_OutSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetMaxDuration_Statics::NewProp_OutMilliseconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetMaxDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_GetMaxDuration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "GetMaxDuration", Z_Construct_UFunction_AACountupTimerActor_GetMaxDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetMaxDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_GetMaxDuration_Statics::ACountupTimerActor_eventGetMaxDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetMaxDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_GetMaxDuration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_GetMaxDuration_Statics::ACountupTimerActor_eventGetMaxDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_GetMaxDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_GetMaxDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execGetMaxDuration)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMinutes);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutSeconds);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMilliseconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMaxDuration(Z_Param_Out_OutMinutes,Z_Param_Out_OutSeconds,Z_Param_Out_OutMilliseconds);
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function GetMaxDuration ********************************

// ********** Begin Class AACountupTimerActor Function GetMaxTotalMilliseconds *********************
struct Z_Construct_UFunction_AACountupTimerActor_GetMaxTotalMilliseconds_Statics
{
	struct ACountupTimerActor_eventGetMaxTotalMilliseconds_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Get Max Total Milliseconds: obtener el tope maximo total del countup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_AACountupTimerActor_GetMaxTotalMilliseconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventGetMaxTotalMilliseconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_GetMaxTotalMilliseconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetMaxTotalMilliseconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetMaxTotalMilliseconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_GetMaxTotalMilliseconds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "GetMaxTotalMilliseconds", Z_Construct_UFunction_AACountupTimerActor_GetMaxTotalMilliseconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetMaxTotalMilliseconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_GetMaxTotalMilliseconds_Statics::ACountupTimerActor_eventGetMaxTotalMilliseconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetMaxTotalMilliseconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_GetMaxTotalMilliseconds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_GetMaxTotalMilliseconds_Statics::ACountupTimerActor_eventGetMaxTotalMilliseconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_GetMaxTotalMilliseconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_GetMaxTotalMilliseconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execGetMaxTotalMilliseconds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->GetMaxTotalMilliseconds();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function GetMaxTotalMilliseconds ***********************

// ********** Begin Class AACountupTimerActor Function GetNormalizedProgressToMax ******************
struct Z_Construct_UFunction_AACountupTimerActor_GetNormalizedProgressToMax_Statics
{
	struct ACountupTimerActor_eventGetNormalizedProgressToMax_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Get Normalized Progress To Max: obtener progreso normalizado hacia el maximo." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AACountupTimerActor_GetNormalizedProgressToMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventGetNormalizedProgressToMax_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_GetNormalizedProgressToMax_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetNormalizedProgressToMax_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetNormalizedProgressToMax_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_GetNormalizedProgressToMax_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "GetNormalizedProgressToMax", Z_Construct_UFunction_AACountupTimerActor_GetNormalizedProgressToMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetNormalizedProgressToMax_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_GetNormalizedProgressToMax_Statics::ACountupTimerActor_eventGetNormalizedProgressToMax_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetNormalizedProgressToMax_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_GetNormalizedProgressToMax_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_GetNormalizedProgressToMax_Statics::ACountupTimerActor_eventGetNormalizedProgressToMax_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_GetNormalizedProgressToMax()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_GetNormalizedProgressToMax_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execGetNormalizedProgressToMax)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNormalizedProgressToMax();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function GetNormalizedProgressToMax ********************

// ********** Begin Class AACountupTimerActor Function GetTimerState *******************************
struct Z_Construct_UFunction_AACountupTimerActor_GetTimerState_Statics
{
	struct ACountupTimerActor_eventGetTimerState_Parms
	{
		ECountupTimerState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Get Timer State: obtener el estado actual del countup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AACountupTimerActor_GetTimerState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AACountupTimerActor_GetTimerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventGetTimerState_Parms, ReturnValue), Z_Construct_UEnum_TTSWeapons_ECountupTimerState, METADATA_PARAMS(0, nullptr) }; // 2151309404
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_GetTimerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetTimerState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_GetTimerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetTimerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_GetTimerState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "GetTimerState", Z_Construct_UFunction_AACountupTimerActor_GetTimerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetTimerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_GetTimerState_Statics::ACountupTimerActor_eventGetTimerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_GetTimerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_GetTimerState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_GetTimerState_Statics::ACountupTimerActor_eventGetTimerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_GetTimerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_GetTimerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execGetTimerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECountupTimerState*)Z_Param__Result=P_THIS->GetTimerState();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function GetTimerState *********************************

// ********** Begin Class AACountupTimerActor Function HasActiveMaxDuration ************************
struct Z_Construct_UFunction_AACountupTimerActor_HasActiveMaxDuration_Statics
{
	struct ACountupTimerActor_eventHasActiveMaxDuration_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Has Active Max Duration: consultar si el countup tiene tope maximo activo." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AACountupTimerActor_HasActiveMaxDuration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ACountupTimerActor_eventHasActiveMaxDuration_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACountupTimerActor_HasActiveMaxDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACountupTimerActor_eventHasActiveMaxDuration_Parms), &Z_Construct_UFunction_AACountupTimerActor_HasActiveMaxDuration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_HasActiveMaxDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_HasActiveMaxDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_HasActiveMaxDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_HasActiveMaxDuration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "HasActiveMaxDuration", Z_Construct_UFunction_AACountupTimerActor_HasActiveMaxDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_HasActiveMaxDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_HasActiveMaxDuration_Statics::ACountupTimerActor_eventHasActiveMaxDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_HasActiveMaxDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_HasActiveMaxDuration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_HasActiveMaxDuration_Statics::ACountupTimerActor_eventHasActiveMaxDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_HasActiveMaxDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_HasActiveMaxDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execHasActiveMaxDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasActiveMaxDuration();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function HasActiveMaxDuration **************************

// ********** Begin Class AACountupTimerActor Function IsFinished **********************************
struct Z_Construct_UFunction_AACountupTimerActor_IsFinished_Statics
{
	struct ACountupTimerActor_eventIsFinished_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Is Finished: consultar si el countup termino." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AACountupTimerActor_IsFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ACountupTimerActor_eventIsFinished_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACountupTimerActor_IsFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACountupTimerActor_eventIsFinished_Parms), &Z_Construct_UFunction_AACountupTimerActor_IsFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_IsFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_IsFinished_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_IsFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_IsFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "IsFinished", Z_Construct_UFunction_AACountupTimerActor_IsFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_IsFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_IsFinished_Statics::ACountupTimerActor_eventIsFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_IsFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_IsFinished_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_IsFinished_Statics::ACountupTimerActor_eventIsFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_IsFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_IsFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execIsFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFinished();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function IsFinished ************************************

// ********** Begin Class AACountupTimerActor Function IsIdle **************************************
struct Z_Construct_UFunction_AACountupTimerActor_IsIdle_Statics
{
	struct ACountupTimerActor_eventIsIdle_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Is Idle: consultar si el countup esta listo sin correr." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AACountupTimerActor_IsIdle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ACountupTimerActor_eventIsIdle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACountupTimerActor_IsIdle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACountupTimerActor_eventIsIdle_Parms), &Z_Construct_UFunction_AACountupTimerActor_IsIdle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_IsIdle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_IsIdle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_IsIdle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_IsIdle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "IsIdle", Z_Construct_UFunction_AACountupTimerActor_IsIdle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_IsIdle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_IsIdle_Statics::ACountupTimerActor_eventIsIdle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_IsIdle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_IsIdle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_IsIdle_Statics::ACountupTimerActor_eventIsIdle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_IsIdle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_IsIdle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execIsIdle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsIdle();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function IsIdle ****************************************

// ********** Begin Class AACountupTimerActor Function IsPaused ************************************
struct Z_Construct_UFunction_AACountupTimerActor_IsPaused_Statics
{
	struct ACountupTimerActor_eventIsPaused_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Is Paused: consultar si el countup esta en pausa." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AACountupTimerActor_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ACountupTimerActor_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACountupTimerActor_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACountupTimerActor_eventIsPaused_Parms), &Z_Construct_UFunction_AACountupTimerActor_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_IsPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_IsPaused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_IsPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_IsPaused_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "IsPaused", Z_Construct_UFunction_AACountupTimerActor_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_IsPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_IsPaused_Statics::ACountupTimerActor_eventIsPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_IsPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_IsPaused_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_IsPaused_Statics::ACountupTimerActor_eventIsPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_IsPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_IsPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execIsPaused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPaused();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function IsPaused **************************************

// ********** Begin Class AACountupTimerActor Function IsRunning ***********************************
struct Z_Construct_UFunction_AACountupTimerActor_IsRunning_Statics
{
	struct ACountupTimerActor_eventIsRunning_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Is Running: consultar si el countup esta corriendo." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AACountupTimerActor_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ACountupTimerActor_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACountupTimerActor_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACountupTimerActor_eventIsRunning_Parms), &Z_Construct_UFunction_AACountupTimerActor_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_IsRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_IsRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_IsRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_IsRunning_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "IsRunning", Z_Construct_UFunction_AACountupTimerActor_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_IsRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_IsRunning_Statics::ACountupTimerActor_eventIsRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_IsRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_IsRunning_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_IsRunning_Statics::ACountupTimerActor_eventIsRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_IsRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_IsRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execIsRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRunning();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function IsRunning *************************************

// ********** Begin Class AACountupTimerActor Function IsStopped ***********************************
struct Z_Construct_UFunction_AACountupTimerActor_IsStopped_Statics
{
	struct ACountupTimerActor_eventIsStopped_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Query" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Is Stopped: consultar si el countup fue detenido." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AACountupTimerActor_IsStopped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ACountupTimerActor_eventIsStopped_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACountupTimerActor_IsStopped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACountupTimerActor_eventIsStopped_Parms), &Z_Construct_UFunction_AACountupTimerActor_IsStopped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_IsStopped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_IsStopped_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_IsStopped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_IsStopped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "IsStopped", Z_Construct_UFunction_AACountupTimerActor_IsStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_IsStopped_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_IsStopped_Statics::ACountupTimerActor_eventIsStopped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_IsStopped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_IsStopped_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_IsStopped_Statics::ACountupTimerActor_eventIsStopped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_IsStopped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_IsStopped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execIsStopped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStopped();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function IsStopped *************************************

// ********** Begin Class AACountupTimerActor Function PauseTimer **********************************
struct Z_Construct_UFunction_AACountupTimerActor_PauseTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Control" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Pause Timer: pausar la corrida actual del countup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_PauseTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "PauseTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_PauseTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_PauseTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AACountupTimerActor_PauseTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_PauseTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execPauseTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseTimer();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function PauseTimer ************************************

// ********** Begin Class AACountupTimerActor Function ResetTimer **********************************
struct Z_Construct_UFunction_AACountupTimerActor_ResetTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Control" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Reset Timer: restaurar el countup y dejarlo listo sin correr." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_ResetTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "ResetTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_ResetTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_ResetTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AACountupTimerActor_ResetTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_ResetTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execResetTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetTimer();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function ResetTimer ************************************

// ********** Begin Class AACountupTimerActor Function ResumeTimer *********************************
struct Z_Construct_UFunction_AACountupTimerActor_ResumeTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Control" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Resume Timer: reanudar un countup pausado." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_ResumeTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "ResumeTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_ResumeTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_ResumeTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AACountupTimerActor_ResumeTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_ResumeTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execResumeTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumeTimer();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function ResumeTimer ***********************************

// ********** Begin Class AACountupTimerActor Function SetInitialTime ******************************
struct Z_Construct_UFunction_AACountupTimerActor_SetInitialTime_Statics
{
	struct ACountupTimerActor_eventSetInitialTime_Parms
	{
		int32 InMinutes;
		int32 InSeconds;
		int32 InMilliseconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Control" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Set Initial Time: configurar el tiempo inicial del countup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMinutes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMilliseconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_SetInitialTime_Statics::NewProp_InMinutes = { "InMinutes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventSetInitialTime_Parms, InMinutes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_SetInitialTime_Statics::NewProp_InSeconds = { "InSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventSetInitialTime_Parms, InSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_SetInitialTime_Statics::NewProp_InMilliseconds = { "InMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventSetInitialTime_Parms, InMilliseconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_SetInitialTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_SetInitialTime_Statics::NewProp_InMinutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_SetInitialTime_Statics::NewProp_InSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_SetInitialTime_Statics::NewProp_InMilliseconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_SetInitialTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_SetInitialTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "SetInitialTime", Z_Construct_UFunction_AACountupTimerActor_SetInitialTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_SetInitialTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_SetInitialTime_Statics::ACountupTimerActor_eventSetInitialTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_SetInitialTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_SetInitialTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_SetInitialTime_Statics::ACountupTimerActor_eventSetInitialTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_SetInitialTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_SetInitialTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execSetInitialTime)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InMinutes);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSeconds);
	P_GET_PROPERTY(FIntProperty,Z_Param_InMilliseconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInitialTime(Z_Param_InMinutes,Z_Param_InSeconds,Z_Param_InMilliseconds);
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function SetInitialTime ********************************

// ********** Begin Class AACountupTimerActor Function SetMaxDuration ******************************
struct Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics
{
	struct ACountupTimerActor_eventSetMaxDuration_Parms
	{
		int32 InMinutes;
		int32 InSeconds;
		int32 InMilliseconds;
		bool bEnableMaxDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Control" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Set Max Duration: configurar el tope maximo opcional del countup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMinutes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMilliseconds;
	static void NewProp_bEnableMaxDuration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMaxDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::NewProp_InMinutes = { "InMinutes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventSetMaxDuration_Parms, InMinutes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::NewProp_InSeconds = { "InSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventSetMaxDuration_Parms, InSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::NewProp_InMilliseconds = { "InMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventSetMaxDuration_Parms, InMilliseconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::NewProp_bEnableMaxDuration_SetBit(void* Obj)
{
	((ACountupTimerActor_eventSetMaxDuration_Parms*)Obj)->bEnableMaxDuration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::NewProp_bEnableMaxDuration = { "bEnableMaxDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACountupTimerActor_eventSetMaxDuration_Parms), &Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::NewProp_bEnableMaxDuration_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::NewProp_InMinutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::NewProp_InSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::NewProp_InMilliseconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::NewProp_bEnableMaxDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "SetMaxDuration", Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::ACountupTimerActor_eventSetMaxDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::ACountupTimerActor_eventSetMaxDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execSetMaxDuration)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InMinutes);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSeconds);
	P_GET_PROPERTY(FIntProperty,Z_Param_InMilliseconds);
	P_GET_UBOOL(Z_Param_bEnableMaxDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxDuration(Z_Param_InMinutes,Z_Param_InSeconds,Z_Param_InMilliseconds,Z_Param_bEnableMaxDuration);
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function SetMaxDuration ********************************

// ********** Begin Class AACountupTimerActor Function SetTime *************************************
struct Z_Construct_UFunction_AACountupTimerActor_SetTime_Statics
{
	struct ACountupTimerActor_eventSetTime_Parms
	{
		int32 InMinutes;
		int32 InSeconds;
		int32 InMilliseconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Control" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Set Time: alias para configurar el tiempo inicial del countup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMinutes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMilliseconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_SetTime_Statics::NewProp_InMinutes = { "InMinutes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventSetTime_Parms, InMinutes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_SetTime_Statics::NewProp_InSeconds = { "InSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventSetTime_Parms, InSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AACountupTimerActor_SetTime_Statics::NewProp_InMilliseconds = { "InMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACountupTimerActor_eventSetTime_Parms, InMilliseconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AACountupTimerActor_SetTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_SetTime_Statics::NewProp_InMinutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_SetTime_Statics::NewProp_InSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AACountupTimerActor_SetTime_Statics::NewProp_InMilliseconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_SetTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_SetTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "SetTime", Z_Construct_UFunction_AACountupTimerActor_SetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_SetTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AACountupTimerActor_SetTime_Statics::ACountupTimerActor_eventSetTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_SetTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_SetTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AACountupTimerActor_SetTime_Statics::ACountupTimerActor_eventSetTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AACountupTimerActor_SetTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_SetTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execSetTime)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InMinutes);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSeconds);
	P_GET_PROPERTY(FIntProperty,Z_Param_InMilliseconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTime(Z_Param_InMinutes,Z_Param_InSeconds,Z_Param_InMilliseconds);
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function SetTime ***************************************

// ********** Begin Class AACountupTimerActor Function StartTimer **********************************
struct Z_Construct_UFunction_AACountupTimerActor_StartTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Control" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Start Timer: iniciar una corrida nueva del countup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_StartTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "StartTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_StartTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_StartTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AACountupTimerActor_StartTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_StartTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execStartTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartTimer();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function StartTimer ************************************

// ********** Begin Class AACountupTimerActor Function StopTimer ***********************************
struct Z_Construct_UFunction_AACountupTimerActor_StopTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CountupTimer|Control" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Stop Timer: detener y restaurar el countup al tiempo inicial." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AACountupTimerActor_StopTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AACountupTimerActor, nullptr, "StopTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AACountupTimerActor_StopTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AACountupTimerActor_StopTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AACountupTimerActor_StopTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AACountupTimerActor_StopTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AACountupTimerActor::execStopTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopTimer();
	P_NATIVE_END;
}
// ********** End Class AACountupTimerActor Function StopTimer *************************************

// ********** Begin Class AACountupTimerActor ******************************************************
void AACountupTimerActor::StaticRegisterNativesAACountupTimerActor()
{
	UClass* Class = AACountupTimerActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CaptureCheckpoint", &AACountupTimerActor::execCaptureCheckpoint },
		{ "ClearSecondLog", &AACountupTimerActor::execClearSecondLog },
		{ "FinishTimer", &AACountupTimerActor::execFinishTimer },
		{ "GetCurrentCheckpoint", &AACountupTimerActor::execGetCurrentCheckpoint },
		{ "GetElapsedTime", &AACountupTimerActor::execGetElapsedTime },
		{ "GetElapsedTotalMilliseconds", &AACountupTimerActor::execGetElapsedTotalMilliseconds },
		{ "GetElapsedWholeSeconds", &AACountupTimerActor::execGetElapsedWholeSeconds },
		{ "GetFormattedElapsedTime", &AACountupTimerActor::execGetFormattedElapsedTime },
		{ "GetInitialTime", &AACountupTimerActor::execGetInitialTime },
		{ "GetInitialTotalMilliseconds", &AACountupTimerActor::execGetInitialTotalMilliseconds },
		{ "GetLastRegisteredWholeSecond", &AACountupTimerActor::execGetLastRegisteredWholeSecond },
		{ "GetLoggedSecondCount", &AACountupTimerActor::execGetLoggedSecondCount },
		{ "GetMaxDuration", &AACountupTimerActor::execGetMaxDuration },
		{ "GetMaxTotalMilliseconds", &AACountupTimerActor::execGetMaxTotalMilliseconds },
		{ "GetNormalizedProgressToMax", &AACountupTimerActor::execGetNormalizedProgressToMax },
		{ "GetTimerState", &AACountupTimerActor::execGetTimerState },
		{ "HasActiveMaxDuration", &AACountupTimerActor::execHasActiveMaxDuration },
		{ "IsFinished", &AACountupTimerActor::execIsFinished },
		{ "IsIdle", &AACountupTimerActor::execIsIdle },
		{ "IsPaused", &AACountupTimerActor::execIsPaused },
		{ "IsRunning", &AACountupTimerActor::execIsRunning },
		{ "IsStopped", &AACountupTimerActor::execIsStopped },
		{ "PauseTimer", &AACountupTimerActor::execPauseTimer },
		{ "ResetTimer", &AACountupTimerActor::execResetTimer },
		{ "ResumeTimer", &AACountupTimerActor::execResumeTimer },
		{ "SetInitialTime", &AACountupTimerActor::execSetInitialTime },
		{ "SetMaxDuration", &AACountupTimerActor::execSetMaxDuration },
		{ "SetTime", &AACountupTimerActor::execSetTime },
		{ "StartTimer", &AACountupTimerActor::execStartTimer },
		{ "StopTimer", &AACountupTimerActor::execStopTimer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AACountupTimerActor;
UClass* AACountupTimerActor::GetPrivateStaticClass()
{
	using TClass = AACountupTimerActor;
	if (!Z_Registration_Info_UClass_AACountupTimerActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ACountupTimerActor"),
			Z_Registration_Info_UClass_AACountupTimerActor.InnerSingleton,
			StaticRegisterNativesAACountupTimerActor,
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
	return Z_Registration_Info_UClass_AACountupTimerActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AACountupTimerActor_NoRegister()
{
	return AACountupTimerActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AACountupTimerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Timer/ACountupTimerActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialMinutes_MetaData[] = {
		{ "Category", "CountupTimer|Config" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Initial Minutes: minutos iniciales del countup." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialSeconds_MetaData[] = {
		{ "Category", "CountupTimer|Config" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Initial Seconds: segundos iniciales del countup." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialMilliseconds_MetaData[] = {
		{ "Category", "CountupTimer|Config" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Initial Milliseconds: milisegundos iniciales del countup." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStart_MetaData[] = {
		{ "Category", "CountupTimer|Config" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Auto Start: iniciar el countup automaticamente al comenzar." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaxDuration_MetaData[] = {
		{ "Category", "CountupTimer|Config" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Use Max Duration: activar un tope maximo para el countup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMinutes_MetaData[] = {
		{ "Category", "CountupTimer|Config" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Max Minutes: minutos del tope maximo del countup." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSeconds_MetaData[] = {
		{ "Category", "CountupTimer|Config" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Max Seconds: segundos del tope maximo del countup." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMilliseconds_MetaData[] = {
		{ "Category", "CountupTimer|Config" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Max Milliseconds: milisegundos del tope maximo del countup." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateIntervalSeconds_MetaData[] = {
		{ "Category", "CountupTimer|Config" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.005" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Update Interval Seconds: frecuencia de actualizacion del countup." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.005" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialElapsedMilliseconds_MetaData[] = {
		{ "Category", "CountupTimer|Runtime" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Initial Elapsed Milliseconds: tiempo inicial total del countup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTotalMilliseconds_MetaData[] = {
		{ "Category", "CountupTimer|Runtime" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Max Total Milliseconds: tope maximo total del countup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTotalMilliseconds_MetaData[] = {
		{ "Category", "CountupTimer|Runtime" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Elapsed Total Milliseconds: tiempo acumulado actual del countup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerState_MetaData[] = {
		{ "Category", "CountupTimer|Runtime" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Timer State: estado actual del countup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastRegisteredWholeSecond_MetaData[] = {
		{ "Category", "CountupTimer|Runtime" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Last Registered Whole Second: ultimo segundo entero registrado." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondLog_MetaData[] = {
		{ "Category", "CountupTimer|Runtime" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "Second Log: log de segundos enteros alcanzados por el countup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimerStarted_MetaData[] = {
		{ "Category", "CountupTimer|Events" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "On Timer Started: evento cuando inicia una corrida del countup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimerPaused_MetaData[] = {
		{ "Category", "CountupTimer|Events" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "On Timer Paused: evento cuando el countup queda en pausa." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimerResumed_MetaData[] = {
		{ "Category", "CountupTimer|Events" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "On Timer Resumed: evento cuando el countup se reanuda." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimerStopped_MetaData[] = {
		{ "Category", "CountupTimer|Events" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "On Timer Stopped: evento cuando se detiene el countup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimerUpdated_MetaData[] = {
		{ "Category", "CountupTimer|Events" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "On Timer Updated: evento de actualizacion del countup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSecondReached_MetaData[] = {
		{ "Category", "CountupTimer|Events" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "On Second Reached: evento cuando el countup alcanza un nuevo segundo entero." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimerFinished_MetaData[] = {
		{ "Category", "CountupTimer|Events" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "On Timer Finished: evento cuando finaliza el countup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCheckpointCaptured_MetaData[] = {
		{ "Category", "CountupTimer|Events" },
		{ "ModuleRelativePath", "Public/Timer/ACountupTimerActor.h" },
		{ "ToolTip", "On Checkpoint Captured: evento al capturar un checkpoint del countup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialMinutes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialMilliseconds;
	static void NewProp_bAutoStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStart;
	static void NewProp_bUseMaxDuration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaxDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMinutes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMilliseconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateIntervalSeconds;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InitialElapsedMilliseconds;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_MaxTotalMilliseconds;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ElapsedTotalMilliseconds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimerState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimerState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastRegisteredWholeSecond;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondLog_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SecondLog;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerPaused;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerResumed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerStopped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondReached;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCheckpointCaptured;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AACountupTimerActor_CaptureCheckpoint, "CaptureCheckpoint" }, // 566701679
		{ &Z_Construct_UFunction_AACountupTimerActor_ClearSecondLog, "ClearSecondLog" }, // 948244628
		{ &Z_Construct_UFunction_AACountupTimerActor_FinishTimer, "FinishTimer" }, // 2967975445
		{ &Z_Construct_UFunction_AACountupTimerActor_GetCurrentCheckpoint, "GetCurrentCheckpoint" }, // 3823781605
		{ &Z_Construct_UFunction_AACountupTimerActor_GetElapsedTime, "GetElapsedTime" }, // 2600707741
		{ &Z_Construct_UFunction_AACountupTimerActor_GetElapsedTotalMilliseconds, "GetElapsedTotalMilliseconds" }, // 2311201480
		{ &Z_Construct_UFunction_AACountupTimerActor_GetElapsedWholeSeconds, "GetElapsedWholeSeconds" }, // 4165828510
		{ &Z_Construct_UFunction_AACountupTimerActor_GetFormattedElapsedTime, "GetFormattedElapsedTime" }, // 1359090921
		{ &Z_Construct_UFunction_AACountupTimerActor_GetInitialTime, "GetInitialTime" }, // 656753108
		{ &Z_Construct_UFunction_AACountupTimerActor_GetInitialTotalMilliseconds, "GetInitialTotalMilliseconds" }, // 262674563
		{ &Z_Construct_UFunction_AACountupTimerActor_GetLastRegisteredWholeSecond, "GetLastRegisteredWholeSecond" }, // 1414116866
		{ &Z_Construct_UFunction_AACountupTimerActor_GetLoggedSecondCount, "GetLoggedSecondCount" }, // 309605735
		{ &Z_Construct_UFunction_AACountupTimerActor_GetMaxDuration, "GetMaxDuration" }, // 3192981019
		{ &Z_Construct_UFunction_AACountupTimerActor_GetMaxTotalMilliseconds, "GetMaxTotalMilliseconds" }, // 1423835365
		{ &Z_Construct_UFunction_AACountupTimerActor_GetNormalizedProgressToMax, "GetNormalizedProgressToMax" }, // 1447800265
		{ &Z_Construct_UFunction_AACountupTimerActor_GetTimerState, "GetTimerState" }, // 235161244
		{ &Z_Construct_UFunction_AACountupTimerActor_HasActiveMaxDuration, "HasActiveMaxDuration" }, // 3852863307
		{ &Z_Construct_UFunction_AACountupTimerActor_IsFinished, "IsFinished" }, // 3365382506
		{ &Z_Construct_UFunction_AACountupTimerActor_IsIdle, "IsIdle" }, // 3102700738
		{ &Z_Construct_UFunction_AACountupTimerActor_IsPaused, "IsPaused" }, // 2695912256
		{ &Z_Construct_UFunction_AACountupTimerActor_IsRunning, "IsRunning" }, // 1327783147
		{ &Z_Construct_UFunction_AACountupTimerActor_IsStopped, "IsStopped" }, // 461297035
		{ &Z_Construct_UFunction_AACountupTimerActor_PauseTimer, "PauseTimer" }, // 2085646524
		{ &Z_Construct_UFunction_AACountupTimerActor_ResetTimer, "ResetTimer" }, // 139948408
		{ &Z_Construct_UFunction_AACountupTimerActor_ResumeTimer, "ResumeTimer" }, // 2725681464
		{ &Z_Construct_UFunction_AACountupTimerActor_SetInitialTime, "SetInitialTime" }, // 2052927421
		{ &Z_Construct_UFunction_AACountupTimerActor_SetMaxDuration, "SetMaxDuration" }, // 3721303384
		{ &Z_Construct_UFunction_AACountupTimerActor_SetTime, "SetTime" }, // 2730782719
		{ &Z_Construct_UFunction_AACountupTimerActor_StartTimer, "StartTimer" }, // 1024651878
		{ &Z_Construct_UFunction_AACountupTimerActor_StopTimer, "StopTimer" }, // 842180368
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACountupTimerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_InitialMinutes = { "InitialMinutes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, InitialMinutes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialMinutes_MetaData), NewProp_InitialMinutes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_InitialSeconds = { "InitialSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, InitialSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialSeconds_MetaData), NewProp_InitialSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_InitialMilliseconds = { "InitialMilliseconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, InitialMilliseconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialMilliseconds_MetaData), NewProp_InitialMilliseconds_MetaData) };
void Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_bAutoStart_SetBit(void* Obj)
{
	((AACountupTimerActor*)Obj)->bAutoStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_bAutoStart = { "bAutoStart", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACountupTimerActor), &Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_bAutoStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStart_MetaData), NewProp_bAutoStart_MetaData) };
void Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_bUseMaxDuration_SetBit(void* Obj)
{
	((AACountupTimerActor*)Obj)->bUseMaxDuration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_bUseMaxDuration = { "bUseMaxDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AACountupTimerActor), &Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_bUseMaxDuration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaxDuration_MetaData), NewProp_bUseMaxDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_MaxMinutes = { "MaxMinutes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, MaxMinutes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMinutes_MetaData), NewProp_MaxMinutes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_MaxSeconds = { "MaxSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, MaxSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSeconds_MetaData), NewProp_MaxSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_MaxMilliseconds = { "MaxMilliseconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, MaxMilliseconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMilliseconds_MetaData), NewProp_MaxMilliseconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_UpdateIntervalSeconds = { "UpdateIntervalSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, UpdateIntervalSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateIntervalSeconds_MetaData), NewProp_UpdateIntervalSeconds_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_InitialElapsedMilliseconds = { "InitialElapsedMilliseconds", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, InitialElapsedMilliseconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialElapsedMilliseconds_MetaData), NewProp_InitialElapsedMilliseconds_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_MaxTotalMilliseconds = { "MaxTotalMilliseconds", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, MaxTotalMilliseconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTotalMilliseconds_MetaData), NewProp_MaxTotalMilliseconds_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_ElapsedTotalMilliseconds = { "ElapsedTotalMilliseconds", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, ElapsedTotalMilliseconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElapsedTotalMilliseconds_MetaData), NewProp_ElapsedTotalMilliseconds_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_TimerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_TimerState = { "TimerState", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, TimerState), Z_Construct_UEnum_TTSWeapons_ECountupTimerState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerState_MetaData), NewProp_TimerState_MetaData) }; // 2151309404
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_LastRegisteredWholeSecond = { "LastRegisteredWholeSecond", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, LastRegisteredWholeSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastRegisteredWholeSecond_MetaData), NewProp_LastRegisteredWholeSecond_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_SecondLog_Inner = { "SecondLog", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCountupSecondLogEntry, METADATA_PARAMS(0, nullptr) }; // 2805212220
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_SecondLog = { "SecondLog", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, SecondLog), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondLog_MetaData), NewProp_SecondLog_MetaData) }; // 2805212220
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_OnTimerStarted = { "OnTimerStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, OnTimerStarted), Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSimpleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimerStarted_MetaData), NewProp_OnTimerStarted_MetaData) }; // 3945938473
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_OnTimerPaused = { "OnTimerPaused", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, OnTimerPaused), Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSimpleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimerPaused_MetaData), NewProp_OnTimerPaused_MetaData) }; // 3945938473
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_OnTimerResumed = { "OnTimerResumed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, OnTimerResumed), Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSimpleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimerResumed_MetaData), NewProp_OnTimerResumed_MetaData) }; // 3945938473
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_OnTimerStopped = { "OnTimerStopped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, OnTimerStopped), Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSimpleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimerStopped_MetaData), NewProp_OnTimerStopped_MetaData) }; // 3945938473
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_OnTimerUpdated = { "OnTimerUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, OnTimerUpdated), Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerUpdatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimerUpdated_MetaData), NewProp_OnTimerUpdated_MetaData) }; // 421527198
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_OnSecondReached = { "OnSecondReached", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, OnSecondReached), Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSecondReachedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSecondReached_MetaData), NewProp_OnSecondReached_MetaData) }; // 4154708857
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_OnTimerFinished = { "OnTimerFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, OnTimerFinished), Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerSimpleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimerFinished_MetaData), NewProp_OnTimerFinished_MetaData) }; // 3945938473
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_OnCheckpointCaptured = { "OnCheckpointCaptured", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AACountupTimerActor, OnCheckpointCaptured), Z_Construct_UDelegateFunction_TTSWeapons_CountupTimerCheckpointCapturedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCheckpointCaptured_MetaData), NewProp_OnCheckpointCaptured_MetaData) }; // 2503868316
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AACountupTimerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_InitialMinutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_InitialSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_InitialMilliseconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_bAutoStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_bUseMaxDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_MaxMinutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_MaxSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_MaxMilliseconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_UpdateIntervalSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_InitialElapsedMilliseconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_MaxTotalMilliseconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_ElapsedTotalMilliseconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_TimerState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_TimerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_LastRegisteredWholeSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_SecondLog_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_SecondLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_OnTimerStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_OnTimerPaused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_OnTimerResumed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_OnTimerStopped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_OnTimerUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_OnSecondReached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_OnTimerFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AACountupTimerActor_Statics::NewProp_OnCheckpointCaptured,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACountupTimerActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AACountupTimerActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TTSWeapons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AACountupTimerActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AACountupTimerActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBPI_TimerCheckpoint_stt_NoRegister, (int32)VTABLE_OFFSET(AACountupTimerActor, IBPI_TimerCheckpoint_stt), false },  // 285968615
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AACountupTimerActor_Statics::ClassParams = {
	&AACountupTimerActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AACountupTimerActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AACountupTimerActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AACountupTimerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AACountupTimerActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AACountupTimerActor()
{
	if (!Z_Registration_Info_UClass_AACountupTimerActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AACountupTimerActor.OuterSingleton, Z_Construct_UClass_AACountupTimerActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AACountupTimerActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AACountupTimerActor);
AACountupTimerActor::~AACountupTimerActor() {}
// ********** End Class AACountupTimerActor ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h__Script_TTSWeapons_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECountupTimerState_StaticEnum, TEXT("ECountupTimerState"), &Z_Registration_Info_UEnum_ECountupTimerState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2151309404U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCountupSecondLogEntry::StaticStruct, Z_Construct_UScriptStruct_FCountupSecondLogEntry_Statics::NewStructOps, TEXT("CountupSecondLogEntry"), &Z_Registration_Info_UScriptStruct_FCountupSecondLogEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCountupSecondLogEntry), 2805212220U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AACountupTimerActor, AACountupTimerActor::StaticClass, TEXT("AACountupTimerActor"), &Z_Registration_Info_UClass_AACountupTimerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AACountupTimerActor), 4040423037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h__Script_TTSWeapons_460755189(TEXT("/Script/TTSWeapons"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h__Script_TTSWeapons_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h__Script_TTSWeapons_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h__Script_TTSWeapons_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h__Script_TTSWeapons_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h__Script_TTSWeapons_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_ACountupTimerActor_h__Script_TTSWeapons_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
