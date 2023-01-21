// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CustomMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACustomPawn;
class APlanetActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CUSTOMGRAVITYPLUGIN_CustomMovementComponent_generated_h
#error "CustomMovementComponent.generated.h already included, missing '#pragma once' in CustomMovementComponent.h"
#endif
#define CUSTOMGRAVITYPLUGIN_CustomMovementComponent_generated_h

#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOrientationInfo_Statics; \
	CUSTOMGRAVITYPLUGIN_API static class UScriptStruct* StaticStruct();


template<> CUSTOMGRAVITYPLUGIN_API UScriptStruct* StaticStruct<struct FOrientationInfo>();

#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOrientationSettings_Statics; \
	CUSTOMGRAVITYPLUGIN_API static class UScriptStruct* StaticStruct();


template<> CUSTOMGRAVITYPLUGIN_API UScriptStruct* StaticStruct<struct FOrientationSettings>();

#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_SPARSE_DATA
#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInAirTime); \
	DECLARE_FUNCTION(execGetCurrentWalkSpeed); \
	DECLARE_FUNCTION(execGetFallingSpeed); \
	DECLARE_FUNCTION(execGetMovementVelocity); \
	DECLARE_FUNCTION(execGetFallingVelocity); \
	DECLARE_FUNCTION(execIsSprinting); \
	DECLARE_FUNCTION(execGetCurrentPlanet); \
	DECLARE_FUNCTION(execGetGravityDirection); \
	DECLARE_FUNCTION(execGetGravityPower); \
	DECLARE_FUNCTION(execClearPlanet); \
	DECLARE_FUNCTION(execSetCurrentPlanet); \
	DECLARE_FUNCTION(execSetComponentOwner); \
	DECLARE_FUNCTION(execRequestGavityImmediateUpdate); \
	DECLARE_FUNCTION(execCapsuleHited);


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInAirTime); \
	DECLARE_FUNCTION(execGetCurrentWalkSpeed); \
	DECLARE_FUNCTION(execGetFallingSpeed); \
	DECLARE_FUNCTION(execGetMovementVelocity); \
	DECLARE_FUNCTION(execGetFallingVelocity); \
	DECLARE_FUNCTION(execIsSprinting); \
	DECLARE_FUNCTION(execGetCurrentPlanet); \
	DECLARE_FUNCTION(execGetGravityDirection); \
	DECLARE_FUNCTION(execGetGravityPower); \
	DECLARE_FUNCTION(execClearPlanet); \
	DECLARE_FUNCTION(execSetCurrentPlanet); \
	DECLARE_FUNCTION(execSetComponentOwner); \
	DECLARE_FUNCTION(execRequestGavityImmediateUpdate); \
	DECLARE_FUNCTION(execCapsuleHited);


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_ACCESSORS
#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomMovementComponent(); \
	friend struct Z_Construct_UClass_UCustomMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomMovementComponent, UFloatingPawnMovement, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCustomMovementComponent)


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_INCLASS \
private: \
	static void StaticRegisterNativesUCustomMovementComponent(); \
	friend struct Z_Construct_UClass_UCustomMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomMovementComponent, UFloatingPawnMovement, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCustomMovementComponent)


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomMovementComponent(UCustomMovementComponent&&); \
	NO_API UCustomMovementComponent(const UCustomMovementComponent&); \
public: \
	NO_API virtual ~UCustomMovementComponent();


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomMovementComponent(UCustomMovementComponent&&); \
	NO_API UCustomMovementComponent(const UCustomMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomMovementComponent) \
	NO_API virtual ~UCustomMovementComponent();


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_103_PROLOG
#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_SPARSE_DATA \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_RPC_WRAPPERS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_ACCESSORS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_INCLASS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_SPARSE_DATA \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_ACCESSORS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<class UCustomMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomMovementComponent_h


#define FOREACH_ENUM_EORIENTATIONINTERPOLATIONMODE(op) \
	op(EOrientationInterpolationMode::OIM_RInterpTo) \
	op(EOrientationInterpolationMode::OIM_Slerp) 
#define FOREACH_ENUM_EVERTICALORIENTATION(op) \
	op(EVerticalOrientation::EVO_GravityDirection) \
	op(EVerticalOrientation::EVO_SurfaceNormal) 
#define FOREACH_ENUM_ETRACESHAPE(op) \
	op(ETraceShape::ETS_Sphere) \
	op(ETraceShape::ETS_Box) \
	op(ETraceShape::ETS_Line) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
