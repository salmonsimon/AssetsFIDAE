// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RBSubsystemBase.h"

#ifdef RADARANDBEACON_RBSubsystemBase_generated_h
#error "RBSubsystemBase.generated.h already included, missing '#pragma once' in RBSubsystemBase.h"
#endif
#define RADARANDBEACON_RBSubsystemBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URBSubsystemBase *********************************************************
#define FID_HostProject_Plugins_RadarAndBeacon_Source_RadarAndBeacon_Public_RBSubsystemBase_h_12_CALLBACK_WRAPPERS
RADARANDBEACON_API UClass* Z_Construct_UClass_URBSubsystemBase_NoRegister();

#define FID_HostProject_Plugins_RadarAndBeacon_Source_RadarAndBeacon_Public_RBSubsystemBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURBSubsystemBase(); \
	friend struct Z_Construct_UClass_URBSubsystemBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RADARANDBEACON_API UClass* Z_Construct_UClass_URBSubsystemBase_NoRegister(); \
public: \
	DECLARE_CLASS2(URBSubsystemBase, UGameInstanceSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RadarAndBeacon"), Z_Construct_UClass_URBSubsystemBase_NoRegister) \
	DECLARE_SERIALIZER(URBSubsystemBase)


#define FID_HostProject_Plugins_RadarAndBeacon_Source_RadarAndBeacon_Public_RBSubsystemBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URBSubsystemBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URBSubsystemBase(URBSubsystemBase&&) = delete; \
	URBSubsystemBase(const URBSubsystemBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URBSubsystemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URBSubsystemBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(URBSubsystemBase) \
	NO_API virtual ~URBSubsystemBase();


#define FID_HostProject_Plugins_RadarAndBeacon_Source_RadarAndBeacon_Public_RBSubsystemBase_h_9_PROLOG
#define FID_HostProject_Plugins_RadarAndBeacon_Source_RadarAndBeacon_Public_RBSubsystemBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RadarAndBeacon_Source_RadarAndBeacon_Public_RBSubsystemBase_h_12_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_RadarAndBeacon_Source_RadarAndBeacon_Public_RBSubsystemBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RadarAndBeacon_Source_RadarAndBeacon_Public_RBSubsystemBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URBSubsystemBase;

// ********** End Class URBSubsystemBase ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RadarAndBeacon_Source_RadarAndBeacon_Public_RBSubsystemBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
