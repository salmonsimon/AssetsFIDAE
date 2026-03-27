// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Timer/BPI/BPI_TimerCheckpoint_stt.h"
#include "Timer/TimerCheckpointTypes_stt.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBPI_TimerCheckpoint_stt() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
TTSWEAPONS_API UClass* Z_Construct_UClass_UBPI_TimerCheckpoint_stt();
TTSWEAPONS_API UClass* Z_Construct_UClass_UBPI_TimerCheckpoint_stt_NoRegister();
TTSWEAPONS_API UScriptStruct* Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt();
UPackage* Z_Construct_UPackage__Script_TTSWeapons();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UBPI_TimerCheckpoint_stt Function BPI_CaptureTimerCheckpoint_stt *****
struct BPI_TimerCheckpoint_stt_eventBPI_CaptureTimerCheckpoint_stt_Parms
{
	FString CheckpointTag;
	FTimerCheckpointSnapshot_stt ReturnValue;
};
FTimerCheckpointSnapshot_stt IBPI_TimerCheckpoint_stt::BPI_CaptureTimerCheckpoint_stt(const FString& CheckpointTag)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_CaptureTimerCheckpoint_stt instead.");
	BPI_TimerCheckpoint_stt_eventBPI_CaptureTimerCheckpoint_stt_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UBPI_TimerCheckpoint_stt_BPI_CaptureTimerCheckpoint_stt = FName(TEXT("BPI_CaptureTimerCheckpoint_stt"));
FTimerCheckpointSnapshot_stt IBPI_TimerCheckpoint_stt::Execute_BPI_CaptureTimerCheckpoint_stt(UObject* O, const FString& CheckpointTag)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBPI_TimerCheckpoint_stt::StaticClass()));
	BPI_TimerCheckpoint_stt_eventBPI_CaptureTimerCheckpoint_stt_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UBPI_TimerCheckpoint_stt_BPI_CaptureTimerCheckpoint_stt);
	if (Func)
	{
		Parms.CheckpointTag=CheckpointTag;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IBPI_TimerCheckpoint_stt*)(O->GetNativeInterfaceAddress(UBPI_TimerCheckpoint_stt::StaticClass())))
	{
		Parms.ReturnValue = I->BPI_CaptureTimerCheckpoint_stt_Implementation(CheckpointTag);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_CaptureTimerCheckpoint_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Timer|BPI" },
		{ "ModuleRelativePath", "Public/Timer/BPI/BPI_TimerCheckpoint_stt.h" },
		{ "ToolTip", "Capture Timer Checkpoint: capturar y publicar un checkpoint del timer." },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_CaptureTimerCheckpoint_stt_Statics::NewProp_CheckpointTag = { "CheckpointTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPI_TimerCheckpoint_stt_eventBPI_CaptureTimerCheckpoint_stt_Parms, CheckpointTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointTag_MetaData), NewProp_CheckpointTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_CaptureTimerCheckpoint_stt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPI_TimerCheckpoint_stt_eventBPI_CaptureTimerCheckpoint_stt_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt, METADATA_PARAMS(0, nullptr) }; // 1439956601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_CaptureTimerCheckpoint_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_CaptureTimerCheckpoint_stt_Statics::NewProp_CheckpointTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_CaptureTimerCheckpoint_stt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_CaptureTimerCheckpoint_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_CaptureTimerCheckpoint_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPI_TimerCheckpoint_stt, nullptr, "BPI_CaptureTimerCheckpoint_stt", Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_CaptureTimerCheckpoint_stt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_CaptureTimerCheckpoint_stt_Statics::PropPointers), sizeof(BPI_TimerCheckpoint_stt_eventBPI_CaptureTimerCheckpoint_stt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_CaptureTimerCheckpoint_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_CaptureTimerCheckpoint_stt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BPI_TimerCheckpoint_stt_eventBPI_CaptureTimerCheckpoint_stt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_CaptureTimerCheckpoint_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_CaptureTimerCheckpoint_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBPI_TimerCheckpoint_stt::execBPI_CaptureTimerCheckpoint_stt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CheckpointTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimerCheckpointSnapshot_stt*)Z_Param__Result=P_THIS->BPI_CaptureTimerCheckpoint_stt_Implementation(Z_Param_CheckpointTag);
	P_NATIVE_END;
}
// ********** End Interface UBPI_TimerCheckpoint_stt Function BPI_CaptureTimerCheckpoint_stt *******

// ********** Begin Interface UBPI_TimerCheckpoint_stt Function BPI_GetTimerCheckpoint_stt *********
struct BPI_TimerCheckpoint_stt_eventBPI_GetTimerCheckpoint_stt_Parms
{
	FTimerCheckpointSnapshot_stt ReturnValue;
};
FTimerCheckpointSnapshot_stt IBPI_TimerCheckpoint_stt::BPI_GetTimerCheckpoint_stt() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_GetTimerCheckpoint_stt instead.");
	BPI_TimerCheckpoint_stt_eventBPI_GetTimerCheckpoint_stt_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UBPI_TimerCheckpoint_stt_BPI_GetTimerCheckpoint_stt = FName(TEXT("BPI_GetTimerCheckpoint_stt"));
FTimerCheckpointSnapshot_stt IBPI_TimerCheckpoint_stt::Execute_BPI_GetTimerCheckpoint_stt(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBPI_TimerCheckpoint_stt::StaticClass()));
	BPI_TimerCheckpoint_stt_eventBPI_GetTimerCheckpoint_stt_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UBPI_TimerCheckpoint_stt_BPI_GetTimerCheckpoint_stt);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IBPI_TimerCheckpoint_stt*)(O->GetNativeInterfaceAddress(UBPI_TimerCheckpoint_stt::StaticClass())))
	{
		Parms.ReturnValue = I->BPI_GetTimerCheckpoint_stt_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_GetTimerCheckpoint_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Timer|BPI" },
		{ "ModuleRelativePath", "Public/Timer/BPI/BPI_TimerCheckpoint_stt.h" },
		{ "ToolTip", "Get Timer Checkpoint: obtener snapshot actual del timer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_GetTimerCheckpoint_stt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPI_TimerCheckpoint_stt_eventBPI_GetTimerCheckpoint_stt_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimerCheckpointSnapshot_stt, METADATA_PARAMS(0, nullptr) }; // 1439956601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_GetTimerCheckpoint_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_GetTimerCheckpoint_stt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_GetTimerCheckpoint_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_GetTimerCheckpoint_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPI_TimerCheckpoint_stt, nullptr, "BPI_GetTimerCheckpoint_stt", Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_GetTimerCheckpoint_stt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_GetTimerCheckpoint_stt_Statics::PropPointers), sizeof(BPI_TimerCheckpoint_stt_eventBPI_GetTimerCheckpoint_stt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_GetTimerCheckpoint_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_GetTimerCheckpoint_stt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BPI_TimerCheckpoint_stt_eventBPI_GetTimerCheckpoint_stt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_GetTimerCheckpoint_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_GetTimerCheckpoint_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBPI_TimerCheckpoint_stt::execBPI_GetTimerCheckpoint_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimerCheckpointSnapshot_stt*)Z_Param__Result=P_THIS->BPI_GetTimerCheckpoint_stt_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UBPI_TimerCheckpoint_stt Function BPI_GetTimerCheckpoint_stt ***********

// ********** Begin Interface UBPI_TimerCheckpoint_stt *********************************************
void UBPI_TimerCheckpoint_stt::StaticRegisterNativesUBPI_TimerCheckpoint_stt()
{
	UClass* Class = UBPI_TimerCheckpoint_stt::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BPI_CaptureTimerCheckpoint_stt", &IBPI_TimerCheckpoint_stt::execBPI_CaptureTimerCheckpoint_stt },
		{ "BPI_GetTimerCheckpoint_stt", &IBPI_TimerCheckpoint_stt::execBPI_GetTimerCheckpoint_stt },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBPI_TimerCheckpoint_stt;
UClass* UBPI_TimerCheckpoint_stt::GetPrivateStaticClass()
{
	using TClass = UBPI_TimerCheckpoint_stt;
	if (!Z_Registration_Info_UClass_UBPI_TimerCheckpoint_stt.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BPI_TimerCheckpoint_stt"),
			Z_Registration_Info_UClass_UBPI_TimerCheckpoint_stt.InnerSingleton,
			StaticRegisterNativesUBPI_TimerCheckpoint_stt,
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
	return Z_Registration_Info_UClass_UBPI_TimerCheckpoint_stt.InnerSingleton;
}
UClass* Z_Construct_UClass_UBPI_TimerCheckpoint_stt_NoRegister()
{
	return UBPI_TimerCheckpoint_stt::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBPI_TimerCheckpoint_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Timer/BPI/BPI_TimerCheckpoint_stt.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_CaptureTimerCheckpoint_stt, "BPI_CaptureTimerCheckpoint_stt" }, // 4022427956
		{ &Z_Construct_UFunction_UBPI_TimerCheckpoint_stt_BPI_GetTimerCheckpoint_stt, "BPI_GetTimerCheckpoint_stt" }, // 1775243583
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBPI_TimerCheckpoint_stt>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBPI_TimerCheckpoint_stt_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_TTSWeapons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_TimerCheckpoint_stt_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBPI_TimerCheckpoint_stt_Statics::ClassParams = {
	&UBPI_TimerCheckpoint_stt::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_TimerCheckpoint_stt_Statics::Class_MetaDataParams), Z_Construct_UClass_UBPI_TimerCheckpoint_stt_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBPI_TimerCheckpoint_stt()
{
	if (!Z_Registration_Info_UClass_UBPI_TimerCheckpoint_stt.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBPI_TimerCheckpoint_stt.OuterSingleton, Z_Construct_UClass_UBPI_TimerCheckpoint_stt_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBPI_TimerCheckpoint_stt.OuterSingleton;
}
UBPI_TimerCheckpoint_stt::UBPI_TimerCheckpoint_stt(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBPI_TimerCheckpoint_stt);
// ********** End Interface UBPI_TimerCheckpoint_stt ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_BPI_BPI_TimerCheckpoint_stt_h__Script_TTSWeapons_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBPI_TimerCheckpoint_stt, UBPI_TimerCheckpoint_stt::StaticClass, TEXT("UBPI_TimerCheckpoint_stt"), &Z_Registration_Info_UClass_UBPI_TimerCheckpoint_stt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBPI_TimerCheckpoint_stt), 285968615U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_BPI_BPI_TimerCheckpoint_stt_h__Script_TTSWeapons_3601184367(TEXT("/Script/TTSWeapons"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_BPI_BPI_TimerCheckpoint_stt_h__Script_TTSWeapons_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Timer_BPI_BPI_TimerCheckpoint_stt_h__Script_TTSWeapons_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
