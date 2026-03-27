// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasePool/BPC/BPC_PoolManager_stt.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBPC_PoolManager_stt() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TTSWEAPONS_API UClass* Z_Construct_UClass_ABP_PoolableActorBase_stt_NoRegister();
TTSWEAPONS_API UClass* Z_Construct_UClass_UBPC_PoolManager_stt();
TTSWEAPONS_API UClass* Z_Construct_UClass_UBPC_PoolManager_stt_NoRegister();
TTSWEAPONS_API UClass* Z_Construct_UClass_UBPI_PoolableActor_stt_NoRegister();
UPackage* Z_Construct_UPackage__Script_TTSWeapons();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBPC_PoolManager_stt Function FillPool_stt *******************************
struct Z_Construct_UFunction_UBPC_PoolManager_stt_FillPool_stt_Statics
{
	struct BPC_PoolManager_stt_eventFillPool_stt_Parms
	{
		int32 Amount;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt" },
		{ "Comment", "// Agrega instancias al pool.\n" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
		{ "ToolTip", "Agrega instancias al pool." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBPC_PoolManager_stt_FillPool_stt_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPC_PoolManager_stt_eventFillPool_stt_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBPC_PoolManager_stt_FillPool_stt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPC_PoolManager_stt_eventFillPool_stt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPC_PoolManager_stt_FillPool_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPC_PoolManager_stt_FillPool_stt_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPC_PoolManager_stt_FillPool_stt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_FillPool_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPC_PoolManager_stt_FillPool_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPC_PoolManager_stt, nullptr, "FillPool_stt", Z_Construct_UFunction_UBPC_PoolManager_stt_FillPool_stt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_FillPool_stt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_FillPool_stt_Statics::BPC_PoolManager_stt_eventFillPool_stt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_FillPool_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPC_PoolManager_stt_FillPool_stt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_FillPool_stt_Statics::BPC_PoolManager_stt_eventFillPool_stt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPC_PoolManager_stt_FillPool_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPC_PoolManager_stt_FillPool_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBPC_PoolManager_stt::execFillPool_stt)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->FillPool_stt(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UBPC_PoolManager_stt Function FillPool_stt *********************************

// ********** Begin Class UBPC_PoolManager_stt Function FinalizeReturnActorToPool_stt **************
struct Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPool_stt_Statics
{
	struct BPC_PoolManager_stt_eventFinalizeReturnActorToPool_stt_Parms
	{
		ABP_PoolableActorBase_stt* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt" },
		{ "Comment", "// Completa retorno al pool en fase 2 (finalize).\n// Normalmente lo invoca el actor desde FinalizeReturnToPool_stt.\n" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
		{ "ToolTip", "Completa retorno al pool en fase 2 (finalize).\nNormalmente lo invoca el actor desde FinalizeReturnToPool_stt." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPool_stt_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPC_PoolManager_stt_eventFinalizeReturnActorToPool_stt_Parms, Actor), Z_Construct_UClass_ABP_PoolableActorBase_stt_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPool_stt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BPC_PoolManager_stt_eventFinalizeReturnActorToPool_stt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPool_stt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BPC_PoolManager_stt_eventFinalizeReturnActorToPool_stt_Parms), &Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPool_stt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPool_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPool_stt_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPool_stt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPool_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPool_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPC_PoolManager_stt, nullptr, "FinalizeReturnActorToPool_stt", Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPool_stt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPool_stt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPool_stt_Statics::BPC_PoolManager_stt_eventFinalizeReturnActorToPool_stt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPool_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPool_stt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPool_stt_Statics::BPC_PoolManager_stt_eventFinalizeReturnActorToPool_stt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPool_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPool_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBPC_PoolManager_stt::execFinalizeReturnActorToPool_stt)
{
	P_GET_OBJECT(ABP_PoolableActorBase_stt,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FinalizeReturnActorToPool_stt(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UBPC_PoolManager_stt Function FinalizeReturnActorToPool_stt ****************

// ********** Begin Class UBPC_PoolManager_stt Function FinalizeReturnActorToPoolByBPI_stt *********
struct Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPoolByBPI_stt_Statics
{
	struct BPC_PoolManager_stt_eventFinalizeReturnActorToPoolByBPI_stt_Parms
	{
		TScriptInterface<IBPI_PoolableActor_stt> PoolableActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt" },
		{ "Comment", "// Variante BPI para evitar hard cast en Blueprint.\n" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
		{ "ToolTip", "Variante BPI para evitar hard cast en Blueprint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolableActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_PoolableActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPoolByBPI_stt_Statics::NewProp_PoolableActor = { "PoolableActor", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPC_PoolManager_stt_eventFinalizeReturnActorToPoolByBPI_stt_Parms, PoolableActor), Z_Construct_UClass_UBPI_PoolableActor_stt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolableActor_MetaData), NewProp_PoolableActor_MetaData) };
void Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPoolByBPI_stt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BPC_PoolManager_stt_eventFinalizeReturnActorToPoolByBPI_stt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPoolByBPI_stt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BPC_PoolManager_stt_eventFinalizeReturnActorToPoolByBPI_stt_Parms), &Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPoolByBPI_stt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPoolByBPI_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPoolByBPI_stt_Statics::NewProp_PoolableActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPoolByBPI_stt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPoolByBPI_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPoolByBPI_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPC_PoolManager_stt, nullptr, "FinalizeReturnActorToPoolByBPI_stt", Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPoolByBPI_stt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPoolByBPI_stt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPoolByBPI_stt_Statics::BPC_PoolManager_stt_eventFinalizeReturnActorToPoolByBPI_stt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPoolByBPI_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPoolByBPI_stt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPoolByBPI_stt_Statics::BPC_PoolManager_stt_eventFinalizeReturnActorToPoolByBPI_stt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPoolByBPI_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPoolByBPI_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBPC_PoolManager_stt::execFinalizeReturnActorToPoolByBPI_stt)
{
	P_GET_TINTERFACE_REF(IBPI_PoolableActor_stt,Z_Param_Out_PoolableActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FinalizeReturnActorToPoolByBPI_stt(Z_Param_Out_PoolableActor);
	P_NATIVE_END;
}
// ********** End Class UBPC_PoolManager_stt Function FinalizeReturnActorToPoolByBPI_stt ***********

// ********** Begin Class UBPC_PoolManager_stt Function GetActorFromPool_stt ***********************
struct Z_Construct_UFunction_UBPC_PoolManager_stt_GetActorFromPool_stt_Statics
{
	struct BPC_PoolManager_stt_eventGetActorFromPool_stt_Parms
	{
		FTransform SpawnWorldTransform;
		float AutoReturnDelaySeconds;
		ABP_PoolableActorBase_stt* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt" },
		{ "Comment", "// Obtiene un actor del pool y lo activa en el transform indicado.\n// Si AutoReturnDelaySeconds > 0, el actor inicia timer para RequestDeactivateToPool_stt.\n" },
		{ "CPP_Default_AutoReturnDelaySeconds", "0.000000" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
		{ "ToolTip", "Obtiene un actor del pool y lo activa en el transform indicado.\nSi AutoReturnDelaySeconds > 0, el actor inicia timer para RequestDeactivateToPool_stt." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnWorldTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnWorldTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoReturnDelaySeconds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBPC_PoolManager_stt_GetActorFromPool_stt_Statics::NewProp_SpawnWorldTransform = { "SpawnWorldTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPC_PoolManager_stt_eventGetActorFromPool_stt_Parms, SpawnWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnWorldTransform_MetaData), NewProp_SpawnWorldTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBPC_PoolManager_stt_GetActorFromPool_stt_Statics::NewProp_AutoReturnDelaySeconds = { "AutoReturnDelaySeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPC_PoolManager_stt_eventGetActorFromPool_stt_Parms, AutoReturnDelaySeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPC_PoolManager_stt_GetActorFromPool_stt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPC_PoolManager_stt_eventGetActorFromPool_stt_Parms, ReturnValue), Z_Construct_UClass_ABP_PoolableActorBase_stt_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPC_PoolManager_stt_GetActorFromPool_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPC_PoolManager_stt_GetActorFromPool_stt_Statics::NewProp_SpawnWorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPC_PoolManager_stt_GetActorFromPool_stt_Statics::NewProp_AutoReturnDelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPC_PoolManager_stt_GetActorFromPool_stt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_GetActorFromPool_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPC_PoolManager_stt_GetActorFromPool_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPC_PoolManager_stt, nullptr, "GetActorFromPool_stt", Z_Construct_UFunction_UBPC_PoolManager_stt_GetActorFromPool_stt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_GetActorFromPool_stt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_GetActorFromPool_stt_Statics::BPC_PoolManager_stt_eventGetActorFromPool_stt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_GetActorFromPool_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPC_PoolManager_stt_GetActorFromPool_stt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_GetActorFromPool_stt_Statics::BPC_PoolManager_stt_eventGetActorFromPool_stt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPC_PoolManager_stt_GetActorFromPool_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPC_PoolManager_stt_GetActorFromPool_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBPC_PoolManager_stt::execGetActorFromPool_stt)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnWorldTransform);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AutoReturnDelaySeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ABP_PoolableActorBase_stt**)Z_Param__Result=P_THIS->GetActorFromPool_stt(Z_Param_Out_SpawnWorldTransform,Z_Param_AutoReturnDelaySeconds);
	P_NATIVE_END;
}
// ********** End Class UBPC_PoolManager_stt Function GetActorFromPool_stt *************************

// ********** Begin Class UBPC_PoolManager_stt Function GetAvailableCount_stt **********************
struct Z_Construct_UFunction_UBPC_PoolManager_stt_GetAvailableCount_stt_Statics
{
	struct BPC_PoolManager_stt_eventGetAvailableCount_stt_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBPC_PoolManager_stt_GetAvailableCount_stt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPC_PoolManager_stt_eventGetAvailableCount_stt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPC_PoolManager_stt_GetAvailableCount_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPC_PoolManager_stt_GetAvailableCount_stt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_GetAvailableCount_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPC_PoolManager_stt_GetAvailableCount_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPC_PoolManager_stt, nullptr, "GetAvailableCount_stt", Z_Construct_UFunction_UBPC_PoolManager_stt_GetAvailableCount_stt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_GetAvailableCount_stt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_GetAvailableCount_stt_Statics::BPC_PoolManager_stt_eventGetAvailableCount_stt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_GetAvailableCount_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPC_PoolManager_stt_GetAvailableCount_stt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_GetAvailableCount_stt_Statics::BPC_PoolManager_stt_eventGetAvailableCount_stt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPC_PoolManager_stt_GetAvailableCount_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPC_PoolManager_stt_GetAvailableCount_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBPC_PoolManager_stt::execGetAvailableCount_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAvailableCount_stt();
	P_NATIVE_END;
}
// ********** End Class UBPC_PoolManager_stt Function GetAvailableCount_stt ************************

// ********** Begin Class UBPC_PoolManager_stt Function GetTotalCount_stt **************************
struct Z_Construct_UFunction_UBPC_PoolManager_stt_GetTotalCount_stt_Statics
{
	struct BPC_PoolManager_stt_eventGetTotalCount_stt_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBPC_PoolManager_stt_GetTotalCount_stt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPC_PoolManager_stt_eventGetTotalCount_stt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPC_PoolManager_stt_GetTotalCount_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPC_PoolManager_stt_GetTotalCount_stt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_GetTotalCount_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPC_PoolManager_stt_GetTotalCount_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPC_PoolManager_stt, nullptr, "GetTotalCount_stt", Z_Construct_UFunction_UBPC_PoolManager_stt_GetTotalCount_stt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_GetTotalCount_stt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_GetTotalCount_stt_Statics::BPC_PoolManager_stt_eventGetTotalCount_stt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_GetTotalCount_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPC_PoolManager_stt_GetTotalCount_stt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_GetTotalCount_stt_Statics::BPC_PoolManager_stt_eventGetTotalCount_stt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPC_PoolManager_stt_GetTotalCount_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPC_PoolManager_stt_GetTotalCount_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBPC_PoolManager_stt::execGetTotalCount_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTotalCount_stt();
	P_NATIVE_END;
}
// ********** End Class UBPC_PoolManager_stt Function GetTotalCount_stt ****************************

// ********** Begin Class UBPC_PoolManager_stt Function InitPool_stt *******************************
struct Z_Construct_UFunction_UBPC_PoolManager_stt_InitPool_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt" },
		{ "Comment", "// Inicializa el pool solo una vez.\n" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
		{ "ToolTip", "Inicializa el pool solo una vez." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPC_PoolManager_stt_InitPool_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPC_PoolManager_stt, nullptr, "InitPool_stt", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_InitPool_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPC_PoolManager_stt_InitPool_stt_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBPC_PoolManager_stt_InitPool_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPC_PoolManager_stt_InitPool_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBPC_PoolManager_stt::execInitPool_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitPool_stt();
	P_NATIVE_END;
}
// ********** End Class UBPC_PoolManager_stt Function InitPool_stt *********************************

// ********** Begin Class UBPC_PoolManager_stt Function IsActorOwnedByPool_stt *********************
struct Z_Construct_UFunction_UBPC_PoolManager_stt_IsActorOwnedByPool_stt_Statics
{
	struct BPC_PoolManager_stt_eventIsActorOwnedByPool_stt_Parms
	{
		const ABP_PoolableActorBase_stt* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPC_PoolManager_stt_IsActorOwnedByPool_stt_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPC_PoolManager_stt_eventIsActorOwnedByPool_stt_Parms, Actor), Z_Construct_UClass_ABP_PoolableActorBase_stt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
void Z_Construct_UFunction_UBPC_PoolManager_stt_IsActorOwnedByPool_stt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BPC_PoolManager_stt_eventIsActorOwnedByPool_stt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPC_PoolManager_stt_IsActorOwnedByPool_stt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BPC_PoolManager_stt_eventIsActorOwnedByPool_stt_Parms), &Z_Construct_UFunction_UBPC_PoolManager_stt_IsActorOwnedByPool_stt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPC_PoolManager_stt_IsActorOwnedByPool_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPC_PoolManager_stt_IsActorOwnedByPool_stt_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPC_PoolManager_stt_IsActorOwnedByPool_stt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_IsActorOwnedByPool_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPC_PoolManager_stt_IsActorOwnedByPool_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPC_PoolManager_stt, nullptr, "IsActorOwnedByPool_stt", Z_Construct_UFunction_UBPC_PoolManager_stt_IsActorOwnedByPool_stt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_IsActorOwnedByPool_stt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_IsActorOwnedByPool_stt_Statics::BPC_PoolManager_stt_eventIsActorOwnedByPool_stt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_IsActorOwnedByPool_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPC_PoolManager_stt_IsActorOwnedByPool_stt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_IsActorOwnedByPool_stt_Statics::BPC_PoolManager_stt_eventIsActorOwnedByPool_stt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPC_PoolManager_stt_IsActorOwnedByPool_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPC_PoolManager_stt_IsActorOwnedByPool_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBPC_PoolManager_stt::execIsActorOwnedByPool_stt)
{
	P_GET_OBJECT(ABP_PoolableActorBase_stt,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActorOwnedByPool_stt(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UBPC_PoolManager_stt Function IsActorOwnedByPool_stt ***********************

// ********** Begin Class UBPC_PoolManager_stt Function IsManagingPhysicsAndGravityState_stt *******
struct Z_Construct_UFunction_UBPC_PoolManager_stt_IsManagingPhysicsAndGravityState_stt_Statics
{
	struct BPC_PoolManager_stt_eventIsManagingPhysicsAndGravityState_stt_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt|Physics" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBPC_PoolManager_stt_IsManagingPhysicsAndGravityState_stt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BPC_PoolManager_stt_eventIsManagingPhysicsAndGravityState_stt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPC_PoolManager_stt_IsManagingPhysicsAndGravityState_stt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BPC_PoolManager_stt_eventIsManagingPhysicsAndGravityState_stt_Parms), &Z_Construct_UFunction_UBPC_PoolManager_stt_IsManagingPhysicsAndGravityState_stt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPC_PoolManager_stt_IsManagingPhysicsAndGravityState_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPC_PoolManager_stt_IsManagingPhysicsAndGravityState_stt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_IsManagingPhysicsAndGravityState_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPC_PoolManager_stt_IsManagingPhysicsAndGravityState_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPC_PoolManager_stt, nullptr, "IsManagingPhysicsAndGravityState_stt", Z_Construct_UFunction_UBPC_PoolManager_stt_IsManagingPhysicsAndGravityState_stt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_IsManagingPhysicsAndGravityState_stt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_IsManagingPhysicsAndGravityState_stt_Statics::BPC_PoolManager_stt_eventIsManagingPhysicsAndGravityState_stt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_IsManagingPhysicsAndGravityState_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPC_PoolManager_stt_IsManagingPhysicsAndGravityState_stt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_IsManagingPhysicsAndGravityState_stt_Statics::BPC_PoolManager_stt_eventIsManagingPhysicsAndGravityState_stt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPC_PoolManager_stt_IsManagingPhysicsAndGravityState_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPC_PoolManager_stt_IsManagingPhysicsAndGravityState_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBPC_PoolManager_stt::execIsManagingPhysicsAndGravityState_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsManagingPhysicsAndGravityState_stt();
	P_NATIVE_END;
}
// ********** End Class UBPC_PoolManager_stt Function IsManagingPhysicsAndGravityState_stt *********

// ********** Begin Class UBPC_PoolManager_stt Function RequestReturnActorToPool_stt ***************
struct Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPool_stt_Statics
{
	struct BPC_PoolManager_stt_eventRequestReturnActorToPool_stt_Parms
	{
		ABP_PoolableActorBase_stt* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt" },
		{ "Comment", "// Solicita retorno al pool en fase 1 (deactivate request).\n" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
		{ "ToolTip", "Solicita retorno al pool en fase 1 (deactivate request)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPool_stt_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPC_PoolManager_stt_eventRequestReturnActorToPool_stt_Parms, Actor), Z_Construct_UClass_ABP_PoolableActorBase_stt_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPool_stt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BPC_PoolManager_stt_eventRequestReturnActorToPool_stt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPool_stt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BPC_PoolManager_stt_eventRequestReturnActorToPool_stt_Parms), &Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPool_stt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPool_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPool_stt_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPool_stt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPool_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPool_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPC_PoolManager_stt, nullptr, "RequestReturnActorToPool_stt", Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPool_stt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPool_stt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPool_stt_Statics::BPC_PoolManager_stt_eventRequestReturnActorToPool_stt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPool_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPool_stt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPool_stt_Statics::BPC_PoolManager_stt_eventRequestReturnActorToPool_stt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPool_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPool_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBPC_PoolManager_stt::execRequestReturnActorToPool_stt)
{
	P_GET_OBJECT(ABP_PoolableActorBase_stt,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RequestReturnActorToPool_stt(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UBPC_PoolManager_stt Function RequestReturnActorToPool_stt *****************

// ********** Begin Class UBPC_PoolManager_stt Function RequestReturnActorToPoolByBPI_stt **********
struct Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPoolByBPI_stt_Statics
{
	struct BPC_PoolManager_stt_eventRequestReturnActorToPoolByBPI_stt_Parms
	{
		TScriptInterface<IBPI_PoolableActor_stt> PoolableActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt" },
		{ "Comment", "// Variante BPI para evitar hard cast en Blueprint.\n" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
		{ "ToolTip", "Variante BPI para evitar hard cast en Blueprint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolableActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_PoolableActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPoolByBPI_stt_Statics::NewProp_PoolableActor = { "PoolableActor", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPC_PoolManager_stt_eventRequestReturnActorToPoolByBPI_stt_Parms, PoolableActor), Z_Construct_UClass_UBPI_PoolableActor_stt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolableActor_MetaData), NewProp_PoolableActor_MetaData) };
void Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPoolByBPI_stt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BPC_PoolManager_stt_eventRequestReturnActorToPoolByBPI_stt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPoolByBPI_stt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BPC_PoolManager_stt_eventRequestReturnActorToPoolByBPI_stt_Parms), &Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPoolByBPI_stt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPoolByBPI_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPoolByBPI_stt_Statics::NewProp_PoolableActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPoolByBPI_stt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPoolByBPI_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPoolByBPI_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPC_PoolManager_stt, nullptr, "RequestReturnActorToPoolByBPI_stt", Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPoolByBPI_stt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPoolByBPI_stt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPoolByBPI_stt_Statics::BPC_PoolManager_stt_eventRequestReturnActorToPoolByBPI_stt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPoolByBPI_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPoolByBPI_stt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPoolByBPI_stt_Statics::BPC_PoolManager_stt_eventRequestReturnActorToPoolByBPI_stt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPoolByBPI_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPoolByBPI_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBPC_PoolManager_stt::execRequestReturnActorToPoolByBPI_stt)
{
	P_GET_TINTERFACE_REF(IBPI_PoolableActor_stt,Z_Param_Out_PoolableActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RequestReturnActorToPoolByBPI_stt(Z_Param_Out_PoolableActor);
	P_NATIVE_END;
}
// ********** End Class UBPC_PoolManager_stt Function RequestReturnActorToPoolByBPI_stt ************

// ********** Begin Class UBPC_PoolManager_stt *****************************************************
void UBPC_PoolManager_stt::StaticRegisterNativesUBPC_PoolManager_stt()
{
	UClass* Class = UBPC_PoolManager_stt::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FillPool_stt", &UBPC_PoolManager_stt::execFillPool_stt },
		{ "FinalizeReturnActorToPool_stt", &UBPC_PoolManager_stt::execFinalizeReturnActorToPool_stt },
		{ "FinalizeReturnActorToPoolByBPI_stt", &UBPC_PoolManager_stt::execFinalizeReturnActorToPoolByBPI_stt },
		{ "GetActorFromPool_stt", &UBPC_PoolManager_stt::execGetActorFromPool_stt },
		{ "GetAvailableCount_stt", &UBPC_PoolManager_stt::execGetAvailableCount_stt },
		{ "GetTotalCount_stt", &UBPC_PoolManager_stt::execGetTotalCount_stt },
		{ "InitPool_stt", &UBPC_PoolManager_stt::execInitPool_stt },
		{ "IsActorOwnedByPool_stt", &UBPC_PoolManager_stt::execIsActorOwnedByPool_stt },
		{ "IsManagingPhysicsAndGravityState_stt", &UBPC_PoolManager_stt::execIsManagingPhysicsAndGravityState_stt },
		{ "RequestReturnActorToPool_stt", &UBPC_PoolManager_stt::execRequestReturnActorToPool_stt },
		{ "RequestReturnActorToPoolByBPI_stt", &UBPC_PoolManager_stt::execRequestReturnActorToPoolByBPI_stt },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBPC_PoolManager_stt;
UClass* UBPC_PoolManager_stt::GetPrivateStaticClass()
{
	using TClass = UBPC_PoolManager_stt;
	if (!Z_Registration_Info_UClass_UBPC_PoolManager_stt.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BPC_PoolManager_stt"),
			Z_Registration_Info_UClass_UBPC_PoolManager_stt.InnerSingleton,
			StaticRegisterNativesUBPC_PoolManager_stt,
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
	return Z_Registration_Info_UClass_UBPC_PoolManager_stt.InnerSingleton;
}
UClass* Z_Construct_UClass_UBPC_PoolManager_stt_NoRegister()
{
	return UBPC_PoolManager_stt::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBPC_PoolManager_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// Manager de pooling basado en actor base poolable STT.\n// Soporta:\n// - entrega por transform mundo\n// - auto retorno opcional por tiempo (> 0)\n// - retorno manual en 2 fases (request/finalize)\n" },
		{ "IncludePath", "BasePool/BPC/BPC_PoolManager_stt.h" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
		{ "ToolTip", "Manager de pooling basado en actor base poolable STT.\nSoporta:\n- entrega por transform mundo\n- auto retorno opcional por tiempo (> 0)\n- retorno manual en 2 fases (request/finalize)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PooledActorClass_stt_MetaData[] = {
		{ "Category", "Pool_stt" },
		{ "Comment", "// Clase actor base o derivada BP que usara este pool.\n" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
		{ "ToolTip", "Clase actor base o derivada BP que usara este pool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialPoolSize_stt_MetaData[] = {
		{ "Category", "Pool_stt" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartInitialized_stt_MetaData[] = {
		{ "Category", "Pool_stt" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoExpand_stt_MetaData[] = {
		{ "Category", "Pool_stt" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoExpandAmount_stt_MetaData[] = {
		{ "Category", "Pool_stt" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bAutoExpand_stt" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTeleportPhysicsOnActivate_stt_MetaData[] = {
		{ "Category", "Pool_stt|Physics" },
		{ "Comment", "// Al activar actor del pool, aplica transform con TeleportPhysics.\n" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
		{ "ToolTip", "Al activar actor del pool, aplica transform con TeleportPhysics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetachFromParentOnReturn_stt_MetaData[] = {
		{ "Category", "Pool_stt|Physics" },
		{ "Comment", "// Al devolver actor al pool, fuerza detach del parent para limpiar estado de sockets/attachments.\n" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
		{ "ToolTip", "Al devolver actor al pool, fuerza detach del parent para limpiar estado de sockets/attachments." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetRigidBodyStateOnReturn_stt_MetaData[] = {
		{ "Category", "Pool_stt|Physics" },
		{ "Comment", "// Al devolver actor al pool, limpia velocidades y duerme rigid bodies.\n" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
		{ "ToolTip", "Al devolver actor al pool, limpia velocidades y duerme rigid bodies." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bManagePhysicsAndGravityState_stt_MetaData[] = {
		{ "Category", "Pool_stt|Physics" },
		{ "Comment", "// Si true, el manager aplica estado fisica/gravedad en take/return.\n" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
		{ "ToolTip", "Si true, el manager aplica estado fisica/gravedad en take/return." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePhysicsWhenActive_stt_MetaData[] = {
		{ "Category", "Pool_stt|Physics" },
		{ "Comment", "// Estado de fisica al activar actor.\n" },
		{ "EditCondition", "bManagePhysicsAndGravityState_stt" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
		{ "ToolTip", "Estado de fisica al activar actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGravityWhenActive_stt_MetaData[] = {
		{ "Category", "Pool_stt|Physics" },
		{ "Comment", "// Estado de gravedad al activar actor.\n" },
		{ "EditCondition", "bManagePhysicsAndGravityState_stt" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
		{ "ToolTip", "Estado de gravedad al activar actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePhysicsInPool_stt_MetaData[] = {
		{ "Category", "Pool_stt|Physics" },
		{ "Comment", "// Estado de fisica al guardar actor en pool.\n" },
		{ "EditCondition", "bManagePhysicsAndGravityState_stt" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
		{ "ToolTip", "Estado de fisica al guardar actor en pool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGravityInPool_stt_MetaData[] = {
		{ "Category", "Pool_stt|Physics" },
		{ "Comment", "// Estado de gravedad al guardar actor en pool.\n" },
		{ "EditCondition", "bManagePhysicsAndGravityState_stt" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
		{ "ToolTip", "Estado de gravedad al guardar actor en pool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogPoolLifecycle_stt_MetaData[] = {
		{ "Category", "Pool_stt|Debug" },
		{ "Comment", "// Logs de depuracion take/return.\n" },
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
		{ "ToolTip", "Logs de depuracion take/return." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_stt_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllPooledActors_stt_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableActors_stt_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasePool/BPC/BPC_PoolManager_stt.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PooledActorClass_stt;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialPoolSize_stt;
	static void NewProp_bStartInitialized_stt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartInitialized_stt;
	static void NewProp_bAutoExpand_stt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoExpand_stt;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AutoExpandAmount_stt;
	static void NewProp_bTeleportPhysicsOnActivate_stt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleportPhysicsOnActivate_stt;
	static void NewProp_bDetachFromParentOnReturn_stt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetachFromParentOnReturn_stt;
	static void NewProp_bResetRigidBodyStateOnReturn_stt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetRigidBodyStateOnReturn_stt;
	static void NewProp_bManagePhysicsAndGravityState_stt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bManagePhysicsAndGravityState_stt;
	static void NewProp_bEnablePhysicsWhenActive_stt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePhysicsWhenActive_stt;
	static void NewProp_bEnableGravityWhenActive_stt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGravityWhenActive_stt;
	static void NewProp_bEnablePhysicsInPool_stt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePhysicsInPool_stt;
	static void NewProp_bEnableGravityInPool_stt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGravityInPool_stt;
	static void NewProp_bLogPoolLifecycle_stt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogPoolLifecycle_stt;
	static void NewProp_bIsInitialized_stt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized_stt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllPooledActors_stt_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllPooledActors_stt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailableActors_stt_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableActors_stt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPC_PoolManager_stt_FillPool_stt, "FillPool_stt" }, // 3476362306
		{ &Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPool_stt, "FinalizeReturnActorToPool_stt" }, // 218936468
		{ &Z_Construct_UFunction_UBPC_PoolManager_stt_FinalizeReturnActorToPoolByBPI_stt, "FinalizeReturnActorToPoolByBPI_stt" }, // 549275476
		{ &Z_Construct_UFunction_UBPC_PoolManager_stt_GetActorFromPool_stt, "GetActorFromPool_stt" }, // 480621685
		{ &Z_Construct_UFunction_UBPC_PoolManager_stt_GetAvailableCount_stt, "GetAvailableCount_stt" }, // 1203715081
		{ &Z_Construct_UFunction_UBPC_PoolManager_stt_GetTotalCount_stt, "GetTotalCount_stt" }, // 305838254
		{ &Z_Construct_UFunction_UBPC_PoolManager_stt_InitPool_stt, "InitPool_stt" }, // 2143233289
		{ &Z_Construct_UFunction_UBPC_PoolManager_stt_IsActorOwnedByPool_stt, "IsActorOwnedByPool_stt" }, // 2237165984
		{ &Z_Construct_UFunction_UBPC_PoolManager_stt_IsManagingPhysicsAndGravityState_stt, "IsManagingPhysicsAndGravityState_stt" }, // 1764214508
		{ &Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPool_stt, "RequestReturnActorToPool_stt" }, // 2495713515
		{ &Z_Construct_UFunction_UBPC_PoolManager_stt_RequestReturnActorToPoolByBPI_stt, "RequestReturnActorToPoolByBPI_stt" }, // 1925553784
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPC_PoolManager_stt>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_PooledActorClass_stt = { "PooledActorClass_stt", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBPC_PoolManager_stt, PooledActorClass_stt), Z_Construct_UClass_UClass, Z_Construct_UClass_ABP_PoolableActorBase_stt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PooledActorClass_stt_MetaData), NewProp_PooledActorClass_stt_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_InitialPoolSize_stt = { "InitialPoolSize_stt", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBPC_PoolManager_stt, InitialPoolSize_stt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialPoolSize_stt_MetaData), NewProp_InitialPoolSize_stt_MetaData) };
void Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bStartInitialized_stt_SetBit(void* Obj)
{
	((UBPC_PoolManager_stt*)Obj)->bStartInitialized_stt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bStartInitialized_stt = { "bStartInitialized_stt", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBPC_PoolManager_stt), &Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bStartInitialized_stt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartInitialized_stt_MetaData), NewProp_bStartInitialized_stt_MetaData) };
void Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bAutoExpand_stt_SetBit(void* Obj)
{
	((UBPC_PoolManager_stt*)Obj)->bAutoExpand_stt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bAutoExpand_stt = { "bAutoExpand_stt", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBPC_PoolManager_stt), &Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bAutoExpand_stt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoExpand_stt_MetaData), NewProp_bAutoExpand_stt_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_AutoExpandAmount_stt = { "AutoExpandAmount_stt", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBPC_PoolManager_stt, AutoExpandAmount_stt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoExpandAmount_stt_MetaData), NewProp_AutoExpandAmount_stt_MetaData) };
void Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bTeleportPhysicsOnActivate_stt_SetBit(void* Obj)
{
	((UBPC_PoolManager_stt*)Obj)->bTeleportPhysicsOnActivate_stt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bTeleportPhysicsOnActivate_stt = { "bTeleportPhysicsOnActivate_stt", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBPC_PoolManager_stt), &Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bTeleportPhysicsOnActivate_stt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTeleportPhysicsOnActivate_stt_MetaData), NewProp_bTeleportPhysicsOnActivate_stt_MetaData) };
void Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bDetachFromParentOnReturn_stt_SetBit(void* Obj)
{
	((UBPC_PoolManager_stt*)Obj)->bDetachFromParentOnReturn_stt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bDetachFromParentOnReturn_stt = { "bDetachFromParentOnReturn_stt", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBPC_PoolManager_stt), &Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bDetachFromParentOnReturn_stt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetachFromParentOnReturn_stt_MetaData), NewProp_bDetachFromParentOnReturn_stt_MetaData) };
void Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bResetRigidBodyStateOnReturn_stt_SetBit(void* Obj)
{
	((UBPC_PoolManager_stt*)Obj)->bResetRigidBodyStateOnReturn_stt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bResetRigidBodyStateOnReturn_stt = { "bResetRigidBodyStateOnReturn_stt", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBPC_PoolManager_stt), &Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bResetRigidBodyStateOnReturn_stt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetRigidBodyStateOnReturn_stt_MetaData), NewProp_bResetRigidBodyStateOnReturn_stt_MetaData) };
void Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bManagePhysicsAndGravityState_stt_SetBit(void* Obj)
{
	((UBPC_PoolManager_stt*)Obj)->bManagePhysicsAndGravityState_stt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bManagePhysicsAndGravityState_stt = { "bManagePhysicsAndGravityState_stt", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBPC_PoolManager_stt), &Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bManagePhysicsAndGravityState_stt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bManagePhysicsAndGravityState_stt_MetaData), NewProp_bManagePhysicsAndGravityState_stt_MetaData) };
void Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bEnablePhysicsWhenActive_stt_SetBit(void* Obj)
{
	((UBPC_PoolManager_stt*)Obj)->bEnablePhysicsWhenActive_stt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bEnablePhysicsWhenActive_stt = { "bEnablePhysicsWhenActive_stt", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBPC_PoolManager_stt), &Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bEnablePhysicsWhenActive_stt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePhysicsWhenActive_stt_MetaData), NewProp_bEnablePhysicsWhenActive_stt_MetaData) };
void Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bEnableGravityWhenActive_stt_SetBit(void* Obj)
{
	((UBPC_PoolManager_stt*)Obj)->bEnableGravityWhenActive_stt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bEnableGravityWhenActive_stt = { "bEnableGravityWhenActive_stt", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBPC_PoolManager_stt), &Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bEnableGravityWhenActive_stt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableGravityWhenActive_stt_MetaData), NewProp_bEnableGravityWhenActive_stt_MetaData) };
void Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bEnablePhysicsInPool_stt_SetBit(void* Obj)
{
	((UBPC_PoolManager_stt*)Obj)->bEnablePhysicsInPool_stt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bEnablePhysicsInPool_stt = { "bEnablePhysicsInPool_stt", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBPC_PoolManager_stt), &Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bEnablePhysicsInPool_stt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePhysicsInPool_stt_MetaData), NewProp_bEnablePhysicsInPool_stt_MetaData) };
void Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bEnableGravityInPool_stt_SetBit(void* Obj)
{
	((UBPC_PoolManager_stt*)Obj)->bEnableGravityInPool_stt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bEnableGravityInPool_stt = { "bEnableGravityInPool_stt", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBPC_PoolManager_stt), &Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bEnableGravityInPool_stt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableGravityInPool_stt_MetaData), NewProp_bEnableGravityInPool_stt_MetaData) };
void Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bLogPoolLifecycle_stt_SetBit(void* Obj)
{
	((UBPC_PoolManager_stt*)Obj)->bLogPoolLifecycle_stt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bLogPoolLifecycle_stt = { "bLogPoolLifecycle_stt", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBPC_PoolManager_stt), &Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bLogPoolLifecycle_stt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogPoolLifecycle_stt_MetaData), NewProp_bLogPoolLifecycle_stt_MetaData) };
void Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bIsInitialized_stt_SetBit(void* Obj)
{
	((UBPC_PoolManager_stt*)Obj)->bIsInitialized_stt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bIsInitialized_stt = { "bIsInitialized_stt", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBPC_PoolManager_stt), &Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bIsInitialized_stt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInitialized_stt_MetaData), NewProp_bIsInitialized_stt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_AllPooledActors_stt_Inner = { "AllPooledActors_stt", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABP_PoolableActorBase_stt_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_AllPooledActors_stt = { "AllPooledActors_stt", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBPC_PoolManager_stt, AllPooledActors_stt), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllPooledActors_stt_MetaData), NewProp_AllPooledActors_stt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_AvailableActors_stt_Inner = { "AvailableActors_stt", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABP_PoolableActorBase_stt_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_AvailableActors_stt = { "AvailableActors_stt", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBPC_PoolManager_stt, AvailableActors_stt), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableActors_stt_MetaData), NewProp_AvailableActors_stt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBPC_PoolManager_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_PooledActorClass_stt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_InitialPoolSize_stt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bStartInitialized_stt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bAutoExpand_stt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_AutoExpandAmount_stt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bTeleportPhysicsOnActivate_stt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bDetachFromParentOnReturn_stt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bResetRigidBodyStateOnReturn_stt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bManagePhysicsAndGravityState_stt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bEnablePhysicsWhenActive_stt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bEnableGravityWhenActive_stt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bEnablePhysicsInPool_stt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bEnableGravityInPool_stt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bLogPoolLifecycle_stt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_bIsInitialized_stt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_AllPooledActors_stt_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_AllPooledActors_stt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_AvailableActors_stt_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPC_PoolManager_stt_Statics::NewProp_AvailableActors_stt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBPC_PoolManager_stt_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBPC_PoolManager_stt_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TTSWeapons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBPC_PoolManager_stt_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBPC_PoolManager_stt_Statics::ClassParams = {
	&UBPC_PoolManager_stt::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBPC_PoolManager_stt_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBPC_PoolManager_stt_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBPC_PoolManager_stt_Statics::Class_MetaDataParams), Z_Construct_UClass_UBPC_PoolManager_stt_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBPC_PoolManager_stt()
{
	if (!Z_Registration_Info_UClass_UBPC_PoolManager_stt.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBPC_PoolManager_stt.OuterSingleton, Z_Construct_UClass_UBPC_PoolManager_stt_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBPC_PoolManager_stt.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBPC_PoolManager_stt);
UBPC_PoolManager_stt::~UBPC_PoolManager_stt() {}
// ********** End Class UBPC_PoolManager_stt *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPC_BPC_PoolManager_stt_h__Script_TTSWeapons_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBPC_PoolManager_stt, UBPC_PoolManager_stt::StaticClass, TEXT("UBPC_PoolManager_stt"), &Z_Registration_Info_UClass_UBPC_PoolManager_stt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBPC_PoolManager_stt), 2737063692U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPC_BPC_PoolManager_stt_h__Script_TTSWeapons_2087161353(TEXT("/Script/TTSWeapons"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPC_BPC_PoolManager_stt_h__Script_TTSWeapons_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPC_BPC_PoolManager_stt_h__Script_TTSWeapons_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
