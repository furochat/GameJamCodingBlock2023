// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CustomGravityComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlanetActor;
class UPrimitiveComponent;
struct FGravityInfo;
#ifdef CUSTOMGRAVITYPLUGIN_CustomGravityComponent_generated_h
#error "CustomGravityComponent.generated.h already included, missing '#pragma once' in CustomGravityComponent.h"
#endif
#define CUSTOMGRAVITYPLUGIN_CustomGravityComponent_generated_h

#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_SPARSE_DATA
#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentGravityInfo); \
	DECLARE_FUNCTION(execGetCurrentGravityPower); \
	DECLARE_FUNCTION(execGetCurrentGravityDirection); \
	DECLARE_FUNCTION(execGetCurrentPlanet); \
	DECLARE_FUNCTION(execGetUpdatedComponent); \
	DECLARE_FUNCTION(execSetUpdatedComponent); \
	DECLARE_FUNCTION(execClearCurrentPlanet); \
	DECLARE_FUNCTION(execSetCurrentPlanet); \
	DECLARE_FUNCTION(execSetGravityType); \
	DECLARE_FUNCTION(execSetGravityScale);


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentGravityInfo); \
	DECLARE_FUNCTION(execGetCurrentGravityPower); \
	DECLARE_FUNCTION(execGetCurrentGravityDirection); \
	DECLARE_FUNCTION(execGetCurrentPlanet); \
	DECLARE_FUNCTION(execGetUpdatedComponent); \
	DECLARE_FUNCTION(execSetUpdatedComponent); \
	DECLARE_FUNCTION(execClearCurrentPlanet); \
	DECLARE_FUNCTION(execSetCurrentPlanet); \
	DECLARE_FUNCTION(execSetGravityType); \
	DECLARE_FUNCTION(execSetGravityScale);


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_ACCESSORS
#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomGravityComponent(); \
	friend struct Z_Construct_UClass_UCustomGravityComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomGravityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCustomGravityComponent)


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCustomGravityComponent(); \
	friend struct Z_Construct_UClass_UCustomGravityComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomGravityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCustomGravityComponent)


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomGravityComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomGravityComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGravityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGravityComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomGravityComponent(UCustomGravityComponent&&); \
	NO_API UCustomGravityComponent(const UCustomGravityComponent&); \
public: \
	NO_API virtual ~UCustomGravityComponent();


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomGravityComponent(UCustomGravityComponent&&); \
	NO_API UCustomGravityComponent(const UCustomGravityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGravityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGravityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomGravityComponent) \
	NO_API virtual ~UCustomGravityComponent();


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_13_PROLOG
#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_RPC_WRAPPERS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_ACCESSORS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_INCLASS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_ACCESSORS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<class UCustomGravityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
