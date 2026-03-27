// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Props/BulletShell.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBulletShell() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
TTSWEAPONS_API UClass* Z_Construct_UClass_ABulletShell();
TTSWEAPONS_API UClass* Z_Construct_UClass_ABulletShell_NoRegister();
TTSWEAPONS_API UClass* Z_Construct_UClass_UBpcPoolBase_NoRegister();
TTSWEAPONS_API UClass* Z_Construct_UClass_UPoolableActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_TTSWeapons();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABulletShell Function ActivateEjection ***********************************
struct Z_Construct_UFunction_ABulletShell_ActivateEjection_Statics
{
	struct BulletShell_eventActivateEjection_Parms
	{
		FTransform EjectionTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomSettings|Ejection" },
		{ "Comment", "// API publica de eyeccion.\n// Recibe un transform de eyeccion en mundo y aplica todo el flujo:\n// - set de transform\n// - reset de velocidades\n// - direccion base\n// - spread minimo en cono\n// - impulso lineal\n// - impulso angular\n// - comportamiento reproducible opcional por semilla\n" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "API publica de eyeccion.\nRecibe un transform de eyeccion en mundo y aplica todo el flujo:\n- set de transform\n- reset de velocidades\n- direccion base\n- spread minimo en cono\n- impulso lineal\n- impulso angular\n- comportamiento reproducible opcional por semilla" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EjectionTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EjectionTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABulletShell_ActivateEjection_Statics::NewProp_EjectionTransform = { "EjectionTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BulletShell_eventActivateEjection_Parms, EjectionTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EjectionTransform_MetaData), NewProp_EjectionTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABulletShell_ActivateEjection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletShell_ActivateEjection_Statics::NewProp_EjectionTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletShell_ActivateEjection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABulletShell_ActivateEjection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABulletShell, nullptr, "ActivateEjection", Z_Construct_UFunction_ABulletShell_ActivateEjection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletShell_ActivateEjection_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABulletShell_ActivateEjection_Statics::BulletShell_eventActivateEjection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletShell_ActivateEjection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABulletShell_ActivateEjection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABulletShell_ActivateEjection_Statics::BulletShell_eventActivateEjection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABulletShell_ActivateEjection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABulletShell_ActivateEjection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABulletShell::execActivateEjection)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_EjectionTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateEjection(Z_Param_Out_EjectionTransform);
	P_NATIVE_END;
}
// ********** End Class ABulletShell Function ActivateEjection *************************************

// ********** Begin Class ABulletShell Function OnHit **********************************************
struct Z_Construct_UFunction_ABulletShell_OnHit_Statics
{
	struct BulletShell_eventOnHit_Parms
	{
		UPrimitiveComponent* HitComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Callback de colision del mesh principal.\n// Dispara audio y programa retorno al pool cuando corresponde.\n" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Callback de colision del mesh principal.\nDispara audio y programa retorno al pool cuando corresponde." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABulletShell_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BulletShell_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComp_MetaData), NewProp_HitComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABulletShell_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BulletShell_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABulletShell_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BulletShell_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABulletShell_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BulletShell_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABulletShell_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BulletShell_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABulletShell_OnHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletShell_OnHit_Statics::NewProp_HitComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletShell_OnHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletShell_OnHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletShell_OnHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletShell_OnHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletShell_OnHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABulletShell_OnHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABulletShell, nullptr, "OnHit", Z_Construct_UFunction_ABulletShell_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletShell_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABulletShell_OnHit_Statics::BulletShell_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletShell_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABulletShell_OnHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABulletShell_OnHit_Statics::BulletShell_eventOnHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABulletShell_OnHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABulletShell_OnHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABulletShell::execOnHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class ABulletShell Function OnHit ************************************************

// ********** Begin Class ABulletShell *************************************************************
void ABulletShell::StaticRegisterNativesABulletShell()
{
	UClass* Class = ABulletShell::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateEjection", &ABulletShell::execActivateEjection },
		{ "OnHit", &ABulletShell::execOnHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABulletShell;
UClass* ABulletShell::GetPrivateStaticClass()
{
	using TClass = ABulletShell;
	if (!Z_Registration_Info_UClass_ABulletShell.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BulletShell"),
			Z_Registration_Info_UClass_ABulletShell.InnerSingleton,
			StaticRegisterNativesABulletShell,
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
	return Z_Registration_Info_UClass_ABulletShell.InnerSingleton;
}
UClass* Z_Construct_UClass_ABulletShell_NoRegister()
{
	return ABulletShell::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABulletShell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Actor de casquillo reutilizable por pool.\n// Objetivos:\n// - Simular eyeccion fisica realista y estable.\n// - Soportar retorno seguro al pool (idempotente).\n// - Exponer parametros de ajuste en editor/Blueprint.\n// - Mantener compatibilidad con assets previos.\n" },
		{ "IncludePath", "Props/BulletShell.h" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Actor de casquillo reutilizable por pool.\nObjetivos:\n- Simular eyeccion fisica realista y estable.\n- Soportar retorno seguro al pool (idempotente).\n- Exponer parametros de ajuste en editor/Blueprint.\n- Mantener compatibilidad con assets previos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletShellMesh_MetaData[] = {
		{ "Category", "CustomSettings|Components" },
		{ "Comment", "// Mesh fisico principal del casquillo.\n// Tambien actua como RootComponent del actor.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Mesh fisico principal del casquillo.\nTambien actua como RootComponent del actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomEjectionTransform_MetaData[] = {
		{ "Category", "CustomSettings|Ejection" },
		{ "Comment", "// Si esta activo, se aplica un offset custom de transform antes de eyectar.\n" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Si esta activo, se aplica un offset custom de transform antes de eyectar." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EjectionTransformOffset_MetaData[] = {
		{ "Category", "CustomSettings|Ejection" },
		{ "EditCondition", "bUseCustomEjectionTransform" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseStrength_MetaData[] = {
		{ "Category", "CustomSettings|Ejection" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Fuerza principal de eyeccion aplicada en la direccion calculada." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConeHalfAngleDeg_MetaData[] = {
		{ "Category", "CustomSettings|Ejection" },
		{ "ClampMax", "45.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Mitad del cono de variacion en grados. Recomendado entre 2 y 6 para dispersion muy pequena." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularImpulseStrength_MetaData[] = {
		{ "Category", "CustomSettings|Ejection" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Fuerza angular aleatoria aplicada de manera independiente al impulso lineal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseStableSpinSystem_MetaData[] = {
		{ "Category", "CustomSettings|Spin" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Activa un modo de spin estable. Al desactivarlo vuelve al sistema angular manual actual." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StableSpinAxisLocal_MetaData[] = {
		{ "Category", "CustomSettings|Spin" },
		{ "EditCondition", "bUseStableSpinSystem" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Eje local principal para el giro estable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StableSpinSpeedDegPerSec_MetaData[] = {
		{ "Category", "CustomSettings|Spin" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bUseStableSpinSystem" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Velocidad angular del modo estable (grados por segundo)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StableSpinSpeedOnHitDegPerSec_MetaData[] = {
		{ "Category", "CustomSettings|Spin" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bUseStableSpinSystem" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Velocidad angular al impactar (grados por segundo)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitsBeforeForceStop_MetaData[] = {
		{ "Category", "CustomSettings|Spin" },
		{ "ClampMax", "6" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Numero de impactos antes de forzar stop total del casquillo." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinHitAgeSeconds_MetaData[] = {
		{ "Category", "CustomSettings|Spin" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Tiempo minimo (s) desde activacion para empezar a contar hits validos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StableSpinAxisJitterDeg_MetaData[] = {
		{ "Category", "CustomSettings|Spin" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bUseStableSpinSystem" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Jitter en grados alrededor del eje estable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizeStableSpinDirection_MetaData[] = {
		{ "Category", "CustomSettings|Spin" },
		{ "EditCondition", "bUseStableSpinSystem" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Randomiza el sentido del giro estable (+ o -)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightWeight_MetaData[] = {
		{ "Category", "CustomSettings|Ejection" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Peso del eje Right del actor en la direccion base de eyeccion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpWeight_MetaData[] = {
		{ "Category", "CustomSettings|Ejection" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Peso del eje Up del actor en la direccion base de eyeccion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardWeight_MetaData[] = {
		{ "Category", "CustomSettings|Ejection" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Peso del eje Forward del actor en la direccion base de eyeccion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImpulseVelChange_MetaData[] = {
		{ "Category", "CustomSettings|Ejection" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Si esta activo, los impulsos ignoran masa y se aplican como cambio de velocidad." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "CustomSettings|Ejection" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Semilla para resultados reproducibles. -1 usa aleatoriedad normal del motor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EjectionImpulseLegacy_MetaData[] = {
		{ "Category", "CustomSettings|Ejection" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Propiedad legacy para compatibilidad con assets previos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletShellSound_MetaData[] = {
		{ "Category", "CustomSettings|Sound" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMetaSound_MetaData[] = {
		{ "Category", "CustomSettings|Sound" },
		{ "Comment", "// Permite elegir entre SoundCue clasico y MetaSound moderno.\n" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Permite elegir entre SoundCue clasico y MetaSound moderno." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletShellMetaSound_MetaData[] = {
		{ "Category", "CustomSettings|Sound" },
		{ "EditCondition", "bUseMetaSound" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnToPoolDelay_MetaData[] = {
		{ "Category", "CustomSettings|Pool" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Retardo entre impacto y retorno al pool.\n" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Retardo entre impacto y retorno al pool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxActiveLifetime_MetaData[] = {
		{ "Category", "CustomSettings|Pool" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Tiempo maximo de vida activa como fail-safe.\n// Si el casquillo nunca colisiona, este timer fuerza el retorno al pool.\n// Valor 0 desactiva el fail-safe.\n" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Tiempo maximo de vida activa como fail-safe.\nSi el casquillo nunca colisiona, este timer fuerza el retorno al pool.\nValor 0 desactiva el fail-safe." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolSourceComponent_MetaData[] = {
		{ "Comment", "// Pool real que creo/gestiona este actor.\n// Se usa para evitar ambiguedad cuando el owner tiene multiples pools.\n" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Pool real que creo/gestiona este actor.\nSe usa para evitar ambiguedad cuando el owner tiene multiples pools." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInPool_MetaData[] = {
		{ "Comment", "// Estado interno para hacer el retorno idempotente.\n// true cuando el actor ya fue regresado al pool.\n" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Estado interno para hacer el retorno idempotente.\ntrue cuando el actor ya fue regresado al pool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReturnScheduled_MetaData[] = {
		{ "Comment", "// Estado interno para evitar programar multiples retornos en paralelo.\n" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Estado interno para evitar programar multiples retornos en paralelo." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasPlayedImpactSound_MetaData[] = {
		{ "Comment", "// Evita reproducir el sonido de impacto multiples veces por rebotes rapidos.\n" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Evita reproducir el sonido de impacto multiples veces por rebotes rapidos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EjectionActivationCount_MetaData[] = {
		{ "Comment", "// Contador interno para secuencia determinista cuando RandomSeed >= 0.\n" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Contador interno para secuencia determinista cuando RandomSeed >= 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitCountSinceActivation_MetaData[] = {
		{ "Comment", "// Conteo de impactos desde la ultima activacion del pool.\n" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Conteo de impactos desde la ultima activacion del pool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationWorldTimeSeconds_MetaData[] = {
		{ "Comment", "// Timestamp de activacion para filtrar hits espurios inmediatamente tras eyectar.\n" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Timestamp de activacion para filtrar hits espurios inmediatamente tras eyectar." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedStableSpinSpeedDegPerSec_MetaData[] = {
		{ "Comment", "// Cache del valor original configurado para restaurarlo al volver al pool.\n" },
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
		{ "ToolTip", "Cache del valor original configurado para restaurarlo al volver al pool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCachedStableSpinSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Props/BulletShell.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletShellMesh;
	static void NewProp_bUseCustomEjectionTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomEjectionTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EjectionTransformOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConeHalfAngleDeg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularImpulseStrength;
	static void NewProp_bUseStableSpinSystem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseStableSpinSystem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StableSpinAxisLocal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StableSpinSpeedDegPerSec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StableSpinSpeedOnHitDegPerSec;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HitsBeforeForceStop;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHitAgeSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StableSpinAxisJitterDeg;
	static void NewProp_bRandomizeStableSpinDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizeStableSpinDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardWeight;
	static void NewProp_bImpulseVelChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImpulseVelChange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EjectionImpulseLegacy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletShellSound;
	static void NewProp_bUseMetaSound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMetaSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletShellMetaSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnToPoolDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxActiveLifetime;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PoolSourceComponent;
	static void NewProp_bIsInPool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInPool;
	static void NewProp_bReturnScheduled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnScheduled;
	static void NewProp_bHasPlayedImpactSound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPlayedImpactSound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EjectionActivationCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HitCountSinceActivation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActivationWorldTimeSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedStableSpinSpeedDegPerSec;
	static void NewProp_bHasCachedStableSpinSpeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCachedStableSpinSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABulletShell_ActivateEjection, "ActivateEjection" }, // 281316882
		{ &Z_Construct_UFunction_ABulletShell_OnHit, "OnHit" }, // 950103794
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABulletShell>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_BulletShellMesh = { "BulletShellMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, BulletShellMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletShellMesh_MetaData), NewProp_BulletShellMesh_MetaData) };
void Z_Construct_UClass_ABulletShell_Statics::NewProp_bUseCustomEjectionTransform_SetBit(void* Obj)
{
	((ABulletShell*)Obj)->bUseCustomEjectionTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_bUseCustomEjectionTransform = { "bUseCustomEjectionTransform", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABulletShell), &Z_Construct_UClass_ABulletShell_Statics::NewProp_bUseCustomEjectionTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomEjectionTransform_MetaData), NewProp_bUseCustomEjectionTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_EjectionTransformOffset = { "EjectionTransformOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, EjectionTransformOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EjectionTransformOffset_MetaData), NewProp_EjectionTransformOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_ImpulseStrength = { "ImpulseStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, ImpulseStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseStrength_MetaData), NewProp_ImpulseStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_ConeHalfAngleDeg = { "ConeHalfAngleDeg", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, ConeHalfAngleDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConeHalfAngleDeg_MetaData), NewProp_ConeHalfAngleDeg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_AngularImpulseStrength = { "AngularImpulseStrength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, AngularImpulseStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularImpulseStrength_MetaData), NewProp_AngularImpulseStrength_MetaData) };
void Z_Construct_UClass_ABulletShell_Statics::NewProp_bUseStableSpinSystem_SetBit(void* Obj)
{
	((ABulletShell*)Obj)->bUseStableSpinSystem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_bUseStableSpinSystem = { "bUseStableSpinSystem", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABulletShell), &Z_Construct_UClass_ABulletShell_Statics::NewProp_bUseStableSpinSystem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseStableSpinSystem_MetaData), NewProp_bUseStableSpinSystem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_StableSpinAxisLocal = { "StableSpinAxisLocal", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, StableSpinAxisLocal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StableSpinAxisLocal_MetaData), NewProp_StableSpinAxisLocal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_StableSpinSpeedDegPerSec = { "StableSpinSpeedDegPerSec", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, StableSpinSpeedDegPerSec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StableSpinSpeedDegPerSec_MetaData), NewProp_StableSpinSpeedDegPerSec_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_StableSpinSpeedOnHitDegPerSec = { "StableSpinSpeedOnHitDegPerSec", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, StableSpinSpeedOnHitDegPerSec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StableSpinSpeedOnHitDegPerSec_MetaData), NewProp_StableSpinSpeedOnHitDegPerSec_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_HitsBeforeForceStop = { "HitsBeforeForceStop", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, HitsBeforeForceStop), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitsBeforeForceStop_MetaData), NewProp_HitsBeforeForceStop_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_MinHitAgeSeconds = { "MinHitAgeSeconds", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, MinHitAgeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinHitAgeSeconds_MetaData), NewProp_MinHitAgeSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_StableSpinAxisJitterDeg = { "StableSpinAxisJitterDeg", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, StableSpinAxisJitterDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StableSpinAxisJitterDeg_MetaData), NewProp_StableSpinAxisJitterDeg_MetaData) };
void Z_Construct_UClass_ABulletShell_Statics::NewProp_bRandomizeStableSpinDirection_SetBit(void* Obj)
{
	((ABulletShell*)Obj)->bRandomizeStableSpinDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_bRandomizeStableSpinDirection = { "bRandomizeStableSpinDirection", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABulletShell), &Z_Construct_UClass_ABulletShell_Statics::NewProp_bRandomizeStableSpinDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomizeStableSpinDirection_MetaData), NewProp_bRandomizeStableSpinDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_RightWeight = { "RightWeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, RightWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightWeight_MetaData), NewProp_RightWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_UpWeight = { "UpWeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, UpWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpWeight_MetaData), NewProp_UpWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_ForwardWeight = { "ForwardWeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, ForwardWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardWeight_MetaData), NewProp_ForwardWeight_MetaData) };
void Z_Construct_UClass_ABulletShell_Statics::NewProp_bImpulseVelChange_SetBit(void* Obj)
{
	((ABulletShell*)Obj)->bImpulseVelChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_bImpulseVelChange = { "bImpulseVelChange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABulletShell), &Z_Construct_UClass_ABulletShell_Statics::NewProp_bImpulseVelChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImpulseVelChange_MetaData), NewProp_bImpulseVelChange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_EjectionImpulseLegacy = { "EjectionImpulseLegacy", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, EjectionImpulseLegacy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EjectionImpulseLegacy_MetaData), NewProp_EjectionImpulseLegacy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_BulletShellSound = { "BulletShellSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, BulletShellSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletShellSound_MetaData), NewProp_BulletShellSound_MetaData) };
void Z_Construct_UClass_ABulletShell_Statics::NewProp_bUseMetaSound_SetBit(void* Obj)
{
	((ABulletShell*)Obj)->bUseMetaSound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_bUseMetaSound = { "bUseMetaSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABulletShell), &Z_Construct_UClass_ABulletShell_Statics::NewProp_bUseMetaSound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMetaSound_MetaData), NewProp_bUseMetaSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_BulletShellMetaSound = { "BulletShellMetaSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, BulletShellMetaSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletShellMetaSound_MetaData), NewProp_BulletShellMetaSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_ReturnToPoolDelay = { "ReturnToPoolDelay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, ReturnToPoolDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnToPoolDelay_MetaData), NewProp_ReturnToPoolDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_MaxActiveLifetime = { "MaxActiveLifetime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, MaxActiveLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxActiveLifetime_MetaData), NewProp_MaxActiveLifetime_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_PoolSourceComponent = { "PoolSourceComponent", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, PoolSourceComponent), Z_Construct_UClass_UBpcPoolBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolSourceComponent_MetaData), NewProp_PoolSourceComponent_MetaData) };
void Z_Construct_UClass_ABulletShell_Statics::NewProp_bIsInPool_SetBit(void* Obj)
{
	((ABulletShell*)Obj)->bIsInPool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_bIsInPool = { "bIsInPool", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABulletShell), &Z_Construct_UClass_ABulletShell_Statics::NewProp_bIsInPool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInPool_MetaData), NewProp_bIsInPool_MetaData) };
void Z_Construct_UClass_ABulletShell_Statics::NewProp_bReturnScheduled_SetBit(void* Obj)
{
	((ABulletShell*)Obj)->bReturnScheduled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_bReturnScheduled = { "bReturnScheduled", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABulletShell), &Z_Construct_UClass_ABulletShell_Statics::NewProp_bReturnScheduled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReturnScheduled_MetaData), NewProp_bReturnScheduled_MetaData) };
void Z_Construct_UClass_ABulletShell_Statics::NewProp_bHasPlayedImpactSound_SetBit(void* Obj)
{
	((ABulletShell*)Obj)->bHasPlayedImpactSound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_bHasPlayedImpactSound = { "bHasPlayedImpactSound", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABulletShell), &Z_Construct_UClass_ABulletShell_Statics::NewProp_bHasPlayedImpactSound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasPlayedImpactSound_MetaData), NewProp_bHasPlayedImpactSound_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_EjectionActivationCount = { "EjectionActivationCount", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, EjectionActivationCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EjectionActivationCount_MetaData), NewProp_EjectionActivationCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_HitCountSinceActivation = { "HitCountSinceActivation", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, HitCountSinceActivation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitCountSinceActivation_MetaData), NewProp_HitCountSinceActivation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_ActivationWorldTimeSeconds = { "ActivationWorldTimeSeconds", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, ActivationWorldTimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationWorldTimeSeconds_MetaData), NewProp_ActivationWorldTimeSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_CachedStableSpinSpeedDegPerSec = { "CachedStableSpinSpeedDegPerSec", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletShell, CachedStableSpinSpeedDegPerSec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedStableSpinSpeedDegPerSec_MetaData), NewProp_CachedStableSpinSpeedDegPerSec_MetaData) };
void Z_Construct_UClass_ABulletShell_Statics::NewProp_bHasCachedStableSpinSpeed_SetBit(void* Obj)
{
	((ABulletShell*)Obj)->bHasCachedStableSpinSpeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABulletShell_Statics::NewProp_bHasCachedStableSpinSpeed = { "bHasCachedStableSpinSpeed", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABulletShell), &Z_Construct_UClass_ABulletShell_Statics::NewProp_bHasCachedStableSpinSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCachedStableSpinSpeed_MetaData), NewProp_bHasCachedStableSpinSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABulletShell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_BulletShellMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_bUseCustomEjectionTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_EjectionTransformOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_ImpulseStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_ConeHalfAngleDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_AngularImpulseStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_bUseStableSpinSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_StableSpinAxisLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_StableSpinSpeedDegPerSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_StableSpinSpeedOnHitDegPerSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_HitsBeforeForceStop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_MinHitAgeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_StableSpinAxisJitterDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_bRandomizeStableSpinDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_RightWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_UpWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_ForwardWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_bImpulseVelChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_EjectionImpulseLegacy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_BulletShellSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_bUseMetaSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_BulletShellMetaSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_ReturnToPoolDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_MaxActiveLifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_PoolSourceComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_bIsInPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_bReturnScheduled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_bHasPlayedImpactSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_EjectionActivationCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_HitCountSinceActivation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_ActivationWorldTimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_CachedStableSpinSpeedDegPerSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletShell_Statics::NewProp_bHasCachedStableSpinSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletShell_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABulletShell_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TTSWeapons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletShell_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABulletShell_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPoolableActor_NoRegister, (int32)VTABLE_OFFSET(ABulletShell, IPoolableActor), false },  // 1848822344
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABulletShell_Statics::ClassParams = {
	&ABulletShell::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABulletShell_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABulletShell_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletShell_Statics::Class_MetaDataParams), Z_Construct_UClass_ABulletShell_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABulletShell()
{
	if (!Z_Registration_Info_UClass_ABulletShell.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABulletShell.OuterSingleton, Z_Construct_UClass_ABulletShell_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABulletShell.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABulletShell);
ABulletShell::~ABulletShell() {}
// ********** End Class ABulletShell ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BulletShell_h__Script_TTSWeapons_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABulletShell, ABulletShell::StaticClass, TEXT("ABulletShell"), &Z_Registration_Info_UClass_ABulletShell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABulletShell), 1823892687U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BulletShell_h__Script_TTSWeapons_2473730779(TEXT("/Script/TTSWeapons"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BulletShell_h__Script_TTSWeapons_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_BulletShell_h__Script_TTSWeapons_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
