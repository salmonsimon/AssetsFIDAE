// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Props/PoolableActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePoolableActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
TTSWEAPONS_API UClass* Z_Construct_UClass_UBpcPoolBase_NoRegister();
TTSWEAPONS_API UClass* Z_Construct_UClass_UPoolableActor();
TTSWEAPONS_API UClass* Z_Construct_UClass_UPoolableActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_TTSWeapons();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UPoolableActor Function GetPoolSource ********************************
struct PoolableActor_eventGetPoolSource_Parms
{
	UBpcPoolBase* ReturnValue;

	/** Constructor, initializes return property only **/
	PoolableActor_eventGetPoolSource_Parms()
		: ReturnValue(NULL)
	{
	}
};
UBpcPoolBase* IPoolableActor::GetPoolSource() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPoolSource instead.");
	PoolableActor_eventGetPoolSource_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UPoolableActor_GetPoolSource = FName(TEXT("GetPoolSource"));
UBpcPoolBase* IPoolableActor::Execute_GetPoolSource(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPoolableActor::StaticClass()));
	PoolableActor_eventGetPoolSource_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPoolableActor_GetPoolSource);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IPoolableActor*)(O->GetNativeInterfaceAddress(UPoolableActor::StaticClass())))
	{
		Parms.ReturnValue = I->GetPoolSource_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPoolableActor_GetPoolSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool" },
		{ "Comment", "// Permite consultar el pool que originalmente gestiona este actor.\n// Se usa durante el retorno para no depender de FindComponentByClass.\n" },
		{ "ModuleRelativePath", "Public/Props/PoolableActor.h" },
		{ "ToolTip", "Permite consultar el pool que originalmente gestiona este actor.\nSe usa durante el retorno para no depender de FindComponentByClass." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoolableActor_GetPoolSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolableActor_eventGetPoolSource_Parms, ReturnValue), Z_Construct_UClass_UBpcPoolBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoolableActor_GetPoolSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolableActor_GetPoolSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableActor_GetPoolSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolableActor_GetPoolSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolableActor, nullptr, "GetPoolSource", Z_Construct_UFunction_UPoolableActor_GetPoolSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableActor_GetPoolSource_Statics::PropPointers), sizeof(PoolableActor_eventGetPoolSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableActor_GetPoolSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolableActor_GetPoolSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PoolableActor_eventGetPoolSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoolableActor_GetPoolSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolableActor_GetPoolSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPoolableActor::execGetPoolSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBpcPoolBase**)Z_Param__Result=P_THIS->GetPoolSource_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPoolableActor Function GetPoolSource **********************************

// ********** Begin Interface UPoolableActor Function OnReturnedToPool *****************************
void IPoolableActor::OnReturnedToPool()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnReturnedToPool instead.");
}
static FName NAME_UPoolableActor_OnReturnedToPool = FName(TEXT("OnReturnedToPool"));
void IPoolableActor::Execute_OnReturnedToPool(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPoolableActor::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UPoolableActor_OnReturnedToPool);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IPoolableActor*)(O->GetNativeInterfaceAddress(UPoolableActor::StaticClass())))
	{
		I->OnReturnedToPool_Implementation();
	}
}
struct Z_Construct_UFunction_UPoolableActor_OnReturnedToPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool" },
		{ "Comment", "// Callback al volver al pool.\n// Aqui se suelen apagar timers, particulas, sonidos, etc.\n" },
		{ "ModuleRelativePath", "Public/Props/PoolableActor.h" },
		{ "ToolTip", "Callback al volver al pool.\nAqui se suelen apagar timers, particulas, sonidos, etc." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolableActor_OnReturnedToPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolableActor, nullptr, "OnReturnedToPool", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableActor_OnReturnedToPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolableActor_OnReturnedToPool_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPoolableActor_OnReturnedToPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolableActor_OnReturnedToPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPoolableActor::execOnReturnedToPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReturnedToPool_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPoolableActor Function OnReturnedToPool *******************************

// ********** Begin Interface UPoolableActor Function OnTakenFromPool ******************************
void IPoolableActor::OnTakenFromPool()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnTakenFromPool instead.");
}
static FName NAME_UPoolableActor_OnTakenFromPool = FName(TEXT("OnTakenFromPool"));
void IPoolableActor::Execute_OnTakenFromPool(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPoolableActor::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UPoolableActor_OnTakenFromPool);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IPoolableActor*)(O->GetNativeInterfaceAddress(UPoolableActor::StaticClass())))
	{
		I->OnTakenFromPool_Implementation();
	}
}
struct Z_Construct_UFunction_UPoolableActor_OnTakenFromPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool" },
		{ "Comment", "// Callback al salir del pool para entrar en uso activo.\n// Aqui se suelen resetear estados internos, fisica y efectos temporales.\n" },
		{ "ModuleRelativePath", "Public/Props/PoolableActor.h" },
		{ "ToolTip", "Callback al salir del pool para entrar en uso activo.\nAqui se suelen resetear estados internos, fisica y efectos temporales." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolableActor_OnTakenFromPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolableActor, nullptr, "OnTakenFromPool", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableActor_OnTakenFromPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolableActor_OnTakenFromPool_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPoolableActor_OnTakenFromPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolableActor_OnTakenFromPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPoolableActor::execOnTakenFromPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTakenFromPool_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPoolableActor Function OnTakenFromPool ********************************

// ********** Begin Interface UPoolableActor Function SetPoolSource ********************************
struct PoolableActor_eventSetPoolSource_Parms
{
	UBpcPoolBase* InPoolSource;
};
void IPoolableActor::SetPoolSource(UBpcPoolBase* InPoolSource)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetPoolSource instead.");
}
static FName NAME_UPoolableActor_SetPoolSource = FName(TEXT("SetPoolSource"));
void IPoolableActor::Execute_SetPoolSource(UObject* O, UBpcPoolBase* InPoolSource)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPoolableActor::StaticClass()));
	PoolableActor_eventSetPoolSource_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPoolableActor_SetPoolSource);
	if (Func)
	{
		Parms.InPoolSource=InPoolSource;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IPoolableActor*)(O->GetNativeInterfaceAddress(UPoolableActor::StaticClass())))
	{
		I->SetPoolSource_Implementation(InPoolSource);
	}
}
struct Z_Construct_UFunction_UPoolableActor_SetPoolSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool" },
		{ "Comment", "// Registra que pool es el dueno real del actor.\n// Esto evita ambiguedad cuando un mismo Owner tiene mas de un componente de pool.\n" },
		{ "ModuleRelativePath", "Public/Props/PoolableActor.h" },
		{ "ToolTip", "Registra que pool es el dueno real del actor.\nEsto evita ambiguedad cuando un mismo Owner tiene mas de un componente de pool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPoolSource_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPoolSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoolableActor_SetPoolSource_Statics::NewProp_InPoolSource = { "InPoolSource", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolableActor_eventSetPoolSource_Parms, InPoolSource), Z_Construct_UClass_UBpcPoolBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPoolSource_MetaData), NewProp_InPoolSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoolableActor_SetPoolSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolableActor_SetPoolSource_Statics::NewProp_InPoolSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableActor_SetPoolSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolableActor_SetPoolSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolableActor, nullptr, "SetPoolSource", Z_Construct_UFunction_UPoolableActor_SetPoolSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableActor_SetPoolSource_Statics::PropPointers), sizeof(PoolableActor_eventSetPoolSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableActor_SetPoolSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolableActor_SetPoolSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PoolableActor_eventSetPoolSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoolableActor_SetPoolSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolableActor_SetPoolSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPoolableActor::execSetPoolSource)
{
	P_GET_OBJECT(UBpcPoolBase,Z_Param_InPoolSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPoolSource_Implementation(Z_Param_InPoolSource);
	P_NATIVE_END;
}
// ********** End Interface UPoolableActor Function SetPoolSource **********************************

// ********** Begin Interface UPoolableActor *******************************************************
void UPoolableActor::StaticRegisterNativesUPoolableActor()
{
	UClass* Class = UPoolableActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPoolSource", &IPoolableActor::execGetPoolSource },
		{ "OnReturnedToPool", &IPoolableActor::execOnReturnedToPool },
		{ "OnTakenFromPool", &IPoolableActor::execOnTakenFromPool },
		{ "SetPoolSource", &IPoolableActor::execSetPoolSource },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPoolableActor;
UClass* UPoolableActor::GetPrivateStaticClass()
{
	using TClass = UPoolableActor;
	if (!Z_Registration_Info_UClass_UPoolableActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PoolableActor"),
			Z_Registration_Info_UClass_UPoolableActor.InnerSingleton,
			StaticRegisterNativesUPoolableActor,
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
	return Z_Registration_Info_UClass_UPoolableActor.InnerSingleton;
}
UClass* Z_Construct_UClass_UPoolableActor_NoRegister()
{
	return UPoolableActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPoolableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Props/PoolableActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoolableActor_GetPoolSource, "GetPoolSource" }, // 1980734082
		{ &Z_Construct_UFunction_UPoolableActor_OnReturnedToPool, "OnReturnedToPool" }, // 869396717
		{ &Z_Construct_UFunction_UPoolableActor_OnTakenFromPool, "OnTakenFromPool" }, // 2371785516
		{ &Z_Construct_UFunction_UPoolableActor_SetPoolSource, "SetPoolSource" }, // 3984637268
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPoolableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPoolableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_TTSWeapons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoolableActor_Statics::ClassParams = {
	&UPoolableActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoolableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPoolableActor()
{
	if (!Z_Registration_Info_UClass_UPoolableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoolableActor.OuterSingleton, Z_Construct_UClass_UPoolableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoolableActor.OuterSingleton;
}
UPoolableActor::UPoolableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPoolableActor);
// ********** End Interface UPoolableActor *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_PoolableActor_h__Script_TTSWeapons_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPoolableActor, UPoolableActor::StaticClass, TEXT("UPoolableActor"), &Z_Registration_Info_UClass_UPoolableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoolableActor), 1848822344U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_PoolableActor_h__Script_TTSWeapons_1609196307(TEXT("/Script/TTSWeapons"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_PoolableActor_h__Script_TTSWeapons_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_PoolableActor_h__Script_TTSWeapons_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
