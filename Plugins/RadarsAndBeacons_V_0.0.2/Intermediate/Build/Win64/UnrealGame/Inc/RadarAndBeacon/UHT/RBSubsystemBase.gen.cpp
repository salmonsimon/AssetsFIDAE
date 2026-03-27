// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RBSubsystemBase.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRBSubsystemBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
RADARANDBEACON_API UClass* Z_Construct_UClass_URBSubsystemBase();
RADARANDBEACON_API UClass* Z_Construct_UClass_URBSubsystemBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_RadarAndBeacon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URBSubsystemBase Function InitSubsystem **********************************
static FName NAME_URBSubsystemBase_InitSubsystem = FName(TEXT("InitSubsystem"));
void URBSubsystemBase::InitSubsystem()
{
	UFunction* Func = FindFunctionChecked(NAME_URBSubsystemBase_InitSubsystem);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_URBSubsystemBase_InitSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RBSubsystemBase" },
		{ "Comment", "// Evento que IMPLEMENTAR\xef\xbf\xbdS en el hijo Blueprint\n" },
		{ "ModuleRelativePath", "Public/RBSubsystemBase.h" },
		{ "ToolTip", "Evento que IMPLEMENTAR\xef\xbf\xbdS en el hijo Blueprint" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URBSubsystemBase_InitSubsystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URBSubsystemBase, nullptr, "InitSubsystem", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URBSubsystemBase_InitSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_URBSubsystemBase_InitSubsystem_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URBSubsystemBase_InitSubsystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URBSubsystemBase_InitSubsystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class URBSubsystemBase Function InitSubsystem ************************************

// ********** Begin Class URBSubsystemBase *********************************************************
void URBSubsystemBase::StaticRegisterNativesURBSubsystemBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URBSubsystemBase;
UClass* URBSubsystemBase::GetPrivateStaticClass()
{
	using TClass = URBSubsystemBase;
	if (!Z_Registration_Info_UClass_URBSubsystemBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RBSubsystemBase"),
			Z_Registration_Info_UClass_URBSubsystemBase.InnerSingleton,
			StaticRegisterNativesURBSubsystemBase,
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
	return Z_Registration_Info_UClass_URBSubsystemBase.InnerSingleton;
}
UClass* Z_Construct_UClass_URBSubsystemBase_NoRegister()
{
	return URBSubsystemBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URBSubsystemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RBSubsystemBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RBSubsystemBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URBSubsystemBase_InitSubsystem, "InitSubsystem" }, // 3760977057
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URBSubsystemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URBSubsystemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_RadarAndBeacon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URBSubsystemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URBSubsystemBase_Statics::ClassParams = {
	&URBSubsystemBase::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URBSubsystemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_URBSubsystemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URBSubsystemBase()
{
	if (!Z_Registration_Info_UClass_URBSubsystemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URBSubsystemBase.OuterSingleton, Z_Construct_UClass_URBSubsystemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URBSubsystemBase.OuterSingleton;
}
URBSubsystemBase::URBSubsystemBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URBSubsystemBase);
URBSubsystemBase::~URBSubsystemBase() {}
// ********** End Class URBSubsystemBase ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_RadarAndBeacon_Source_RadarAndBeacon_Public_RBSubsystemBase_h__Script_RadarAndBeacon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URBSubsystemBase, URBSubsystemBase::StaticClass, TEXT("URBSubsystemBase"), &Z_Registration_Info_UClass_URBSubsystemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URBSubsystemBase), 134877677U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RadarAndBeacon_Source_RadarAndBeacon_Public_RBSubsystemBase_h__Script_RadarAndBeacon_3216865172(TEXT("/Script/RadarAndBeacon"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_RadarAndBeacon_Source_RadarAndBeacon_Public_RBSubsystemBase_h__Script_RadarAndBeacon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_RadarAndBeacon_Source_RadarAndBeacon_Public_RBSubsystemBase_h__Script_RadarAndBeacon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
