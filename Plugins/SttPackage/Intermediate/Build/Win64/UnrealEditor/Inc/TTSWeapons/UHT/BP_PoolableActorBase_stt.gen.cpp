// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasePool/Actor/BP_PoolableActorBase_stt.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBP_PoolableActorBase_stt() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
TTSWEAPONS_API UClass* Z_Construct_UClass_ABP_PoolableActorBase_stt();
TTSWEAPONS_API UClass* Z_Construct_UClass_ABP_PoolableActorBase_stt_NoRegister();
TTSWEAPONS_API UClass* Z_Construct_UClass_UBPC_PoolManager_stt_NoRegister();
TTSWEAPONS_API UClass* Z_Construct_UClass_UBPI_PoolableActor_stt_NoRegister();
UPackage* Z_Construct_UPackage__Script_TTSWeapons();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABP_PoolableActorBase_stt Function DisablePhysicsAndGravity_stt **********
struct Z_Construct_UFunction_ABP_PoolableActorBase_stt_DisablePhysicsAndGravity_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt|Runtime" },
		{ "Comment", "// Atajo: desactiva fisica + gravedad.\n" },
		{ "ModuleRelativePath", "Public/BasePool/Actor/BP_PoolableActorBase_stt.h" },
		{ "ToolTip", "Atajo: desactiva fisica + gravedad." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PoolableActorBase_stt_DisablePhysicsAndGravity_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABP_PoolableActorBase_stt, nullptr, "DisablePhysicsAndGravity_stt", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_DisablePhysicsAndGravity_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABP_PoolableActorBase_stt_DisablePhysicsAndGravity_stt_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABP_PoolableActorBase_stt_DisablePhysicsAndGravity_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_PoolableActorBase_stt_DisablePhysicsAndGravity_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABP_PoolableActorBase_stt::execDisablePhysicsAndGravity_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisablePhysicsAndGravity_stt();
	P_NATIVE_END;
}
// ********** End Class ABP_PoolableActorBase_stt Function DisablePhysicsAndGravity_stt ************

// ********** Begin Class ABP_PoolableActorBase_stt Function EnablePhysicsAndGravity_stt ***********
struct Z_Construct_UFunction_ABP_PoolableActorBase_stt_EnablePhysicsAndGravity_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt|Runtime" },
		{ "Comment", "// Atajo: activa fisica + gravedad.\n" },
		{ "ModuleRelativePath", "Public/BasePool/Actor/BP_PoolableActorBase_stt.h" },
		{ "ToolTip", "Atajo: activa fisica + gravedad." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PoolableActorBase_stt_EnablePhysicsAndGravity_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABP_PoolableActorBase_stt, nullptr, "EnablePhysicsAndGravity_stt", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_EnablePhysicsAndGravity_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABP_PoolableActorBase_stt_EnablePhysicsAndGravity_stt_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABP_PoolableActorBase_stt_EnablePhysicsAndGravity_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_PoolableActorBase_stt_EnablePhysicsAndGravity_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABP_PoolableActorBase_stt::execEnablePhysicsAndGravity_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnablePhysicsAndGravity_stt();
	P_NATIVE_END;
}
// ********** End Class ABP_PoolableActorBase_stt Function EnablePhysicsAndGravity_stt *************

// ********** Begin Class ABP_PoolableActorBase_stt Function FinalizeReturnToPool_stt **************
struct Z_Construct_UFunction_ABP_PoolableActorBase_stt_FinalizeReturnToPool_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt" },
		{ "Comment", "// Fase 2 de retorno: debe llamarse al terminar animacion/fade de salida.\n" },
		{ "ModuleRelativePath", "Public/BasePool/Actor/BP_PoolableActorBase_stt.h" },
		{ "ToolTip", "Fase 2 de retorno: debe llamarse al terminar animacion/fade de salida." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PoolableActorBase_stt_FinalizeReturnToPool_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABP_PoolableActorBase_stt, nullptr, "FinalizeReturnToPool_stt", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_FinalizeReturnToPool_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABP_PoolableActorBase_stt_FinalizeReturnToPool_stt_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABP_PoolableActorBase_stt_FinalizeReturnToPool_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_PoolableActorBase_stt_FinalizeReturnToPool_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABP_PoolableActorBase_stt::execFinalizeReturnToPool_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinalizeReturnToPool_stt();
	P_NATIVE_END;
}
// ********** End Class ABP_PoolableActorBase_stt Function FinalizeReturnToPool_stt ****************

// ********** Begin Class ABP_PoolableActorBase_stt Function GetPoolManager_stt ********************
struct Z_Construct_UFunction_ABP_PoolableActorBase_stt_GetPoolManager_stt_Statics
{
	struct BP_PoolableActorBase_stt_eventGetPoolManager_stt_Parms
	{
		UBPC_PoolManager_stt* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt" },
		{ "ModuleRelativePath", "Public/BasePool/Actor/BP_PoolableActorBase_stt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_PoolableActorBase_stt_GetPoolManager_stt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_PoolableActorBase_stt_eventGetPoolManager_stt_Parms, ReturnValue), Z_Construct_UClass_UBPC_PoolManager_stt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_PoolableActorBase_stt_GetPoolManager_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PoolableActorBase_stt_GetPoolManager_stt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_GetPoolManager_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PoolableActorBase_stt_GetPoolManager_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABP_PoolableActorBase_stt, nullptr, "GetPoolManager_stt", Z_Construct_UFunction_ABP_PoolableActorBase_stt_GetPoolManager_stt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_GetPoolManager_stt_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABP_PoolableActorBase_stt_GetPoolManager_stt_Statics::BP_PoolableActorBase_stt_eventGetPoolManager_stt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_GetPoolManager_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABP_PoolableActorBase_stt_GetPoolManager_stt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABP_PoolableActorBase_stt_GetPoolManager_stt_Statics::BP_PoolableActorBase_stt_eventGetPoolManager_stt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABP_PoolableActorBase_stt_GetPoolManager_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_PoolableActorBase_stt_GetPoolManager_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABP_PoolableActorBase_stt::execGetPoolManager_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBPC_PoolManager_stt**)Z_Param__Result=P_THIS->GetPoolManager_stt();
	P_NATIVE_END;
}
// ********** End Class ABP_PoolableActorBase_stt Function GetPoolManager_stt **********************

// ********** Begin Class ABP_PoolableActorBase_stt Function IsInPool_stt **************************
struct Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsInPool_stt_Statics
{
	struct BP_PoolableActorBase_stt_eventIsInPool_stt_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt" },
		{ "Comment", "// Estado de runtime.\n" },
		{ "ModuleRelativePath", "Public/BasePool/Actor/BP_PoolableActorBase_stt.h" },
		{ "ToolTip", "Estado de runtime." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsInPool_stt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BP_PoolableActorBase_stt_eventIsInPool_stt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsInPool_stt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_PoolableActorBase_stt_eventIsInPool_stt_Parms), &Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsInPool_stt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsInPool_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsInPool_stt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsInPool_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsInPool_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABP_PoolableActorBase_stt, nullptr, "IsInPool_stt", Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsInPool_stt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsInPool_stt_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsInPool_stt_Statics::BP_PoolableActorBase_stt_eventIsInPool_stt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsInPool_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsInPool_stt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsInPool_stt_Statics::BP_PoolableActorBase_stt_eventIsInPool_stt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsInPool_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsInPool_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABP_PoolableActorBase_stt::execIsInPool_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInPool_stt();
	P_NATIVE_END;
}
// ********** End Class ABP_PoolableActorBase_stt Function IsInPool_stt ****************************

// ********** Begin Class ABP_PoolableActorBase_stt Function IsReturnInProgress_stt ****************
struct Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsReturnInProgress_stt_Statics
{
	struct BP_PoolableActorBase_stt_eventIsReturnInProgress_stt_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt" },
		{ "ModuleRelativePath", "Public/BasePool/Actor/BP_PoolableActorBase_stt.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsReturnInProgress_stt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BP_PoolableActorBase_stt_eventIsReturnInProgress_stt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsReturnInProgress_stt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_PoolableActorBase_stt_eventIsReturnInProgress_stt_Parms), &Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsReturnInProgress_stt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsReturnInProgress_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsReturnInProgress_stt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsReturnInProgress_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsReturnInProgress_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABP_PoolableActorBase_stt, nullptr, "IsReturnInProgress_stt", Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsReturnInProgress_stt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsReturnInProgress_stt_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsReturnInProgress_stt_Statics::BP_PoolableActorBase_stt_eventIsReturnInProgress_stt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsReturnInProgress_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsReturnInProgress_stt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsReturnInProgress_stt_Statics::BP_PoolableActorBase_stt_eventIsReturnInProgress_stt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsReturnInProgress_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsReturnInProgress_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABP_PoolableActorBase_stt::execIsReturnInProgress_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReturnInProgress_stt();
	P_NATIVE_END;
}
// ********** End Class ABP_PoolableActorBase_stt Function IsReturnInProgress_stt ******************

// ********** Begin Class ABP_PoolableActorBase_stt Function OnBeginReturnToPool_stt ***************
static FName NAME_ABP_PoolableActorBase_stt_OnBeginReturnToPool_stt = FName(TEXT("OnBeginReturnToPool_stt"));
void ABP_PoolableActorBase_stt::OnBeginReturnToPool_stt()
{
	UFunction* Func = FindFunctionChecked(NAME_ABP_PoolableActorBase_stt_OnBeginReturnToPool_stt);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnBeginReturnToPool_stt_Implementation();
	}
}
struct Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnBeginReturnToPool_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt|Hooks" },
		{ "Comment", "// Hook: se ejecuta al iniciar retorno (ideal para dissolve/fade/outro).\n" },
		{ "ModuleRelativePath", "Public/BasePool/Actor/BP_PoolableActorBase_stt.h" },
		{ "ToolTip", "Hook: se ejecuta al iniciar retorno (ideal para dissolve/fade/outro)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnBeginReturnToPool_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABP_PoolableActorBase_stt, nullptr, "OnBeginReturnToPool_stt", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnBeginReturnToPool_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnBeginReturnToPool_stt_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnBeginReturnToPool_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnBeginReturnToPool_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABP_PoolableActorBase_stt::execOnBeginReturnToPool_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginReturnToPool_stt_Implementation();
	P_NATIVE_END;
}
// ********** End Class ABP_PoolableActorBase_stt Function OnBeginReturnToPool_stt *****************

// ********** Begin Class ABP_PoolableActorBase_stt Function OnBPIRequestDeactivateToPool_stt ******
static FName NAME_ABP_PoolableActorBase_stt_OnBPIRequestDeactivateToPool_stt = FName(TEXT("OnBPIRequestDeactivateToPool_stt"));
void ABP_PoolableActorBase_stt::OnBPIRequestDeactivateToPool_stt()
{
	UFunction* Func = FindFunctionChecked(NAME_ABP_PoolableActorBase_stt_OnBPIRequestDeactivateToPool_stt);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnBPIRequestDeactivateToPool_stt_Implementation();
	}
}
struct Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnBPIRequestDeactivateToPool_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt|Hooks" },
		{ "Comment", "// Hook especifico cuando el retorno es solicitado via BPI_RequestDeactivateToPool_stt.\n// Sirve para preparar estado antes de entrar al flujo normal de Request/Finalize.\n" },
		{ "ModuleRelativePath", "Public/BasePool/Actor/BP_PoolableActorBase_stt.h" },
		{ "ToolTip", "Hook especifico cuando el retorno es solicitado via BPI_RequestDeactivateToPool_stt.\nSirve para preparar estado antes de entrar al flujo normal de Request/Finalize." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnBPIRequestDeactivateToPool_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABP_PoolableActorBase_stt, nullptr, "OnBPIRequestDeactivateToPool_stt", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnBPIRequestDeactivateToPool_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnBPIRequestDeactivateToPool_stt_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnBPIRequestDeactivateToPool_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnBPIRequestDeactivateToPool_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABP_PoolableActorBase_stt::execOnBPIRequestDeactivateToPool_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBPIRequestDeactivateToPool_stt_Implementation();
	P_NATIVE_END;
}
// ********** End Class ABP_PoolableActorBase_stt Function OnBPIRequestDeactivateToPool_stt ********

// ********** Begin Class ABP_PoolableActorBase_stt Function OnFinalReturnToPool_stt ***************
static FName NAME_ABP_PoolableActorBase_stt_OnFinalReturnToPool_stt = FName(TEXT("OnFinalReturnToPool_stt"));
void ABP_PoolableActorBase_stt::OnFinalReturnToPool_stt()
{
	UFunction* Func = FindFunctionChecked(NAME_ABP_PoolableActorBase_stt_OnFinalReturnToPool_stt);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnFinalReturnToPool_stt_Implementation();
	}
}
struct Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnFinalReturnToPool_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt|Hooks" },
		{ "Comment", "// Hook: se ejecuta justo antes de apagar/hide y volver a disponibles.\n" },
		{ "ModuleRelativePath", "Public/BasePool/Actor/BP_PoolableActorBase_stt.h" },
		{ "ToolTip", "Hook: se ejecuta justo antes de apagar/hide y volver a disponibles." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnFinalReturnToPool_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABP_PoolableActorBase_stt, nullptr, "OnFinalReturnToPool_stt", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnFinalReturnToPool_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnFinalReturnToPool_stt_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnFinalReturnToPool_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnFinalReturnToPool_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABP_PoolableActorBase_stt::execOnFinalReturnToPool_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFinalReturnToPool_stt_Implementation();
	P_NATIVE_END;
}
// ********** End Class ABP_PoolableActorBase_stt Function OnFinalReturnToPool_stt *****************

// ********** Begin Class ABP_PoolableActorBase_stt Function OnTakenFromPool_stt *******************
static FName NAME_ABP_PoolableActorBase_stt_OnTakenFromPool_stt = FName(TEXT("OnTakenFromPool_stt"));
void ABP_PoolableActorBase_stt::OnTakenFromPool_stt()
{
	UFunction* Func = FindFunctionChecked(NAME_ABP_PoolableActorBase_stt_OnTakenFromPool_stt);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnTakenFromPool_stt_Implementation();
	}
}
struct Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnTakenFromPool_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt|Hooks" },
		{ "Comment", "// Hook: se ejecuta cuando el actor sale del pool y entra en uso activo.\n" },
		{ "ModuleRelativePath", "Public/BasePool/Actor/BP_PoolableActorBase_stt.h" },
		{ "ToolTip", "Hook: se ejecuta cuando el actor sale del pool y entra en uso activo." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnTakenFromPool_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABP_PoolableActorBase_stt, nullptr, "OnTakenFromPool_stt", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnTakenFromPool_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnTakenFromPool_stt_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnTakenFromPool_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnTakenFromPool_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABP_PoolableActorBase_stt::execOnTakenFromPool_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTakenFromPool_stt_Implementation();
	P_NATIVE_END;
}
// ********** End Class ABP_PoolableActorBase_stt Function OnTakenFromPool_stt *********************

// ********** Begin Class ABP_PoolableActorBase_stt Function RequestDeactivateToPool_stt ***********
struct Z_Construct_UFunction_ABP_PoolableActorBase_stt_RequestDeactivateToPool_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt" },
		{ "Comment", "// Fase 1 de retorno: solicita desactivacion.\n// Si bReturnDeferred_stt = false, finaliza retorno inmediatamente.\n" },
		{ "ModuleRelativePath", "Public/BasePool/Actor/BP_PoolableActorBase_stt.h" },
		{ "ToolTip", "Fase 1 de retorno: solicita desactivacion.\nSi bReturnDeferred_stt = false, finaliza retorno inmediatamente." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PoolableActorBase_stt_RequestDeactivateToPool_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABP_PoolableActorBase_stt, nullptr, "RequestDeactivateToPool_stt", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_RequestDeactivateToPool_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABP_PoolableActorBase_stt_RequestDeactivateToPool_stt_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABP_PoolableActorBase_stt_RequestDeactivateToPool_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_PoolableActorBase_stt_RequestDeactivateToPool_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABP_PoolableActorBase_stt::execRequestDeactivateToPool_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestDeactivateToPool_stt();
	P_NATIVE_END;
}
// ********** End Class ABP_PoolableActorBase_stt Function RequestDeactivateToPool_stt *************

// ********** Begin Class ABP_PoolableActorBase_stt Function SetPhysicsAndGravityEnabled_stt *******
struct Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt_Statics
{
	struct BP_PoolableActorBase_stt_eventSetPhysicsAndGravityEnabled_stt_Parms
	{
		bool bEnablePhysics;
		bool bEnableGravity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt|Runtime" },
		{ "Comment", "// Cambia solo estado de fisica/gravedad de los primitive components del actor.\n" },
		{ "ModuleRelativePath", "Public/BasePool/Actor/BP_PoolableActorBase_stt.h" },
		{ "ToolTip", "Cambia solo estado de fisica/gravedad de los primitive components del actor." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnablePhysics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePhysics;
	static void NewProp_bEnableGravity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGravity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt_Statics::NewProp_bEnablePhysics_SetBit(void* Obj)
{
	((BP_PoolableActorBase_stt_eventSetPhysicsAndGravityEnabled_stt_Parms*)Obj)->bEnablePhysics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt_Statics::NewProp_bEnablePhysics = { "bEnablePhysics", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_PoolableActorBase_stt_eventSetPhysicsAndGravityEnabled_stt_Parms), &Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt_Statics::NewProp_bEnablePhysics_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt_Statics::NewProp_bEnableGravity_SetBit(void* Obj)
{
	((BP_PoolableActorBase_stt_eventSetPhysicsAndGravityEnabled_stt_Parms*)Obj)->bEnableGravity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt_Statics::NewProp_bEnableGravity = { "bEnableGravity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_PoolableActorBase_stt_eventSetPhysicsAndGravityEnabled_stt_Parms), &Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt_Statics::NewProp_bEnableGravity_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt_Statics::NewProp_bEnablePhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt_Statics::NewProp_bEnableGravity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABP_PoolableActorBase_stt, nullptr, "SetPhysicsAndGravityEnabled_stt", Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt_Statics::BP_PoolableActorBase_stt_eventSetPhysicsAndGravityEnabled_stt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt_Statics::BP_PoolableActorBase_stt_eventSetPhysicsAndGravityEnabled_stt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABP_PoolableActorBase_stt::execSetPhysicsAndGravityEnabled_stt)
{
	P_GET_UBOOL(Z_Param_bEnablePhysics);
	P_GET_UBOOL(Z_Param_bEnableGravity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPhysicsAndGravityEnabled_stt(Z_Param_bEnablePhysics,Z_Param_bEnableGravity);
	P_NATIVE_END;
}
// ********** End Class ABP_PoolableActorBase_stt Function SetPhysicsAndGravityEnabled_stt *********

// ********** Begin Class ABP_PoolableActorBase_stt ************************************************
void ABP_PoolableActorBase_stt::StaticRegisterNativesABP_PoolableActorBase_stt()
{
	UClass* Class = ABP_PoolableActorBase_stt::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisablePhysicsAndGravity_stt", &ABP_PoolableActorBase_stt::execDisablePhysicsAndGravity_stt },
		{ "EnablePhysicsAndGravity_stt", &ABP_PoolableActorBase_stt::execEnablePhysicsAndGravity_stt },
		{ "FinalizeReturnToPool_stt", &ABP_PoolableActorBase_stt::execFinalizeReturnToPool_stt },
		{ "GetPoolManager_stt", &ABP_PoolableActorBase_stt::execGetPoolManager_stt },
		{ "IsInPool_stt", &ABP_PoolableActorBase_stt::execIsInPool_stt },
		{ "IsReturnInProgress_stt", &ABP_PoolableActorBase_stt::execIsReturnInProgress_stt },
		{ "OnBeginReturnToPool_stt", &ABP_PoolableActorBase_stt::execOnBeginReturnToPool_stt },
		{ "OnBPIRequestDeactivateToPool_stt", &ABP_PoolableActorBase_stt::execOnBPIRequestDeactivateToPool_stt },
		{ "OnFinalReturnToPool_stt", &ABP_PoolableActorBase_stt::execOnFinalReturnToPool_stt },
		{ "OnTakenFromPool_stt", &ABP_PoolableActorBase_stt::execOnTakenFromPool_stt },
		{ "RequestDeactivateToPool_stt", &ABP_PoolableActorBase_stt::execRequestDeactivateToPool_stt },
		{ "SetPhysicsAndGravityEnabled_stt", &ABP_PoolableActorBase_stt::execSetPhysicsAndGravityEnabled_stt },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABP_PoolableActorBase_stt;
UClass* ABP_PoolableActorBase_stt::GetPrivateStaticClass()
{
	using TClass = ABP_PoolableActorBase_stt;
	if (!Z_Registration_Info_UClass_ABP_PoolableActorBase_stt.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BP_PoolableActorBase_stt"),
			Z_Registration_Info_UClass_ABP_PoolableActorBase_stt.InnerSingleton,
			StaticRegisterNativesABP_PoolableActorBase_stt,
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
	return Z_Registration_Info_UClass_ABP_PoolableActorBase_stt.InnerSingleton;
}
UClass* Z_Construct_UClass_ABP_PoolableActorBase_stt_NoRegister()
{
	return ABP_PoolableActorBase_stt::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Actor base para pooling en 2 fases:\n// 1) RequestDeactivateToPool_stt() inicia retorno (puede disparar fade/outro).\n// 2) FinalizeReturnToPool_stt() confirma retorno final al manager.\n" },
		{ "IncludePath", "BasePool/Actor/BP_PoolableActorBase_stt.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BasePool/Actor/BP_PoolableActorBase_stt.h" },
		{ "ToolTip", "Actor base para pooling en 2 fases:\n1) RequestDeactivateToPool_stt() inicia retorno (puede disparar fade/outro).\n2) FinalizeReturnToPool_stt() confirma retorno final al manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReturnDeferred_stt_MetaData[] = {
		{ "Category", "Pool_stt|Return" },
		{ "Comment", "// Si true, el retorno requiere llamada explicita a FinalizeReturnToPool_stt.\n// Si false, RequestDeactivateToPool_stt finaliza inmediatamente.\n" },
		{ "ModuleRelativePath", "Public/BasePool/Actor/BP_PoolableActorBase_stt.h" },
		{ "ToolTip", "Si true, el retorno requiere llamada explicita a FinalizeReturnToPool_stt.\nSi false, RequestDeactivateToPool_stt finaliza inmediatamente." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolManagerSource_stt_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasePool/Actor/BP_PoolableActorBase_stt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInPool_stt_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasePool/Actor/BP_PoolableActorBase_stt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReturnInProgress_stt_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasePool/Actor/BP_PoolableActorBase_stt.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bReturnDeferred_stt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnDeferred_stt;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PoolManagerSource_stt;
	static void NewProp_bIsInPool_stt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInPool_stt;
	static void NewProp_bReturnInProgress_stt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnInProgress_stt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_PoolableActorBase_stt_DisablePhysicsAndGravity_stt, "DisablePhysicsAndGravity_stt" }, // 3941543916
		{ &Z_Construct_UFunction_ABP_PoolableActorBase_stt_EnablePhysicsAndGravity_stt, "EnablePhysicsAndGravity_stt" }, // 3061609353
		{ &Z_Construct_UFunction_ABP_PoolableActorBase_stt_FinalizeReturnToPool_stt, "FinalizeReturnToPool_stt" }, // 1039334235
		{ &Z_Construct_UFunction_ABP_PoolableActorBase_stt_GetPoolManager_stt, "GetPoolManager_stt" }, // 255800318
		{ &Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsInPool_stt, "IsInPool_stt" }, // 330338650
		{ &Z_Construct_UFunction_ABP_PoolableActorBase_stt_IsReturnInProgress_stt, "IsReturnInProgress_stt" }, // 80210978
		{ &Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnBeginReturnToPool_stt, "OnBeginReturnToPool_stt" }, // 1055833003
		{ &Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnBPIRequestDeactivateToPool_stt, "OnBPIRequestDeactivateToPool_stt" }, // 161580216
		{ &Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnFinalReturnToPool_stt, "OnFinalReturnToPool_stt" }, // 2325708270
		{ &Z_Construct_UFunction_ABP_PoolableActorBase_stt_OnTakenFromPool_stt, "OnTakenFromPool_stt" }, // 3030487811
		{ &Z_Construct_UFunction_ABP_PoolableActorBase_stt_RequestDeactivateToPool_stt, "RequestDeactivateToPool_stt" }, // 4266140274
		{ &Z_Construct_UFunction_ABP_PoolableActorBase_stt_SetPhysicsAndGravityEnabled_stt, "SetPhysicsAndGravityEnabled_stt" }, // 270303591
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_PoolableActorBase_stt>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::NewProp_bReturnDeferred_stt_SetBit(void* Obj)
{
	((ABP_PoolableActorBase_stt*)Obj)->bReturnDeferred_stt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::NewProp_bReturnDeferred_stt = { "bReturnDeferred_stt", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABP_PoolableActorBase_stt), &Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::NewProp_bReturnDeferred_stt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReturnDeferred_stt_MetaData), NewProp_bReturnDeferred_stt_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::NewProp_PoolManagerSource_stt = { "PoolManagerSource_stt", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABP_PoolableActorBase_stt, PoolManagerSource_stt), Z_Construct_UClass_UBPC_PoolManager_stt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolManagerSource_stt_MetaData), NewProp_PoolManagerSource_stt_MetaData) };
void Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::NewProp_bIsInPool_stt_SetBit(void* Obj)
{
	((ABP_PoolableActorBase_stt*)Obj)->bIsInPool_stt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::NewProp_bIsInPool_stt = { "bIsInPool_stt", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABP_PoolableActorBase_stt), &Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::NewProp_bIsInPool_stt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInPool_stt_MetaData), NewProp_bIsInPool_stt_MetaData) };
void Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::NewProp_bReturnInProgress_stt_SetBit(void* Obj)
{
	((ABP_PoolableActorBase_stt*)Obj)->bReturnInProgress_stt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::NewProp_bReturnInProgress_stt = { "bReturnInProgress_stt", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABP_PoolableActorBase_stt), &Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::NewProp_bReturnInProgress_stt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReturnInProgress_stt_MetaData), NewProp_bReturnInProgress_stt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::NewProp_bReturnDeferred_stt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::NewProp_PoolManagerSource_stt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::NewProp_bIsInPool_stt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::NewProp_bReturnInProgress_stt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TTSWeapons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBPI_PoolableActor_stt_NoRegister, (int32)VTABLE_OFFSET(ABP_PoolableActorBase_stt, IBPI_PoolableActor_stt), false },  // 3078427042
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::ClassParams = {
	&ABP_PoolableActorBase_stt::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::Class_MetaDataParams), Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABP_PoolableActorBase_stt()
{
	if (!Z_Registration_Info_UClass_ABP_PoolableActorBase_stt.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABP_PoolableActorBase_stt.OuterSingleton, Z_Construct_UClass_ABP_PoolableActorBase_stt_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABP_PoolableActorBase_stt.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_PoolableActorBase_stt);
ABP_PoolableActorBase_stt::~ABP_PoolableActorBase_stt() {}
// ********** End Class ABP_PoolableActorBase_stt **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_Actor_BP_PoolableActorBase_stt_h__Script_TTSWeapons_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABP_PoolableActorBase_stt, ABP_PoolableActorBase_stt::StaticClass, TEXT("ABP_PoolableActorBase_stt"), &Z_Registration_Info_UClass_ABP_PoolableActorBase_stt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABP_PoolableActorBase_stt), 3522678381U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_Actor_BP_PoolableActorBase_stt_h__Script_TTSWeapons_3046147789(TEXT("/Script/TTSWeapons"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_Actor_BP_PoolableActorBase_stt_h__Script_TTSWeapons_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_Actor_BP_PoolableActorBase_stt_h__Script_TTSWeapons_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
