// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasePool/BPI/BPI_PoolableActor_stt.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBPI_PoolableActor_stt() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
TTSWEAPONS_API UClass* Z_Construct_UClass_UBPI_PoolableActor_stt();
TTSWEAPONS_API UClass* Z_Construct_UClass_UBPI_PoolableActor_stt_NoRegister();
UPackage* Z_Construct_UPackage__Script_TTSWeapons();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UBPI_PoolableActor_stt Function BPI_DisablePhysicsAndGravity_stt *****
void IBPI_PoolableActor_stt::BPI_DisablePhysicsAndGravity_stt()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_DisablePhysicsAndGravity_stt instead.");
}
static FName NAME_UBPI_PoolableActor_stt_BPI_DisablePhysicsAndGravity_stt = FName(TEXT("BPI_DisablePhysicsAndGravity_stt"));
void IBPI_PoolableActor_stt::Execute_BPI_DisablePhysicsAndGravity_stt(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBPI_PoolableActor_stt::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UBPI_PoolableActor_stt_BPI_DisablePhysicsAndGravity_stt);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IBPI_PoolableActor_stt*)(O->GetNativeInterfaceAddress(UBPI_PoolableActor_stt::StaticClass())))
	{
		I->BPI_DisablePhysicsAndGravity_stt_Implementation();
	}
}
struct Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_DisablePhysicsAndGravity_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt|BPI" },
		{ "Comment", "// Atajo para desactivar fisica + gravedad.\n" },
		{ "ModuleRelativePath", "Public/BasePool/BPI/BPI_PoolableActor_stt.h" },
		{ "ToolTip", "Atajo para desactivar fisica + gravedad." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_DisablePhysicsAndGravity_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPI_PoolableActor_stt, nullptr, "BPI_DisablePhysicsAndGravity_stt", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_DisablePhysicsAndGravity_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_DisablePhysicsAndGravity_stt_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_DisablePhysicsAndGravity_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_DisablePhysicsAndGravity_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBPI_PoolableActor_stt::execBPI_DisablePhysicsAndGravity_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_DisablePhysicsAndGravity_stt_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UBPI_PoolableActor_stt Function BPI_DisablePhysicsAndGravity_stt *******

// ********** Begin Interface UBPI_PoolableActor_stt Function BPI_EnablePhysicsAndGravity_stt ******
void IBPI_PoolableActor_stt::BPI_EnablePhysicsAndGravity_stt()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_EnablePhysicsAndGravity_stt instead.");
}
static FName NAME_UBPI_PoolableActor_stt_BPI_EnablePhysicsAndGravity_stt = FName(TEXT("BPI_EnablePhysicsAndGravity_stt"));
void IBPI_PoolableActor_stt::Execute_BPI_EnablePhysicsAndGravity_stt(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBPI_PoolableActor_stt::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UBPI_PoolableActor_stt_BPI_EnablePhysicsAndGravity_stt);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IBPI_PoolableActor_stt*)(O->GetNativeInterfaceAddress(UBPI_PoolableActor_stt::StaticClass())))
	{
		I->BPI_EnablePhysicsAndGravity_stt_Implementation();
	}
}
struct Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_EnablePhysicsAndGravity_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt|BPI" },
		{ "Comment", "// Atajo para activar fisica + gravedad.\n" },
		{ "ModuleRelativePath", "Public/BasePool/BPI/BPI_PoolableActor_stt.h" },
		{ "ToolTip", "Atajo para activar fisica + gravedad." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_EnablePhysicsAndGravity_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPI_PoolableActor_stt, nullptr, "BPI_EnablePhysicsAndGravity_stt", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_EnablePhysicsAndGravity_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_EnablePhysicsAndGravity_stt_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_EnablePhysicsAndGravity_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_EnablePhysicsAndGravity_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBPI_PoolableActor_stt::execBPI_EnablePhysicsAndGravity_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_EnablePhysicsAndGravity_stt_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UBPI_PoolableActor_stt Function BPI_EnablePhysicsAndGravity_stt ********

// ********** Begin Interface UBPI_PoolableActor_stt Function BPI_FinalizeReturnToPool_stt *********
void IBPI_PoolableActor_stt::BPI_FinalizeReturnToPool_stt()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_FinalizeReturnToPool_stt instead.");
}
static FName NAME_UBPI_PoolableActor_stt_BPI_FinalizeReturnToPool_stt = FName(TEXT("BPI_FinalizeReturnToPool_stt"));
void IBPI_PoolableActor_stt::Execute_BPI_FinalizeReturnToPool_stt(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBPI_PoolableActor_stt::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UBPI_PoolableActor_stt_BPI_FinalizeReturnToPool_stt);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IBPI_PoolableActor_stt*)(O->GetNativeInterfaceAddress(UBPI_PoolableActor_stt::StaticClass())))
	{
		I->BPI_FinalizeReturnToPool_stt_Implementation();
	}
}
struct Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_FinalizeReturnToPool_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt|BPI" },
		{ "Comment", "// Solicita fase 2 de retorno (finalize).\n" },
		{ "ModuleRelativePath", "Public/BasePool/BPI/BPI_PoolableActor_stt.h" },
		{ "ToolTip", "Solicita fase 2 de retorno (finalize)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_FinalizeReturnToPool_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPI_PoolableActor_stt, nullptr, "BPI_FinalizeReturnToPool_stt", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_FinalizeReturnToPool_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_FinalizeReturnToPool_stt_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_FinalizeReturnToPool_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_FinalizeReturnToPool_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBPI_PoolableActor_stt::execBPI_FinalizeReturnToPool_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_FinalizeReturnToPool_stt_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UBPI_PoolableActor_stt Function BPI_FinalizeReturnToPool_stt ***********

// ********** Begin Interface UBPI_PoolableActor_stt Function BPI_IsInPool_stt *********************
struct BPI_PoolableActor_stt_eventBPI_IsInPool_stt_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	BPI_PoolableActor_stt_eventBPI_IsInPool_stt_Parms()
		: ReturnValue(false)
	{
	}
};
bool IBPI_PoolableActor_stt::BPI_IsInPool_stt() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_IsInPool_stt instead.");
	BPI_PoolableActor_stt_eventBPI_IsInPool_stt_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UBPI_PoolableActor_stt_BPI_IsInPool_stt = FName(TEXT("BPI_IsInPool_stt"));
bool IBPI_PoolableActor_stt::Execute_BPI_IsInPool_stt(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBPI_PoolableActor_stt::StaticClass()));
	BPI_PoolableActor_stt_eventBPI_IsInPool_stt_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UBPI_PoolableActor_stt_BPI_IsInPool_stt);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IBPI_PoolableActor_stt*)(O->GetNativeInterfaceAddress(UBPI_PoolableActor_stt::StaticClass())))
	{
		Parms.ReturnValue = I->BPI_IsInPool_stt_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsInPool_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt|BPI" },
		{ "Comment", "// Estado: true si esta guardado/inactivo dentro del pool.\n" },
		{ "ModuleRelativePath", "Public/BasePool/BPI/BPI_PoolableActor_stt.h" },
		{ "ToolTip", "Estado: true si esta guardado/inactivo dentro del pool." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsInPool_stt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BPI_PoolableActor_stt_eventBPI_IsInPool_stt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsInPool_stt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BPI_PoolableActor_stt_eventBPI_IsInPool_stt_Parms), &Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsInPool_stt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsInPool_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsInPool_stt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsInPool_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsInPool_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPI_PoolableActor_stt, nullptr, "BPI_IsInPool_stt", Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsInPool_stt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsInPool_stt_Statics::PropPointers), sizeof(BPI_PoolableActor_stt_eventBPI_IsInPool_stt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsInPool_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsInPool_stt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BPI_PoolableActor_stt_eventBPI_IsInPool_stt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsInPool_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsInPool_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBPI_PoolableActor_stt::execBPI_IsInPool_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BPI_IsInPool_stt_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UBPI_PoolableActor_stt Function BPI_IsInPool_stt ***********************

// ********** Begin Interface UBPI_PoolableActor_stt Function BPI_IsReturnInProgress_stt ***********
struct BPI_PoolableActor_stt_eventBPI_IsReturnInProgress_stt_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	BPI_PoolableActor_stt_eventBPI_IsReturnInProgress_stt_Parms()
		: ReturnValue(false)
	{
	}
};
bool IBPI_PoolableActor_stt::BPI_IsReturnInProgress_stt() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_IsReturnInProgress_stt instead.");
	BPI_PoolableActor_stt_eventBPI_IsReturnInProgress_stt_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UBPI_PoolableActor_stt_BPI_IsReturnInProgress_stt = FName(TEXT("BPI_IsReturnInProgress_stt"));
bool IBPI_PoolableActor_stt::Execute_BPI_IsReturnInProgress_stt(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBPI_PoolableActor_stt::StaticClass()));
	BPI_PoolableActor_stt_eventBPI_IsReturnInProgress_stt_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UBPI_PoolableActor_stt_BPI_IsReturnInProgress_stt);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IBPI_PoolableActor_stt*)(O->GetNativeInterfaceAddress(UBPI_PoolableActor_stt::StaticClass())))
	{
		Parms.ReturnValue = I->BPI_IsReturnInProgress_stt_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsReturnInProgress_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt|BPI" },
		{ "Comment", "// Estado: true si ya inicio el retorno y esta pendiente de finalize.\n" },
		{ "ModuleRelativePath", "Public/BasePool/BPI/BPI_PoolableActor_stt.h" },
		{ "ToolTip", "Estado: true si ya inicio el retorno y esta pendiente de finalize." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsReturnInProgress_stt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BPI_PoolableActor_stt_eventBPI_IsReturnInProgress_stt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsReturnInProgress_stt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BPI_PoolableActor_stt_eventBPI_IsReturnInProgress_stt_Parms), &Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsReturnInProgress_stt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsReturnInProgress_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsReturnInProgress_stt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsReturnInProgress_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsReturnInProgress_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPI_PoolableActor_stt, nullptr, "BPI_IsReturnInProgress_stt", Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsReturnInProgress_stt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsReturnInProgress_stt_Statics::PropPointers), sizeof(BPI_PoolableActor_stt_eventBPI_IsReturnInProgress_stt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsReturnInProgress_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsReturnInProgress_stt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BPI_PoolableActor_stt_eventBPI_IsReturnInProgress_stt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsReturnInProgress_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsReturnInProgress_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBPI_PoolableActor_stt::execBPI_IsReturnInProgress_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BPI_IsReturnInProgress_stt_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UBPI_PoolableActor_stt Function BPI_IsReturnInProgress_stt *************

// ********** Begin Interface UBPI_PoolableActor_stt Function BPI_RequestDeactivateToPool_stt ******
void IBPI_PoolableActor_stt::BPI_RequestDeactivateToPool_stt()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_RequestDeactivateToPool_stt instead.");
}
static FName NAME_UBPI_PoolableActor_stt_BPI_RequestDeactivateToPool_stt = FName(TEXT("BPI_RequestDeactivateToPool_stt"));
void IBPI_PoolableActor_stt::Execute_BPI_RequestDeactivateToPool_stt(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBPI_PoolableActor_stt::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UBPI_PoolableActor_stt_BPI_RequestDeactivateToPool_stt);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IBPI_PoolableActor_stt*)(O->GetNativeInterfaceAddress(UBPI_PoolableActor_stt::StaticClass())))
	{
		I->BPI_RequestDeactivateToPool_stt_Implementation();
	}
}
struct Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_RequestDeactivateToPool_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt|BPI" },
		{ "Comment", "// Solicita fase 1 de retorno (request).\n" },
		{ "ModuleRelativePath", "Public/BasePool/BPI/BPI_PoolableActor_stt.h" },
		{ "ToolTip", "Solicita fase 1 de retorno (request)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_RequestDeactivateToPool_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPI_PoolableActor_stt, nullptr, "BPI_RequestDeactivateToPool_stt", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_RequestDeactivateToPool_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_RequestDeactivateToPool_stt_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_RequestDeactivateToPool_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_RequestDeactivateToPool_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBPI_PoolableActor_stt::execBPI_RequestDeactivateToPool_stt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_RequestDeactivateToPool_stt_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UBPI_PoolableActor_stt Function BPI_RequestDeactivateToPool_stt ********

// ********** Begin Interface UBPI_PoolableActor_stt Function BPI_SetPhysicsAndGravityEnabled_stt **
struct BPI_PoolableActor_stt_eventBPI_SetPhysicsAndGravityEnabled_stt_Parms
{
	bool bEnablePhysics;
	bool bEnableGravity;
};
void IBPI_PoolableActor_stt::BPI_SetPhysicsAndGravityEnabled_stt(bool bEnablePhysics, bool bEnableGravity)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_SetPhysicsAndGravityEnabled_stt instead.");
}
static FName NAME_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt = FName(TEXT("BPI_SetPhysicsAndGravityEnabled_stt"));
void IBPI_PoolableActor_stt::Execute_BPI_SetPhysicsAndGravityEnabled_stt(UObject* O, bool bEnablePhysics, bool bEnableGravity)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBPI_PoolableActor_stt::StaticClass()));
	BPI_PoolableActor_stt_eventBPI_SetPhysicsAndGravityEnabled_stt_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt);
	if (Func)
	{
		Parms.bEnablePhysics=bEnablePhysics;
		Parms.bEnableGravity=bEnableGravity;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IBPI_PoolableActor_stt*)(O->GetNativeInterfaceAddress(UBPI_PoolableActor_stt::StaticClass())))
	{
		I->BPI_SetPhysicsAndGravityEnabled_stt_Implementation(bEnablePhysics,bEnableGravity);
	}
}
struct Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool_stt|BPI" },
		{ "Comment", "// Habilita/deshabilita solamente fisica y gravedad del actor poolable.\n" },
		{ "ModuleRelativePath", "Public/BasePool/BPI/BPI_PoolableActor_stt.h" },
		{ "ToolTip", "Habilita/deshabilita solamente fisica y gravedad del actor poolable." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnablePhysics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePhysics;
	static void NewProp_bEnableGravity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGravity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt_Statics::NewProp_bEnablePhysics_SetBit(void* Obj)
{
	((BPI_PoolableActor_stt_eventBPI_SetPhysicsAndGravityEnabled_stt_Parms*)Obj)->bEnablePhysics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt_Statics::NewProp_bEnablePhysics = { "bEnablePhysics", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BPI_PoolableActor_stt_eventBPI_SetPhysicsAndGravityEnabled_stt_Parms), &Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt_Statics::NewProp_bEnablePhysics_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt_Statics::NewProp_bEnableGravity_SetBit(void* Obj)
{
	((BPI_PoolableActor_stt_eventBPI_SetPhysicsAndGravityEnabled_stt_Parms*)Obj)->bEnableGravity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt_Statics::NewProp_bEnableGravity = { "bEnableGravity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BPI_PoolableActor_stt_eventBPI_SetPhysicsAndGravityEnabled_stt_Parms), &Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt_Statics::NewProp_bEnableGravity_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt_Statics::NewProp_bEnablePhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt_Statics::NewProp_bEnableGravity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPI_PoolableActor_stt, nullptr, "BPI_SetPhysicsAndGravityEnabled_stt", Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt_Statics::PropPointers), sizeof(BPI_PoolableActor_stt_eventBPI_SetPhysicsAndGravityEnabled_stt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BPI_PoolableActor_stt_eventBPI_SetPhysicsAndGravityEnabled_stt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBPI_PoolableActor_stt::execBPI_SetPhysicsAndGravityEnabled_stt)
{
	P_GET_UBOOL(Z_Param_bEnablePhysics);
	P_GET_UBOOL(Z_Param_bEnableGravity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_SetPhysicsAndGravityEnabled_stt_Implementation(Z_Param_bEnablePhysics,Z_Param_bEnableGravity);
	P_NATIVE_END;
}
// ********** End Interface UBPI_PoolableActor_stt Function BPI_SetPhysicsAndGravityEnabled_stt ****

// ********** Begin Interface UBPI_PoolableActor_stt ***********************************************
void UBPI_PoolableActor_stt::StaticRegisterNativesUBPI_PoolableActor_stt()
{
	UClass* Class = UBPI_PoolableActor_stt::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BPI_DisablePhysicsAndGravity_stt", &IBPI_PoolableActor_stt::execBPI_DisablePhysicsAndGravity_stt },
		{ "BPI_EnablePhysicsAndGravity_stt", &IBPI_PoolableActor_stt::execBPI_EnablePhysicsAndGravity_stt },
		{ "BPI_FinalizeReturnToPool_stt", &IBPI_PoolableActor_stt::execBPI_FinalizeReturnToPool_stt },
		{ "BPI_IsInPool_stt", &IBPI_PoolableActor_stt::execBPI_IsInPool_stt },
		{ "BPI_IsReturnInProgress_stt", &IBPI_PoolableActor_stt::execBPI_IsReturnInProgress_stt },
		{ "BPI_RequestDeactivateToPool_stt", &IBPI_PoolableActor_stt::execBPI_RequestDeactivateToPool_stt },
		{ "BPI_SetPhysicsAndGravityEnabled_stt", &IBPI_PoolableActor_stt::execBPI_SetPhysicsAndGravityEnabled_stt },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBPI_PoolableActor_stt;
UClass* UBPI_PoolableActor_stt::GetPrivateStaticClass()
{
	using TClass = UBPI_PoolableActor_stt;
	if (!Z_Registration_Info_UClass_UBPI_PoolableActor_stt.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BPI_PoolableActor_stt"),
			Z_Registration_Info_UClass_UBPI_PoolableActor_stt.InnerSingleton,
			StaticRegisterNativesUBPI_PoolableActor_stt,
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
	return Z_Registration_Info_UClass_UBPI_PoolableActor_stt.InnerSingleton;
}
UClass* Z_Construct_UClass_UBPI_PoolableActor_stt_NoRegister()
{
	return UBPI_PoolableActor_stt::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBPI_PoolableActor_stt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BasePool/BPI/BPI_PoolableActor_stt.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_DisablePhysicsAndGravity_stt, "BPI_DisablePhysicsAndGravity_stt" }, // 3725133175
		{ &Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_EnablePhysicsAndGravity_stt, "BPI_EnablePhysicsAndGravity_stt" }, // 1890275453
		{ &Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_FinalizeReturnToPool_stt, "BPI_FinalizeReturnToPool_stt" }, // 3010644004
		{ &Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsInPool_stt, "BPI_IsInPool_stt" }, // 3740236279
		{ &Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_IsReturnInProgress_stt, "BPI_IsReturnInProgress_stt" }, // 1315145693
		{ &Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_RequestDeactivateToPool_stt, "BPI_RequestDeactivateToPool_stt" }, // 3095606121
		{ &Z_Construct_UFunction_UBPI_PoolableActor_stt_BPI_SetPhysicsAndGravityEnabled_stt, "BPI_SetPhysicsAndGravityEnabled_stt" }, // 3101011196
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBPI_PoolableActor_stt>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBPI_PoolableActor_stt_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_TTSWeapons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_PoolableActor_stt_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBPI_PoolableActor_stt_Statics::ClassParams = {
	&UBPI_PoolableActor_stt::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_PoolableActor_stt_Statics::Class_MetaDataParams), Z_Construct_UClass_UBPI_PoolableActor_stt_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBPI_PoolableActor_stt()
{
	if (!Z_Registration_Info_UClass_UBPI_PoolableActor_stt.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBPI_PoolableActor_stt.OuterSingleton, Z_Construct_UClass_UBPI_PoolableActor_stt_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBPI_PoolableActor_stt.OuterSingleton;
}
UBPI_PoolableActor_stt::UBPI_PoolableActor_stt(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBPI_PoolableActor_stt);
// ********** End Interface UBPI_PoolableActor_stt *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPI_BPI_PoolableActor_stt_h__Script_TTSWeapons_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBPI_PoolableActor_stt, UBPI_PoolableActor_stt::StaticClass, TEXT("UBPI_PoolableActor_stt"), &Z_Registration_Info_UClass_UBPI_PoolableActor_stt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBPI_PoolableActor_stt), 3078427042U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPI_BPI_PoolableActor_stt_h__Script_TTSWeapons_2484871002(TEXT("/Script/TTSWeapons"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPI_BPI_PoolableActor_stt_h__Script_TTSWeapons_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_BasePool_BPI_BPI_PoolableActor_stt_h__Script_TTSWeapons_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
