// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Objects/CustomGravityManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGravityInfo;
#ifdef CUSTOMGRAVITYPLUGIN_CustomGravityManager_generated_h
#error "CustomGravityManager.generated.h already included, missing '#pragma once' in CustomGravityManager.h"
#endif
#define CUSTOMGRAVITYPLUGIN_CustomGravityManager_generated_h

#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGravityInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CUSTOMGRAVITYPLUGIN_API UScriptStruct* StaticStruct<struct FGravityInfo>();

#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_SPARSE_DATA
#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_ForceModeToString); \
	DECLARE_FUNCTION(execConv_GravityTypeToString); \
	DECLARE_FUNCTION(execConv_GravityInfoToString); \
	DECLARE_FUNCTION(execGetGlobalCustomGravityInfo); \
	DECLARE_FUNCTION(execGetGlobalCustomGravityForceMode); \
	DECLARE_FUNCTION(execGetGlobalCustomGravityDirection); \
	DECLARE_FUNCTION(execGetGlobalCustomGravityPower); \
	DECLARE_FUNCTION(execSetGlobalCustomGravityInfo); \
	DECLARE_FUNCTION(execSetGlobalCustomGravityForceMode); \
	DECLARE_FUNCTION(execSetGlobalCustomGravityDirection); \
	DECLARE_FUNCTION(execSetGlobalCustomGravityPower);


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_ForceModeToString); \
	DECLARE_FUNCTION(execConv_GravityTypeToString); \
	DECLARE_FUNCTION(execConv_GravityInfoToString); \
	DECLARE_FUNCTION(execGetGlobalCustomGravityInfo); \
	DECLARE_FUNCTION(execGetGlobalCustomGravityForceMode); \
	DECLARE_FUNCTION(execGetGlobalCustomGravityDirection); \
	DECLARE_FUNCTION(execGetGlobalCustomGravityPower); \
	DECLARE_FUNCTION(execSetGlobalCustomGravityInfo); \
	DECLARE_FUNCTION(execSetGlobalCustomGravityForceMode); \
	DECLARE_FUNCTION(execSetGlobalCustomGravityDirection); \
	DECLARE_FUNCTION(execSetGlobalCustomGravityPower);


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_ACCESSORS
#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomGravityManager(); \
	friend struct Z_Construct_UClass_UCustomGravityManager_Statics; \
public: \
	DECLARE_CLASS(UCustomGravityManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCustomGravityManager)


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_INCLASS \
private: \
	static void StaticRegisterNativesUCustomGravityManager(); \
	friend struct Z_Construct_UClass_UCustomGravityManager_Statics; \
public: \
	DECLARE_CLASS(UCustomGravityManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCustomGravityManager)


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomGravityManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomGravityManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGravityManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGravityManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomGravityManager(UCustomGravityManager&&); \
	NO_API UCustomGravityManager(const UCustomGravityManager&); \
public: \
	NO_API virtual ~UCustomGravityManager();


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomGravityManager(UCustomGravityManager&&); \
	NO_API UCustomGravityManager(const UCustomGravityManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGravityManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGravityManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomGravityManager) \
	NO_API virtual ~UCustomGravityManager();


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_75_PROLOG
#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_SPARSE_DATA \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_RPC_WRAPPERS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_ACCESSORS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_INCLASS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_SPARSE_DATA \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_ACCESSORS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<class UCustomGravityManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h


#define FOREACH_ENUM_EGRAVITYTYPE(op) \
	op(EGravityType::EGT_Default) \
	op(EGravityType::EGT_Point) \
	op(EGravityType::EGT_Custom) \
	op(EGravityType::EGT_GlobalCustom) 
#define FOREACH_ENUM_EFORCEMODE(op) \
	op(EForceMode::EFM_Acceleration) \
	op(EForceMode::EFM_Force) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
