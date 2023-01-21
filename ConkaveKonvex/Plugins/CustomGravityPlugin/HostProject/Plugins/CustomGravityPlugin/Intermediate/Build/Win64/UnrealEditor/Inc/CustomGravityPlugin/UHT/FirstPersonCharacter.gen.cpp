// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomGravityPlugin/Public/Pawns/FirstPersonCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonCharacter() {}
// Cross Module References
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_ACustomPawn();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_AFirstPersonCharacter();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomGravityPlugin();
// End Cross Module References
	void AFirstPersonCharacter::StaticRegisterNativesAFirstPersonCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstPersonCharacter);
	UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister()
	{
		return AFirstPersonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPersonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GunSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GunMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shooter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Shooter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPersonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACustomPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/FirstPersonCharacter.h" },
		{ "ModuleRelativePath", "Public/Pawns/FirstPersonCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunSocketName_MetaData[] = {
		{ "Category", "Custom Pawn : Gun Socket" },
		{ "ModuleRelativePath", "Public/Pawns/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunSocketName = { "GunSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFirstPersonCharacter, GunSocketName), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Base Pawn" },
		{ "Comment", "/** Gun Skeletal mesh associated with this Pawn . */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/FirstPersonCharacter.h" },
		{ "ToolTip", "Gun Skeletal mesh associated with this Pawn ." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunMesh = { "GunMesh", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFirstPersonCharacter, GunMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Shooter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Base Pawn" },
		{ "Comment", "/** Shooter ( Holds Shoot Transform information . */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/FirstPersonCharacter.h" },
		{ "ToolTip", "Shooter ( Holds Shoot Transform information ." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Shooter = { "Shooter", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFirstPersonCharacter, Shooter), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Shooter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Shooter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Shooter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPersonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonCharacter_Statics::ClassParams = {
		&AFirstPersonCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstPersonCharacter()
	{
		if (!Z_Registration_Info_UClass_AFirstPersonCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstPersonCharacter.OuterSingleton, Z_Construct_UClass_AFirstPersonCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirstPersonCharacter.OuterSingleton;
	}
	template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<AFirstPersonCharacter>()
	{
		return AFirstPersonCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonCharacter);
	AFirstPersonCharacter::~AFirstPersonCharacter() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirstPersonCharacter, AFirstPersonCharacter::StaticClass, TEXT("AFirstPersonCharacter"), &Z_Registration_Info_UClass_AFirstPersonCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPersonCharacter), 1231240709U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_3441188159(TEXT("/Script/CustomGravityPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
