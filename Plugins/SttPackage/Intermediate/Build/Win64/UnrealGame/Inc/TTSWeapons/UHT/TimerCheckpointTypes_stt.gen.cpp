// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Timer/TimerCheckpointTypes_stt.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTimerCheckpointTypes_stt() {}

// ********** Begin Cross Module References ********************************************************
TTSWEAPONS_API UEnum* Z_Construct_UEnum_TTSWeapons_ETimerCheckpointKind_stt();
TTSWEAPONS_API UEnum* Z_Construct_UEnum_TTSWeapons_ETimerCheckpointState_stt();
TTSWEAPONS_API UScriptStruct* Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt();
UPackage* Z_Construct_UPackage__Script_TTSWeapons();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ETimerCheckpointKind_stt **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimerCheckpointKind_stt;
static UEnum* ETimerCheckpointKind_stt_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETimerCheckpointKind_stt.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETimerCheckpointKind_stt.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TTSWeapons_ETimerCheckpointKind_stt, (UObject*)Z_Construct_UPackage__Script_TTSWeapons(), TEXT("ETimerCheckpointKind_stt"));
	}
	return Z_Registration_Info_UEnum_ETimerCheckpointKind_stt.OuterSingleton;
}
template<> TTSWEAPONS_API UEnum* StaticEnum<ETimerCheckpointKind_stt>()
{
	return ETimerCheckpointKind_stt_StaticEnum();
}
struct Z_Construct_UEnum_TTSWeapons_ETimerCheckpointKind_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Tipo de snapshot expuesto por el sistema de checkpoint.\n// Se usa para distinguir si el tiempo capturado representa:\n// - tiempo restante de un countdown\n// - tiempo acumulado de un countup\n" },
		{ "CountdownRemaining.DisplayName", "Countdown Remaining" },
		{ "CountdownRemaining.Name", "ETimerCheckpointKind_stt::CountdownRemaining" },
		{ "CountupElapsed.DisplayName", "Countup Elapsed" },
		{ "CountupElapsed.Name", "ETimerCheckpointKind_stt::CountupElapsed" },
		{ "ModuleRelativePath", "Public/Timer/TimerCheckpointTypes_stt.h" },
		{ "ToolTip", "Tipo de snapshot expuesto por el sistema de checkpoint.\nSe usa para distinguir si el tiempo capturado representa:\n- tiempo restante de un countdown\n- tiempo acumulado de un countup" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETimerCheckpointKind_stt::CountdownRemaining", (int64)ETimerCheckpointKind_stt::CountdownRemaining },
		{ "ETimerCheckpointKind_stt::CountupElapsed", (int64)ETimerCheckpointKind_stt::CountupElapsed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TTSWeapons_ETimerCheckpointKind_stt_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons,
	nullptr,
	"ETimerCheckpointKind_stt",
	"ETimerCheckpointKind_stt",
	Z_Construct_UEnum_TTSWeapons_ETimerCheckpointKind_stt_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TTSWeapons_ETimerCheckpointKind_stt_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TTSWeapons_ETimerCheckpointKind_stt_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TTSWeapons_ETimerCheckpointKind_stt_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TTSWeapons_ETimerCheckpointKind_stt()
{
	if (!Z_Registration_Info_UEnum_ETimerCheckpointKind_stt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimerCheckpointKind_stt.InnerSingleton, Z_Construct_UEnum_TTSWeapons_ETimerCheckpointKind_stt_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETimerCheckpointKind_stt.InnerSingleton;
}
// ********** End Enum ETimerCheckpointKind_stt ****************************************************

// ********** Begin Enum ETimerCheckpointState_stt *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimerCheckpointState_stt;
static UEnum* ETimerCheckpointState_stt_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETimerCheckpointState_stt.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETimerCheckpointState_stt.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TTSWeapons_ETimerCheckpointState_stt, (UObject*)Z_Construct_UPackage__Script_TTSWeapons(), TEXT("ETimerCheckpointState_stt"));
	}
	return Z_Registration_Info_UEnum_ETimerCheckpointState_stt.OuterSingleton;
}
template<> TTSWEAPONS_API UEnum* StaticEnum<ETimerCheckpointState_stt>()
{
	return ETimerCheckpointState_stt_StaticEnum();
}
struct Z_Construct_UEnum_TTSWeapons_ETimerCheckpointState_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Estado generico del timer al momento de capturar el checkpoint.\n// Se separa del enum interno de cada actor para poder usar una sola struct\n// compartida entre countdown, countup y la BPI.\n" },
		{ "Finished.DisplayName", "Finished" },
		{ "Finished.Name", "ETimerCheckpointState_stt::Finished" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "ETimerCheckpointState_stt::Idle" },
		{ "ModuleRelativePath", "Public/Timer/TimerCheckpointTypes_stt.h" },
		{ "Paused.DisplayName", "Paused" },
		{ "Paused.Name", "ETimerCheckpointState_stt::Paused" },
		{ "Running.DisplayName", "Running" },
		{ "Running.Name", "ETimerCheckpointState_stt::Running" },
		{ "Stopped.DisplayName", "Stopped" },
		{ "Stopped.Name", "ETimerCheckpointState_stt::Stopped" },
		{ "ToolTip", "Estado generico del timer al momento de capturar el checkpoint.\nSe separa del enum interno de cada actor para poder usar una sola struct\ncompartida entre countdown, countup y la BPI." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETimerCheckpointState_stt::Idle", (int64)ETimerCheckpointState_stt::Idle },
		{ "ETimerCheckpointState_stt::Running", (int64)ETimerCheckpointState_stt::Running },
		{ "ETimerCheckpointState_stt::Paused", (int64)ETimerCheckpointState_stt::Paused },
		{ "ETimerCheckpointState_stt::Stopped", (int64)ETimerCheckpointState_stt::Stopped },
		{ "ETimerCheckpointState_stt::Finished", (int64)ETimerCheckpointState_stt::Finished },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TTSWeapons_ETimerCheckpointState_stt_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TTSWeapons,
	nullptr,
	"ETimerCheckpointState_stt",
	"ETimerCheckpointState_stt",
	Z_Construct_UEnum_TTSWeapons_ETimerCheckpointState_stt_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TTSWeapons_ETimerCheckpointState_stt_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TTSWeapons_ETimerCheckpointState_stt_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TTSWeapons_ETimerCheckpointState_stt_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TTSWeapons_ETimerCheckpointState_stt()
{
	if (!Z_Registration_Info_UEnum_ETimerCheckpointState_stt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimerCheckpointState_stt.InnerSingleton, Z_Construct_UEnum_TTSWeapons_ETimerCheckpointState_stt_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETimerCheckpointState_stt.InnerSingleton;
}
// ********** End Enum ETimerCheckpointState_stt ***************************************************

// ********** Begin ScriptStruct FTimerCheckpointSnapshot_stt **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTimerCheckpointSnapshot_stt;
class UScriptStruct* FTimerCheckpointSnapshot_stt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTimerCheckpointSnapshot_stt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTimerCheckpointSnapshot_stt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt, (UObject*)Z_Construct_UPackage__Script_TTSWeapons(), TEXT("TimerCheckpointSnapshot_stt"));
	}
	return Z_Registration_Info_UScriptStruct_FTimerCheckpointSnapshot_stt.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Snapshot comun para countup y countdown.\n// Se puede guardar en arrays, pasar por dispatchers o recuperar por BPI.\n" },
		{ "ModuleRelativePath", "Public/Timer/TimerCheckpointTypes_stt.h" },
		{ "ToolTip", "Snapshot comun para countup y countdown.\nSe puede guardar en arrays, pasar por dispatchers o recuperar por BPI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointTag_MetaData[] = {
		{ "Category", "Timer|Checkpoint" },
		{ "ModuleRelativePath", "Public/Timer/TimerCheckpointTypes_stt.h" },
		{ "ToolTip", "Checkpoint Tag: etiqueta del checkpoint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerKind_MetaData[] = {
		{ "Category", "Timer|Checkpoint" },
		{ "ModuleRelativePath", "Public/Timer/TimerCheckpointTypes_stt.h" },
		{ "ToolTip", "Timer Kind: tipo de tiempo capturado." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerState_MetaData[] = {
		{ "Category", "Timer|Checkpoint" },
		{ "ModuleRelativePath", "Public/Timer/TimerCheckpointTypes_stt.h" },
		{ "ToolTip", "Timer State: estado del timer al capturar." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minutes_MetaData[] = {
		{ "Category", "Timer|Checkpoint" },
		{ "ModuleRelativePath", "Public/Timer/TimerCheckpointTypes_stt.h" },
		{ "ToolTip", "Minutes: minutos del tiempo capturado." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[] = {
		{ "Category", "Timer|Checkpoint" },
		{ "ModuleRelativePath", "Public/Timer/TimerCheckpointTypes_stt.h" },
		{ "ToolTip", "Seconds: segundos del tiempo capturado." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Milliseconds_MetaData[] = {
		{ "Category", "Timer|Checkpoint" },
		{ "ModuleRelativePath", "Public/Timer/TimerCheckpointTypes_stt.h" },
		{ "ToolTip", "Milliseconds: milisegundos del tiempo capturado." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalMilliseconds_MetaData[] = {
		{ "Category", "Timer|Checkpoint" },
		{ "ModuleRelativePath", "Public/Timer/TimerCheckpointTypes_stt.h" },
		{ "ToolTip", "Total Milliseconds: tiempo total en milisegundos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WholeSeconds_MetaData[] = {
		{ "Category", "Timer|Checkpoint" },
		{ "ModuleRelativePath", "Public/Timer/TimerCheckpointTypes_stt.h" },
		{ "ToolTip", "Whole Seconds: segundo entero del checkpoint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormattedTime_MetaData[] = {
		{ "Category", "Timer|Checkpoint" },
		{ "ModuleRelativePath", "Public/Timer/TimerCheckpointTypes_stt.h" },
		{ "ToolTip", "Formatted Time: tiempo formateado del checkpoint." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CheckpointTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimerKind_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimerKind;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimerState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimerState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Minutes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Milliseconds;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_TotalMilliseconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WholeSeconds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FormattedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimerCheckpointSnapshot_stt>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_CheckpointTag = { "CheckpointTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimerCheckpointSnapshot_stt, CheckpointTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointTag_MetaData), NewProp_CheckpointTag_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_TimerKind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_TimerKind = { "TimerKind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimerCheckpointSnapshot_stt, TimerKind), Z_Construct_UEnum_TTSWeapons_ETimerCheckpointKind_stt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerKind_MetaData), NewProp_TimerKind_MetaData) }; // 4033887380
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_TimerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_TimerState = { "TimerState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimerCheckpointSnapshot_stt, TimerState), Z_Construct_UEnum_TTSWeapons_ETimerCheckpointState_stt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerState_MetaData), NewProp_TimerState_MetaData) }; // 214000013
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimerCheckpointSnapshot_stt, Minutes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minutes_MetaData), NewProp_Minutes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimerCheckpointSnapshot_stt, Seconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seconds_MetaData), NewProp_Seconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_Milliseconds = { "Milliseconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimerCheckpointSnapshot_stt, Milliseconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Milliseconds_MetaData), NewProp_Milliseconds_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_TotalMilliseconds = { "TotalMilliseconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimerCheckpointSnapshot_stt, TotalMilliseconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalMilliseconds_MetaData), NewProp_TotalMilliseconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_WholeSeconds = { "WholeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimerCheckpointSnapshot_stt, WholeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WholeSeconds_MetaData), NewProp_WholeSeconds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_FormattedTime = { "FormattedTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimerCheckpointSnapshot_stt, FormattedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormattedTime_MetaData), NewProp_FormattedTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_CheckpointTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_TimerKind_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_TimerKind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_TimerState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_TimerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_Minutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_Seconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_Milliseconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_TotalMilliseconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_WholeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewProp_FormattedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TTSWeapons,
	nullptr,
	&NewStructOps,
	"TimerCheckpointSnapshot_stt",
	Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::PropPointers),
	sizeof(FTimerCheckpointSnapshot_stt),
	alignof(FTimerCheckpointSnapshot_stt),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt()
{
	if (!Z_Registration_Info_UScriptStruct_FTimerCheckpointSnapshot_stt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTimerCheckpointSnapshot_stt.InnerSingleton, Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTimerCheckpointSnapshot_stt.InnerSingleton;
}
// ********** End ScriptStruct FTimerCheckpointSnapshot_stt ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_TimerCheckpointTypes_stt_h__Script_TTSWeapons_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETimerCheckpointKind_stt_StaticEnum, TEXT("ETimerCheckpointKind_stt"), &Z_Registration_Info_UEnum_ETimerCheckpointKind_stt, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4033887380U) },
		{ ETimerCheckpointState_stt_StaticEnum, TEXT("ETimerCheckpointState_stt"), &Z_Registration_Info_UEnum_ETimerCheckpointState_stt, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 214000013U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTimerCheckpointSnapshot_stt::StaticStruct, Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt_Statics::NewStructOps, TEXT("TimerCheckpointSnapshot_stt"), &Z_Registration_Info_UScriptStruct_FTimerCheckpointSnapshot_stt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimerCheckpointSnapshot_stt), 1439956601U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_TimerCheckpointTypes_stt_h__Script_TTSWeapons_2113743718(TEXT("/Script/TTSWeapons"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_TimerCheckpointTypes_stt_h__Script_TTSWeapons_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_TimerCheckpointTypes_stt_h__Script_TTSWeapons_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_TimerCheckpointTypes_stt_h__Script_TTSWeapons_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_TimerCheckpointTypes_stt_h__Script_TTSWeapons_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
