// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pawns/CustomPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMGRAVITYPLUGIN_CustomPawn_generated_h
#error "CustomPawn.generated.h already included, missing '#pragma once' in CustomPawn.h"
#endif
#define CUSTOMGRAVITYPLUGIN_CustomPawn_generated_h

#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_SPARSE_DATA
#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentRightDirection); \
	DECLARE_FUNCTION(execGetCurrentForwardDirection); \
	DECLARE_FUNCTION(execDisableDebugging); \
	DECLARE_FUNCTION(execEnableDebugging); \
	DECLARE_FUNCTION(execAddCameraYawInput); \
	DECLARE_FUNCTION(execAddCameraPitchInput); \
	DECLARE_FUNCTION(execAddRightMovementInput); \
	DECLARE_FUNCTION(execAddForwardMovementInput); \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execJump);


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentRightDirection); \
	DECLARE_FUNCTION(execGetCurrentForwardDirection); \
	DECLARE_FUNCTION(execDisableDebugging); \
	DECLARE_FUNCTION(execEnableDebugging); \
	DECLARE_FUNCTION(execAddCameraYawInput); \
	DECLARE_FUNCTION(execAddCameraPitchInput); \
	DECLARE_FUNCTION(execAddRightMovementInput); \
	DECLARE_FUNCTION(execAddForwardMovementInput); \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execJump);


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_ACCESSORS
#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomPawn(); \
	friend struct Z_Construct_UClass_ACustomPawn_Statics; \
public: \
	DECLARE_CLASS(ACustomPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(ACustomPawn)


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_INCLASS \
private: \
	static void StaticRegisterNativesACustomPawn(); \
	friend struct Z_Construct_UClass_ACustomPawn_Statics; \
public: \
	DECLARE_CLASS(ACustomPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(ACustomPawn)


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomPawn(ACustomPawn&&); \
	NO_API ACustomPawn(const ACustomPawn&); \
public: \
	NO_API virtual ~ACustomPawn();


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomPawn(ACustomPawn&&); \
	NO_API ACustomPawn(const ACustomPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomPawn) \
	NO_API virtual ~ACustomPawn();


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_16_PROLOG
#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_RPC_WRAPPERS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_ACCESSORS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_INCLASS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_ACCESSORS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<class ACustomPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
