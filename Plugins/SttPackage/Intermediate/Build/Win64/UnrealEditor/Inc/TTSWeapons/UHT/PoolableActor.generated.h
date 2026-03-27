// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Props/PoolableActor.h"

#ifdef TTSWEAPONS_PoolableActor_generated_h
#error "PoolableActor.generated.h already included, missing '#pragma once' in PoolableActor.h"
#endif
#define TTSWEAPONS_PoolableActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UBpcPoolBase;

// ********** Begin Interface UPoolableActor *******************************************************
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_PoolableActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UBpcPoolBase* GetPoolSource_Implementation() const { return NULL; }; \
	virtual void SetPoolSource_Implementation(UBpcPoolBase* InPoolSource) {}; \
	virtual void OnReturnedToPool_Implementation() {}; \
	virtual void OnTakenFromPool_Implementation() {}; \
	DECLARE_FUNCTION(execGetPoolSource); \
	DECLARE_FUNCTION(execSetPoolSource); \
	DECLARE_FUNCTION(execOnReturnedToPool); \
	DECLARE_FUNCTION(execOnTakenFromPool);


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_PoolableActor_h_17_CALLBACK_WRAPPERS
TTSWEAPONS_API UClass* Z_Construct_UClass_UPoolableActor_NoRegister();

#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_PoolableActor_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoolableActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoolableActor(UPoolableActor&&) = delete; \
	UPoolableActor(const UPoolableActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoolableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoolableActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoolableActor) \
	virtual ~UPoolableActor() = default;


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_PoolableActor_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPoolableActor(); \
	friend struct Z_Construct_UClass_UPoolableActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TTSWEAPONS_API UClass* Z_Construct_UClass_UPoolableActor_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoolableActor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TTSWeapons"), Z_Construct_UClass_UPoolableActor_NoRegister) \
	DECLARE_SERIALIZER(UPoolableActor)


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_PoolableActor_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_PoolableActor_h_17_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_PoolableActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_PoolableActor_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPoolableActor() {} \
public: \
	typedef UPoolableActor UClassType; \
	typedef IPoolableActor ThisClass; \
	static UBpcPoolBase* Execute_GetPoolSource(const UObject* O); \
	static void Execute_OnReturnedToPool(UObject* O); \
	static void Execute_OnTakenFromPool(UObject* O); \
	static void Execute_SetPoolSource(UObject* O, UBpcPoolBase* InPoolSource); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_PoolableActor_h_14_PROLOG
#define FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_PoolableActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_PoolableActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_PoolableActor_h_17_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_PoolableActor_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoolableActor;

// ********** End Interface UPoolableActor *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TTSWeapons_Source_TTSWeapons_Public_Props_PoolableActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
