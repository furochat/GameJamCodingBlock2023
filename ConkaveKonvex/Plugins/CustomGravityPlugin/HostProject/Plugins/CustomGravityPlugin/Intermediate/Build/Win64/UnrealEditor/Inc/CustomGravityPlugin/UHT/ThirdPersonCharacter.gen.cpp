// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomGravityPlugin/Public/Pawns/ThirdPersonCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonCharacter() {}
// Cross Module References
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_ACustomPawn();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_AThirdPersonCharacter();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_AThirdPersonCharacter_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UEnum* Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation();
	UPackage* Z_Construct_UPackage__Script_CustomGravityPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshOrientation;
	static UEnum* EMeshOrientation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshOrientation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation, Z_Construct_UPackage__Script_CustomGravityPlugin(), TEXT("EMeshOrientation"));
		}
		return Z_Registration_Info_UEnum_EMeshOrientation.OuterSingleton;
	}
	template<> CUSTOMGRAVITYPLUGIN_API UEnum* StaticEnum<EMeshOrientation::Type>()
	{
		return EMeshOrientation_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation_Statics::Enumerators[] = {
		{ "EMeshOrientation::EMO_Movement", (int64)EMeshOrientation::EMO_Movement },
		{ "EMeshOrientation::EMO_Camera", (int64)EMeshOrientation::EMO_Camera },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EMO_Camera.DisplayName", "Camera Direction" },
		{ "EMO_Camera.Name", "EMeshOrientation::EMO_Camera" },
		{ "EMO_Movement.DisplayName", "Movement Direction" },
		{ "EMO_Movement.Name", "EMeshOrientation::EMO_Movement" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
		nullptr,
		"EMeshOrientation",
		"EMeshOrientation::Type",
		Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation()
	{
		if (!Z_Registration_Info_UEnum_EMeshOrientation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshOrientation.InnerSingleton, Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshOrientation.InnerSingleton;
	}
	void AThirdPersonCharacter::StaticRegisterNativesAThirdPersonCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThirdPersonCharacter);
	UClass* Z_Construct_UClass_AThirdPersonCharacter_NoRegister()
	{
		return AThirdPersonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AThirdPersonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshOrientation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MeshOrientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateMeshOnlyWhenMoving_MetaData[];
#endif
		static void NewProp_bRotateMeshOnlyWhenMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateMeshOnlyWhenMoving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinVelocityToRotateMesh_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVelocityToRotateMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInstantRotation_MetaData[];
#endif
		static void NewProp_bInstantRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstantRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdPersonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACustomPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/ThirdPersonCharacter.h" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MeshOrientation_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "Comment", "/**\n\x09* Set Mesh Orientation.\n\x09* rotate the Character toward the direction of :\n\x09* -Movement Direction\n\x09* -Camera Direction\n\x09*/" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
		{ "ToolTip", "Set Mesh Orientation.\nrotate the Character toward the direction of :\n-Movement Direction\n-Camera Direction" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MeshOrientation = { "MeshOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AThirdPersonCharacter, MeshOrientation), Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MeshOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MeshOrientation_MetaData)) }; // 2884349488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "Comment", "/**\n\x09* if true , rotate the mesh only when the custom pawn is moving .\n\x09*/" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
		{ "ToolTip", "if true , rotate the mesh only when the custom pawn is moving ." },
	};
#endif
	void Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving_SetBit(void* Obj)
	{
		((AThirdPersonCharacter*)Obj)->bRotateMeshOnlyWhenMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving = { "bRotateMeshOnlyWhenMoving", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AThirdPersonCharacter), &Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MinVelocityToRotateMesh_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/**Minimum Movement speed needed to orient the mesh toward the desired direction*/" },
		{ "editcondition", "bRotateMeshOnlyWhenMoving" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
		{ "ToolTip", "Minimum Movement speed needed to orient the mesh toward the desired direction" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MinVelocityToRotateMesh = { "MinVelocityToRotateMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AThirdPersonCharacter, MinVelocityToRotateMesh), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MinVelocityToRotateMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MinVelocityToRotateMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "Comment", "/** \n\x09* if true , instantly rotate the character mesh toward the desired rotation. \n\x09* if false , smoothly rotate the character mesh toward the desired rotation. \n\x09*/" },
		{ "editcondition", "bRotateMeshOnlyWhenMoving" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
		{ "ToolTip", "if true , instantly rotate the character mesh toward the desired rotation.\nif false , smoothly rotate the character mesh toward the desired rotation." },
	};
#endif
	void Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation_SetBit(void* Obj)
	{
		((AThirdPersonCharacter*)Obj)->bInstantRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation = { "bInstantRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AThirdPersonCharacter), &Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Controls how smooth the rotation is done , editable if InstantRotation is false  */" },
		{ "editcondition", "!bInstantRotation" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
		{ "ToolTip", "Controls how smooth the rotation is done , editable if InstantRotation is false" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AThirdPersonCharacter, RotationInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_RotationInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_RotationInterpSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MeshOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MinVelocityToRotateMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_RotationInterpSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdPersonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonCharacter_Statics::ClassParams = {
		&AThirdPersonCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThirdPersonCharacter()
	{
		if (!Z_Registration_Info_UClass_AThirdPersonCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdPersonCharacter.OuterSingleton, Z_Construct_UClass_AThirdPersonCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThirdPersonCharacter.OuterSingleton;
	}
	template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<AThirdPersonCharacter>()
	{
		return AThirdPersonCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonCharacter);
	AThirdPersonCharacter::~AThirdPersonCharacter() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_Statics::EnumInfo[] = {
		{ EMeshOrientation_StaticEnum, TEXT("EMeshOrientation"), &Z_Registration_Info_UEnum_EMeshOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2884349488U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThirdPersonCharacter, AThirdPersonCharacter::StaticClass, TEXT("AThirdPersonCharacter"), &Z_Registration_Info_UClass_AThirdPersonCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdPersonCharacter), 2971826403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_454313569(TEXT("/Script/CustomGravityPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_ThirdPersonCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
