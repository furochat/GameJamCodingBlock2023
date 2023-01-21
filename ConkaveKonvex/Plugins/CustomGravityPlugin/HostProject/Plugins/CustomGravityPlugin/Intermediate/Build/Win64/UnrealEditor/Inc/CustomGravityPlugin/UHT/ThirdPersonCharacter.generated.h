// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pawns/ThirdPersonCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMGRAVITYPLUGIN_ThirdPersonCharacter_generated_h
#error "ThirdPersonCharacter.generated.h already included, missing '#pragma once' in ThirdPersonCharacter.h"
#endif
#define CUSTOMGRAVITYPLUGIN_ThirdPersonCharacter_generated_h

#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_SPARSE_DATA
#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_RPC_WRAPPERS
#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_ACCESSORS
#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThirdPersonCharacter(); \
	friend struct Z_Construct_UClass_AThirdPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AThirdPersonCharacter, ACustomPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonCharacter)


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAThirdPersonCharacter(); \
	friend struct Z_Construct_UClass_AThirdPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AThirdPersonCharacter, ACustomPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonCharacter)


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThirdPersonCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThirdPersonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThirdPersonCharacter(AThirdPersonCharacter&&); \
	NO_API AThirdPersonCharacter(const AThirdPersonCharacter&); \
public: \
	NO_API virtual ~AThirdPersonCharacter();


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThirdPersonCharacter(AThirdPersonCharacter&&); \
	NO_API AThirdPersonCharacter(const AThirdPersonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThirdPersonCharacter) \
	NO_API virtual ~AThirdPersonCharacter();


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_24_PROLOG
#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_SPARSE_DATA \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_RPC_WRAPPERS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_ACCESSORS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_INCLASS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_SPARSE_DATA \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_ACCESSORS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<class AThirdPersonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h


#define FOREACH_ENUM_EMESHORIENTATION(op) \
	op(EMeshOrientation::EMO_Movement) \
	op(EMeshOrientation::EMO_Camera) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
