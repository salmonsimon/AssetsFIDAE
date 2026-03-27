// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Props/BpcPoolBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBpcPoolBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TTSWEAPONS_API UClass* Z_Construct_UClass_UBpcPoolBase();
TTSWEAPONS_API UClass* Z_Construct_UClass_UBpcPoolBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_TTSWeapons();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBpcPoolBase Function FillPool *******************************************
struct Z_Construct_UFunction_UBpcPoolBase_FillPool_Statics
{
	struct BpcPoolBase_eventFillPool_Parms
	{
		int32 Amount;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool" },
		{ "Comment", "// Fuerza la creacion de mas elementos dentro del mismo pool.\n// Devuelve cuantos actores realmente se pudieron agregar.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Fuerza la creacion de mas elementos dentro del mismo pool.\nDevuelve cuantos actores realmente se pudieron agregar." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBpcPoolBase_FillPool_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BpcPoolBase_eventFillPool_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBpcPoolBase_FillPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BpcPoolBase_eventFillPool_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcPoolBase_FillPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcPoolBase_FillPool_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcPoolBase_FillPool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcPoolBase_FillPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcPoolBase_FillPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcPoolBase, nullptr, "FillPool", Z_Construct_UFunction_UBpcPoolBase_FillPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcPoolBase_FillPool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcPoolBase_FillPool_Statics::BpcPoolBase_eventFillPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcPoolBase_FillPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcPoolBase_FillPool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcPoolBase_FillPool_Statics::BpcPoolBase_eventFillPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcPoolBase_FillPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcPoolBase_FillPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcPoolBase::execFillPool)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->FillPool(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UBpcPoolBase Function FillPool *********************************************

// ********** Begin Class UBpcPoolBase Function GetAvailableActor **********************************
struct Z_Construct_UFunction_UBpcPoolBase_GetAvailableActor_Statics
{
	struct BpcPoolBase_eventGetAvailableActor_Parms
	{
		FTransform SpawnTransform;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool" },
		{ "Comment", "// Obtiene un actor disponible, lo activa y lo posiciona con SpawnTransform.\n// Si no hay disponibles y bAutoExpand es true, intenta crecer automaticamente.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Obtiene un actor disponible, lo activa y lo posiciona con SpawnTransform.\nSi no hay disponibles y bAutoExpand es true, intenta crecer automaticamente." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBpcPoolBase_GetAvailableActor_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BpcPoolBase_eventGetAvailableActor_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransform_MetaData), NewProp_SpawnTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBpcPoolBase_GetAvailableActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BpcPoolBase_eventGetAvailableActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcPoolBase_GetAvailableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcPoolBase_GetAvailableActor_Statics::NewProp_SpawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcPoolBase_GetAvailableActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcPoolBase_GetAvailableActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcPoolBase_GetAvailableActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcPoolBase, nullptr, "GetAvailableActor", Z_Construct_UFunction_UBpcPoolBase_GetAvailableActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcPoolBase_GetAvailableActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcPoolBase_GetAvailableActor_Statics::BpcPoolBase_eventGetAvailableActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcPoolBase_GetAvailableActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcPoolBase_GetAvailableActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcPoolBase_GetAvailableActor_Statics::BpcPoolBase_eventGetAvailableActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcPoolBase_GetAvailableActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcPoolBase_GetAvailableActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcPoolBase::execGetAvailableActor)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetAvailableActor(Z_Param_Out_SpawnTransform);
	P_NATIVE_END;
}
// ********** End Class UBpcPoolBase Function GetAvailableActor ************************************

// ********** Begin Class UBpcPoolBase Function GetAvailableCount **********************************
struct Z_Construct_UFunction_UBpcPoolBase_GetAvailableCount_Statics
{
	struct BpcPoolBase_eventGetAvailableCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool" },
		{ "Comment", "// Cantidad de instancias actualmente disponibles para reutilizar.\n// No incluye actores activos fuera del pool.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Cantidad de instancias actualmente disponibles para reutilizar.\nNo incluye actores activos fuera del pool." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBpcPoolBase_GetAvailableCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BpcPoolBase_eventGetAvailableCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcPoolBase_GetAvailableCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcPoolBase_GetAvailableCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcPoolBase_GetAvailableCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcPoolBase_GetAvailableCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcPoolBase, nullptr, "GetAvailableCount", Z_Construct_UFunction_UBpcPoolBase_GetAvailableCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcPoolBase_GetAvailableCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcPoolBase_GetAvailableCount_Statics::BpcPoolBase_eventGetAvailableCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcPoolBase_GetAvailableCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcPoolBase_GetAvailableCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcPoolBase_GetAvailableCount_Statics::BpcPoolBase_eventGetAvailableCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcPoolBase_GetAvailableCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcPoolBase_GetAvailableCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcPoolBase::execGetAvailableCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAvailableCount();
	P_NATIVE_END;
}
// ********** End Class UBpcPoolBase Function GetAvailableCount ************************************

// ********** Begin Class UBpcPoolBase Function GetTotalCount **************************************
struct Z_Construct_UFunction_UBpcPoolBase_GetTotalCount_Statics
{
	struct BpcPoolBase_eventGetTotalCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool" },
		{ "Comment", "// Cantidad total de actores pertenecientes al pool (activos + disponibles).\n" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Cantidad total de actores pertenecientes al pool (activos + disponibles)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBpcPoolBase_GetTotalCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BpcPoolBase_eventGetTotalCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcPoolBase_GetTotalCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcPoolBase_GetTotalCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcPoolBase_GetTotalCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcPoolBase_GetTotalCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcPoolBase, nullptr, "GetTotalCount", Z_Construct_UFunction_UBpcPoolBase_GetTotalCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcPoolBase_GetTotalCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcPoolBase_GetTotalCount_Statics::BpcPoolBase_eventGetTotalCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcPoolBase_GetTotalCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcPoolBase_GetTotalCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcPoolBase_GetTotalCount_Statics::BpcPoolBase_eventGetTotalCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcPoolBase_GetTotalCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcPoolBase_GetTotalCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcPoolBase::execGetTotalCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTotalCount();
	P_NATIVE_END;
}
// ********** End Class UBpcPoolBase Function GetTotalCount ****************************************

// ********** Begin Class UBpcPoolBase Function InitPool *******************************************
struct Z_Construct_UFunction_UBpcPoolBase_InitPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool" },
		{ "Comment", "// Inicializa el pool una sola vez.\n// Crea instancias iniciales segun InitialPoolSize y las deja inactivas.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Inicializa el pool una sola vez.\nCrea instancias iniciales segun InitialPoolSize y las deja inactivas." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcPoolBase_InitPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcPoolBase, nullptr, "InitPool", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcPoolBase_InitPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcPoolBase_InitPool_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBpcPoolBase_InitPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcPoolBase_InitPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcPoolBase::execInitPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitPool();
	P_NATIVE_END;
}
// ********** End Class UBpcPoolBase Function InitPool *********************************************

// ********** Begin Class UBpcPoolBase Function ReturnActorToPool **********************************
struct Z_Construct_UFunction_UBpcPoolBase_ReturnActorToPool_Statics
{
	struct BpcPoolBase_eventReturnActorToPool_Parms
	{
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool" },
		{ "Comment", "// Retorna un actor al pool.\n// La implementacion es idempotente: devolver 2 veces el mismo actor no rompe el estado.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Retorna un actor al pool.\nLa implementacion es idempotente: devolver 2 veces el mismo actor no rompe el estado." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBpcPoolBase_ReturnActorToPool_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BpcPoolBase_eventReturnActorToPool_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBpcPoolBase_ReturnActorToPool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BpcPoolBase_eventReturnActorToPool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBpcPoolBase_ReturnActorToPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BpcPoolBase_eventReturnActorToPool_Parms), &Z_Construct_UFunction_UBpcPoolBase_ReturnActorToPool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBpcPoolBase_ReturnActorToPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcPoolBase_ReturnActorToPool_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBpcPoolBase_ReturnActorToPool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcPoolBase_ReturnActorToPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBpcPoolBase_ReturnActorToPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBpcPoolBase, nullptr, "ReturnActorToPool", Z_Construct_UFunction_UBpcPoolBase_ReturnActorToPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcPoolBase_ReturnActorToPool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBpcPoolBase_ReturnActorToPool_Statics::BpcPoolBase_eventReturnActorToPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBpcPoolBase_ReturnActorToPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBpcPoolBase_ReturnActorToPool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBpcPoolBase_ReturnActorToPool_Statics::BpcPoolBase_eventReturnActorToPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBpcPoolBase_ReturnActorToPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBpcPoolBase_ReturnActorToPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBpcPoolBase::execReturnActorToPool)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReturnActorToPool(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UBpcPoolBase Function ReturnActorToPool ************************************

// ********** Begin Class UBpcPoolBase *************************************************************
void UBpcPoolBase::StaticRegisterNativesUBpcPoolBase()
{
	UClass* Class = UBpcPoolBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FillPool", &UBpcPoolBase::execFillPool },
		{ "GetAvailableActor", &UBpcPoolBase::execGetAvailableActor },
		{ "GetAvailableCount", &UBpcPoolBase::execGetAvailableCount },
		{ "GetTotalCount", &UBpcPoolBase::execGetTotalCount },
		{ "InitPool", &UBpcPoolBase::execInitPool },
		{ "ReturnActorToPool", &UBpcPoolBase::execReturnActorToPool },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBpcPoolBase;
UClass* UBpcPoolBase::GetPrivateStaticClass()
{
	using TClass = UBpcPoolBase;
	if (!Z_Registration_Info_UClass_UBpcPoolBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BpcPoolBase"),
			Z_Registration_Info_UClass_UBpcPoolBase.InnerSingleton,
			StaticRegisterNativesUBpcPoolBase,
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
	return Z_Registration_Info_UClass_UBpcPoolBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UBpcPoolBase_NoRegister()
{
	return UBpcPoolBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBpcPoolBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// Componente de pooling generico para actores.\n// Responsabilidades:\n// 1) Crear instancias de una clase objetivo.\n// 2) Mantenerlas inactivas hasta que se pidan.\n// 3) Activarlas/devolverlas de forma segura e idempotente.\n// 4) Exponer API simple para Blueprint.\n" },
		{ "IncludePath", "Props/BpcPoolBase.h" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Componente de pooling generico para actores.\nResponsabilidades:\n1) Crear instancias de una clase objetivo.\n2) Mantenerlas inactivas hasta que se pidan.\n3) Activarlas/devolverlas de forma segura e idempotente.\n4) Exponer API simple para Blueprint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PooledActorClass_MetaData[] = {
		{ "Category", "Pool" },
		{ "Comment", "// Clase de actor que va a construir el pool.\n// Debe ser compatible con el uso esperado por quien consume el pool.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Clase de actor que va a construir el pool.\nDebe ser compatible con el uso esperado por quien consume el pool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialPoolSize_MetaData[] = {
		{ "Category", "Pool" },
		{ "ClampMin", "0" },
		{ "Comment", "// Cantidad inicial de actores al inicializar.\n// Usar un valor razonable evita spikes de spawn durante gameplay.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Cantidad inicial de actores al inicializar.\nUsar un valor razonable evita spikes de spawn durante gameplay." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartInitialized_MetaData[] = {
		{ "Category", "Pool" },
		{ "Comment", "// Si es true, el pool se inicializa automaticamente en BeginPlay.\n// Si es false, debes llamar InitPool manualmente desde BP/C++.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Si es true, el pool se inicializa automaticamente en BeginPlay.\nSi es false, debes llamar InitPool manualmente desde BP/C++." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoExpand_MetaData[] = {
		{ "Category", "Pool" },
		{ "Comment", "// Permite crecer automaticamente cuando no hay disponibles.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Permite crecer automaticamente cuando no hay disponibles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoExpandAmount_MetaData[] = {
		{ "Category", "Pool" },
		{ "ClampMin", "1" },
		{ "Comment", "// Cantidad de actores a agregar por cada crecimiento automatico.\n// Solo aplica cuando bAutoExpand = true.\n" },
		{ "EditCondition", "bAutoExpand" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Cantidad de actores a agregar por cada crecimiento automatico.\nSolo aplica cuando bAutoExpand = true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTeleportPhysicsOnActivate_MetaData[] = {
		{ "Category", "Pool|Physics" },
		{ "Comment", "// Al tomar actor del pool, setea transform usando TeleportPhysics para evitar arrastre fisico.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Al tomar actor del pool, setea transform usando TeleportPhysics para evitar arrastre fisico." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetachFromParentOnReturn_MetaData[] = {
		{ "Category", "Pool|Physics" },
		{ "Comment", "// Al retornar actor al pool, fuerza detach del parent para evitar heredar sockets/parents previos.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Al retornar actor al pool, fuerza detach del parent para evitar heredar sockets/parents previos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetRigidBodyStateOnReturn_MetaData[] = {
		{ "Category", "Pool|Physics" },
		{ "Comment", "// Al retornar actor al pool, limpia velocidades y duerme rigid bodies.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Al retornar actor al pool, limpia velocidades y duerme rigid bodies." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bManagePhysicsAndGravityState_MetaData[] = {
		{ "Category", "Pool|Physics" },
		{ "Comment", "// Si true, el pool controla fisica/gravedad en take/return.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Si true, el pool controla fisica/gravedad en take/return." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePhysicsWhenActive_MetaData[] = {
		{ "Category", "Pool|Physics" },
		{ "Comment", "// Estado de fisica al activar actor.\n" },
		{ "EditCondition", "bManagePhysicsAndGravityState" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Estado de fisica al activar actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGravityWhenActive_MetaData[] = {
		{ "Category", "Pool|Physics" },
		{ "Comment", "// Estado de gravedad al activar actor.\n" },
		{ "EditCondition", "bManagePhysicsAndGravityState" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Estado de gravedad al activar actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePhysicsInPool_MetaData[] = {
		{ "Category", "Pool|Physics" },
		{ "Comment", "// Estado de fisica al guardar actor en pool.\n" },
		{ "EditCondition", "bManagePhysicsAndGravityState" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Estado de fisica al guardar actor en pool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGravityInPool_MetaData[] = {
		{ "Category", "Pool|Physics" },
		{ "Comment", "// Estado de gravedad al guardar actor en pool.\n" },
		{ "EditCondition", "bManagePhysicsAndGravityState" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Estado de gravedad al guardar actor en pool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogPoolLifecycle_MetaData[] = {
		{ "Category", "Pool|Debug" },
		{ "Comment", "// Logs de diagnostico para take/return.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Logs de diagnostico para take/return." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[] = {
		{ "Comment", "// Estado interno: indica si InitPool ya corrio con exito al menos una vez.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Estado interno: indica si InitPool ya corrio con exito al menos una vez." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllPooledActors_MetaData[] = {
		{ "Comment", "// Universo total de instancias que pertenecen a este pool.\n// Se usa para validar pertenencia en ReturnActorToPool.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Universo total de instancias que pertenecen a este pool.\nSe usa para validar pertenencia en ReturnActorToPool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableActors_MetaData[] = {
		{ "Comment", "// Subconjunto de AllPooledActors listo para entregar via GetAvailableActor.\n" },
		{ "ModuleRelativePath", "Public/Props/BpcPoolBase.h" },
		{ "ToolTip", "Subconjunto de AllPooledActors listo para entregar via GetAvailableActor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PooledActorClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialPoolSize;
	static void NewProp_bStartInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartInitialized;
	static void NewProp_bAutoExpand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoExpand;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AutoExpandAmount;
	static void NewProp_bTeleportPhysicsOnActivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleportPhysicsOnActivate;
	static void NewProp_bDetachFromParentOnReturn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetachFromParentOnReturn;
	static void NewProp_bResetRigidBodyStateOnReturn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetRigidBodyStateOnReturn;
	static void NewProp_bManagePhysicsAndGravityState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bManagePhysicsAndGravityState;
	static void NewProp_bEnablePhysicsWhenActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePhysicsWhenActive;
	static void NewProp_bEnableGravityWhenActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGravityWhenActive;
	static void NewProp_bEnablePhysicsInPool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePhysicsInPool;
	static void NewProp_bEnableGravityInPool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGravityInPool;
	static void NewProp_bLogPoolLifecycle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogPoolLifecycle;
	static void NewProp_bIsInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllPooledActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllPooledActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailableActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBpcPoolBase_FillPool, "FillPool" }, // 474379574
		{ &Z_Construct_UFunction_UBpcPoolBase_GetAvailableActor, "GetAvailableActor" }, // 2987968251
		{ &Z_Construct_UFunction_UBpcPoolBase_GetAvailableCount, "GetAvailableCount" }, // 1261954479
		{ &Z_Construct_UFunction_UBpcPoolBase_GetTotalCount, "GetTotalCount" }, // 753891580
		{ &Z_Construct_UFunction_UBpcPoolBase_InitPool, "InitPool" }, // 2381568187
		{ &Z_Construct_UFunction_UBpcPoolBase_ReturnActorToPool, "ReturnActorToPool" }, // 1866362930
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBpcPoolBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_PooledActorClass = { "PooledActorClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBpcPoolBase, PooledActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PooledActorClass_MetaData), NewProp_PooledActorClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_InitialPoolSize = { "InitialPoolSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBpcPoolBase, InitialPoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialPoolSize_MetaData), NewProp_InitialPoolSize_MetaData) };
void Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bStartInitialized_SetBit(void* Obj)
{
	((UBpcPoolBase*)Obj)->bStartInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bStartInitialized = { "bStartInitialized", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBpcPoolBase), &Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bStartInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartInitialized_MetaData), NewProp_bStartInitialized_MetaData) };
void Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bAutoExpand_SetBit(void* Obj)
{
	((UBpcPoolBase*)Obj)->bAutoExpand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bAutoExpand = { "bAutoExpand", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBpcPoolBase), &Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bAutoExpand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoExpand_MetaData), NewProp_bAutoExpand_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_AutoExpandAmount = { "AutoExpandAmount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBpcPoolBase, AutoExpandAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoExpandAmount_MetaData), NewProp_AutoExpandAmount_MetaData) };
void Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bTeleportPhysicsOnActivate_SetBit(void* Obj)
{
	((UBpcPoolBase*)Obj)->bTeleportPhysicsOnActivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bTeleportPhysicsOnActivate = { "bTeleportPhysicsOnActivate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBpcPoolBase), &Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bTeleportPhysicsOnActivate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTeleportPhysicsOnActivate_MetaData), NewProp_bTeleportPhysicsOnActivate_MetaData) };
void Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bDetachFromParentOnReturn_SetBit(void* Obj)
{
	((UBpcPoolBase*)Obj)->bDetachFromParentOnReturn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bDetachFromParentOnReturn = { "bDetachFromParentOnReturn", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBpcPoolBase), &Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bDetachFromParentOnReturn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetachFromParentOnReturn_MetaData), NewProp_bDetachFromParentOnReturn_MetaData) };
void Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bResetRigidBodyStateOnReturn_SetBit(void* Obj)
{
	((UBpcPoolBase*)Obj)->bResetRigidBodyStateOnReturn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bResetRigidBodyStateOnReturn = { "bResetRigidBodyStateOnReturn", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBpcPoolBase), &Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bResetRigidBodyStateOnReturn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetRigidBodyStateOnReturn_MetaData), NewProp_bResetRigidBodyStateOnReturn_MetaData) };
void Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bManagePhysicsAndGravityState_SetBit(void* Obj)
{
	((UBpcPoolBase*)Obj)->bManagePhysicsAndGravityState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bManagePhysicsAndGravityState = { "bManagePhysicsAndGravityState", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBpcPoolBase), &Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bManagePhysicsAndGravityState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bManagePhysicsAndGravityState_MetaData), NewProp_bManagePhysicsAndGravityState_MetaData) };
void Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bEnablePhysicsWhenActive_SetBit(void* Obj)
{
	((UBpcPoolBase*)Obj)->bEnablePhysicsWhenActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bEnablePhysicsWhenActive = { "bEnablePhysicsWhenActive", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBpcPoolBase), &Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bEnablePhysicsWhenActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePhysicsWhenActive_MetaData), NewProp_bEnablePhysicsWhenActive_MetaData) };
void Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bEnableGravityWhenActive_SetBit(void* Obj)
{
	((UBpcPoolBase*)Obj)->bEnableGravityWhenActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bEnableGravityWhenActive = { "bEnableGravityWhenActive", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBpcPoolBase), &Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bEnableGravityWhenActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableGravityWhenActive_MetaData), NewProp_bEnableGravityWhenActive_MetaData) };
void Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bEnablePhysicsInPool_SetBit(void* Obj)
{
	((UBpcPoolBase*)Obj)->bEnablePhysicsInPool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bEnablePhysicsInPool = { "bEnablePhysicsInPool", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBpcPoolBase), &Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bEnablePhysicsInPool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePhysicsInPool_MetaData), NewProp_bEnablePhysicsInPool_MetaData) };
void Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bEnableGravityInPool_SetBit(void* Obj)
{
	((UBpcPoolBase*)Obj)->bEnableGravityInPool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bEnableGravityInPool = { "bEnableGravityInPool", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBpcPoolBase), &Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bEnableGravityInPool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableGravityInPool_MetaData), NewProp_bEnableGravityInPool_MetaData) };
void Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bLogPoolLifecycle_SetBit(void* Obj)
{
	((UBpcPoolBase*)Obj)->bLogPoolLifecycle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bLogPoolLifecycle = { "bLogPoolLifecycle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBpcPoolBase), &Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bLogPoolLifecycle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogPoolLifecycle_MetaData), NewProp_bLogPoolLifecycle_MetaData) };
void Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
{
	((UBpcPoolBase*)Obj)->bIsInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBpcPoolBase), &Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInitialized_MetaData), NewProp_bIsInitialized_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_AllPooledActors_Inner = { "AllPooledActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_AllPooledActors = { "AllPooledActors", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBpcPoolBase, AllPooledActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllPooledActors_MetaData), NewProp_AllPooledActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_AvailableActors_Inner = { "AvailableActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_AvailableActors = { "AvailableActors", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBpcPoolBase, AvailableActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableActors_MetaData), NewProp_AvailableActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBpcPoolBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_PooledActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_InitialPoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bStartInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bAutoExpand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_AutoExpandAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bTeleportPhysicsOnActivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bDetachFromParentOnReturn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bResetRigidBodyStateOnReturn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bManagePhysicsAndGravityState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bEnablePhysicsWhenActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bEnableGravityWhenActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bEnablePhysicsInPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bEnableGravityInPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bLogPoolLifecycle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_bIsInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_AllPooledActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_AllPooledActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_AvailableActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBpcPoolBase_Statics::NewProp_AvailableActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBpcPoolBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBpcPoolBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TTSWeapons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBpcPoolBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBpcPoolBase_Statics::ClassParams = {
	&UBpcPoolBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBpcPoolBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBpcPoolBase_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBpcPoolBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UBpcPoolBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBpcPoolBase()
{
	if (!Z_Registration_Info_UClass_UBpcPoolBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBpcPoolBase.OuterSingleton, Z_Construct_UClass_UBpcPoolBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBpcPoolBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBpcPoolBase);
UBpcPoolBase::~UBpcPoolBase() {}
// ********** End Class UBpcPoolBase ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcPoolBase_h__Script_TTSWeapons_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBpcPoolBase, UBpcPoolBase::StaticClass, TEXT("UBpcPoolBase"), &Z_Registration_Info_UClass_UBpcPoolBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBpcPoolBase), 3301427530U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcPoolBase_h__Script_TTSWeapons_1306431299(TEXT("/Script/TTSWeapons"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcPoolBase_h__Script_TTSWeapons_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BpcPoolBase_h__Script_TTSWeapons_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
