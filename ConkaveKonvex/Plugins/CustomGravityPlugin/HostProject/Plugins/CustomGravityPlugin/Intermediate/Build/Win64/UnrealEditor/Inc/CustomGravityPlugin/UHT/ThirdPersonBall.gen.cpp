// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomGravityPlugin/Public/Pawns/ThirdPersonBall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonBall() {}
// Cross Module References
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_ACustomPawn();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_AThirdPersonBall();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_AThirdPersonBall_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomGravityPlugin();
// End Cross Module References
	void AThirdPersonBall::StaticRegisterNativesAThirdPersonBall()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThirdPersonBall);
	UClass* Z_Construct_UClass_AThirdPersonBall_NoRegister()
	{
		return AThirdPersonBall::StaticClass();
	}
	struct Z_Construct_UClass_AThirdPersonBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BallRotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BallRotationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinVelocityToRotateBall_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVelocityToRotateBall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ball_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ball;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdPersonBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACustomPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonBall_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/ThirdPersonBall.h" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonBall.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_BallRotationRate_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Change in ball rotation per second (Between 0 & 1).\n\x09* Depends on custom pawn movement speed.\n\x09* 0.0f : No Rotation.\n\x09* 1.0f : Full Speed Rotation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonBall.h" },
		{ "ToolTip", "Change in ball rotation per second (Between 0 & 1).\nDepends on custom pawn movement speed.\n0.0f : No Rotation.\n1.0f : Full Speed Rotation." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_BallRotationRate = { "BallRotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AThirdPersonBall, BallRotationRate), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_BallRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_BallRotationRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* How Smoothly go from Current Rotation to Desired Rotation\n\x09*/" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonBall.h" },
		{ "ToolTip", "How Smoothly go from Current Rotation to Desired Rotation" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AThirdPersonBall, RotationInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_RotationInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_RotationInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_MinVelocityToRotateBall_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**Minimum Movement speed needed to rotate the ball*/" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonBall.h" },
		{ "ToolTip", "Minimum Movement speed needed to rotate the ball" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_MinVelocityToRotateBall = { "MinVelocityToRotateBall", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AThirdPersonBall, MinVelocityToRotateBall), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_MinVelocityToRotateBall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_MinVelocityToRotateBall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_Ball_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** StaticMesh used for the ball */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonBall.h" },
		{ "ToolTip", "StaticMesh used for the ball" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_Ball = { "Ball", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AThirdPersonBall, Ball), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_Ball_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_Ball_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThirdPersonBall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_BallRotationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_RotationInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_MinVelocityToRotateBall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonBall_Statics::NewProp_Ball,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdPersonBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonBall>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonBall_Statics::ClassParams = {
		&AThirdPersonBall::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AThirdPersonBall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonBall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThirdPersonBall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThirdPersonBall()
	{
		if (!Z_Registration_Info_UClass_AThirdPersonBall.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdPersonBall.OuterSingleton, Z_Construct_UClass_AThirdPersonBall_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThirdPersonBall.OuterSingleton;
	}
	template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<AThirdPersonBall>()
	{
		return AThirdPersonBall::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonBall);
	AThirdPersonBall::~AThirdPersonBall() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonBall_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonBall_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThirdPersonBall, AThirdPersonBall::StaticClass, TEXT("AThirdPersonBall"), &Z_Registration_Info_UClass_AThirdPersonBall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdPersonBall), 699826267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonBall_h_3438921950(TEXT("/Script/CustomGravityPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonBall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonBall_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
