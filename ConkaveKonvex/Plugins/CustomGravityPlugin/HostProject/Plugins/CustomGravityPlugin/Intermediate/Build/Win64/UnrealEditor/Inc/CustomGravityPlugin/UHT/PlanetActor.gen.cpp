// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomGravityPlugin/Public/Actors/PlanetActor.h"
#include "CustomGravityPlugin/Public/Objects/CustomGravityManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanetActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_APlanetActor();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_APlanetActor_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UEnum* Z_Construct_UEnum_CustomGravityPlugin_ECollisionType();
	CUSTOMGRAVITYPLUGIN_API UEnum* Z_Construct_UEnum_CustomGravityPlugin_EForceMode();
	CUSTOMGRAVITYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGravityInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomGravityPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollisionType;
	static UEnum* ECollisionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECollisionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECollisionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomGravityPlugin_ECollisionType, Z_Construct_UPackage__Script_CustomGravityPlugin(), TEXT("ECollisionType"));
		}
		return Z_Registration_Info_UEnum_ECollisionType.OuterSingleton;
	}
	template<> CUSTOMGRAVITYPLUGIN_API UEnum* StaticEnum<ECollisionType>()
	{
		return ECollisionType_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomGravityPlugin_ECollisionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomGravityPlugin_ECollisionType_Statics::Enumerators[] = {
		{ "ECollisionType::ECol_Mesh", (int64)ECollisionType::ECol_Mesh },
		{ "ECollisionType::ECol_Sphere", (int64)ECollisionType::ECol_Sphere },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomGravityPlugin_ECollisionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECol_Mesh.DisplayName", "Mesh Collision" },
		{ "ECol_Mesh.Name", "ECollisionType::ECol_Mesh" },
		{ "ECol_Sphere.DisplayName", "Sphere Collision" },
		{ "ECol_Sphere.Name", "ECollisionType::ECol_Sphere" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomGravityPlugin_ECollisionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
		nullptr,
		"ECollisionType",
		"ECollisionType",
		Z_Construct_UEnum_CustomGravityPlugin_ECollisionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomGravityPlugin_ECollisionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomGravityPlugin_ECollisionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomGravityPlugin_ECollisionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomGravityPlugin_ECollisionType()
	{
		if (!Z_Registration_Info_UEnum_ECollisionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollisionType.InnerSingleton, Z_Construct_UEnum_CustomGravityPlugin_ECollisionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECollisionType.InnerSingleton;
	}
	DEFINE_FUNCTION(APlanetActor::execGetGravityinfo)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGravityInfo*)Z_Param__Result=P_THIS->GetGravityinfo(Z_Param_Out_TargetLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlanetActor::execGetGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetGravityDirection(Z_Param_Out_TargetLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlanetActor::execSetForceMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_newForceMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForceMode(EForceMode::Type(Z_Param_newForceMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlanetActor::execSetGravityPower)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewGravity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGravityPower(Z_Param_NewGravity);
		P_NATIVE_END;
	}
	void APlanetActor::StaticRegisterNativesAPlanetActor()
	{
		UClass* Class = APlanetActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGravityDirection", &APlanetActor::execGetGravityDirection },
			{ "GetGravityinfo", &APlanetActor::execGetGravityinfo },
			{ "SetForceMode", &APlanetActor::execSetForceMode },
			{ "SetGravityPower", &APlanetActor::execSetGravityPower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics
	{
		struct PlanetActor_eventGetGravityDirection_Parms
		{
			FVector TargetLocation;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlanetActor_eventGetGravityDirection_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_TargetLocation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlanetActor_eventGetGravityDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_TargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlanetActor" },
		{ "Comment", "/**Returns a specific gravity direction based on the target location*/" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Returns a specific gravity direction based on the target location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlanetActor, nullptr, "GetGravityDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::PlanetActor_eventGetGravityDirection_Parms), Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlanetActor_GetGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics
	{
		struct PlanetActor_eventGetGravityinfo_Parms
		{
			FVector TargetLocation;
			FGravityInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlanetActor_eventGetGravityinfo_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_TargetLocation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlanetActor_eventGetGravityinfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FGravityInfo, METADATA_PARAMS(nullptr, 0) }; // 1304662584
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_TargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlanetActor" },
		{ "Comment", "/** Get the current planet gravity information.\n\x09* NB : Needs a target location. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Get the current planet gravity information.\nNB : Needs a target location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlanetActor, nullptr, "GetGravityinfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::PlanetActor_eventGetGravityinfo_Parms), Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlanetActor_GetGravityinfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlanetActor_SetForceMode_Statics
	{
		struct PlanetActor_eventSetForceMode_Parms
		{
			TEnumAsByte<EForceMode::Type> newForceMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_newForceMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::NewProp_newForceMode = { "newForceMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlanetActor_eventSetForceMode_Parms, newForceMode), Z_Construct_UEnum_CustomGravityPlugin_EForceMode, METADATA_PARAMS(nullptr, 0) }; // 3660200392
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::NewProp_newForceMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlanetActor" },
		{ "Comment", "/** Update planet force mode*/" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Update planet force mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlanetActor, nullptr, "SetForceMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::PlanetActor_eventSetForceMode_Parms), Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlanetActor_SetForceMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics
	{
		struct PlanetActor_eventSetGravityPower_Parms
		{
			float NewGravity;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewGravity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::NewProp_NewGravity = { "NewGravity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlanetActor_eventSetGravityPower_Parms, NewGravity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::NewProp_NewGravity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlanetActor" },
		{ "Comment", "/**Change planet gravity power. */" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Change planet gravity power." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlanetActor, nullptr, "SetGravityPower", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::PlanetActor_eventSetGravityPower_Parms), Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlanetActor_SetGravityPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlanetActor);
	UClass* Z_Construct_UClass_APlanetActor_NoRegister()
	{
		return APlanetActor::StaticClass();
	}
	struct Z_Construct_UClass_APlanetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSphereCollisionIsSelected_MetaData[];
#endif
		static void NewProp_bSphereCollisionIsSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSphereCollisionIsSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollisionRaduis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereCollisionRaduis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlanetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetMeshScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlanetMeshScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ForceMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldUseStepping_MetaData[];
#endif
		static void NewProp_bShouldUseStepping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldUseStepping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetRootComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlanetRootComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlanetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlanetActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlanetActor_GetGravityDirection, "GetGravityDirection" }, // 2430974002
		{ &Z_Construct_UFunction_APlanetActor_GetGravityinfo, "GetGravityinfo" }, // 1859448083
		{ &Z_Construct_UFunction_APlanetActor_SetForceMode, "SetForceMode" }, // 4154126616
		{ &Z_Construct_UFunction_APlanetActor_SetGravityPower, "SetGravityPower" }, // 3491721568
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/PlanetActor.h" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "Comment", "/** Planet collision type : \n\x09* - Mesh Collision.\n\x09* - Sphere Collision.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet collision type :\n- Mesh Collision.\n- Sphere Collision." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlanetActor, CollisionType), Z_Construct_UEnum_CustomGravityPlugin_ECollisionType, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType_MetaData)) }; // 2802186421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "Comment", "/**\n\x09* Cannot be edited.\n\x09* True , if CollisonType is set to \"Sphere Collision\".\n\x09* False , if CollisonType is set to \"Sphere Collision\".\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Cannot be edited.\nTrue , if CollisonType is set to \"Sphere Collision\".\nFalse , if CollisonType is set to \"Sphere Collision\"." },
	};
#endif
	void Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected_SetBit(void* Obj)
	{
		((APlanetActor*)Obj)->bSphereCollisionIsSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected = { "bSphereCollisionIsSelected", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlanetActor), &Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollisionRaduis_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "Comment", "/** Collision Sphere Radius.\n\x09* Editable when CollisonType is set to \"Sphere Collision\"\n\x09*/" },
		{ "editcondition", "bSphereCollisionIsSelected" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Collision Sphere Radius.\nEditable when CollisonType is set to \"Sphere Collision\"" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollisionRaduis = { "SphereCollisionRaduis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlanetActor, SphereCollisionRaduis), METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollisionRaduis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollisionRaduis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMesh_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "Comment", "/**Planet Static Mesh*/" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet Static Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMesh = { "PlanetMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlanetActor, PlanetMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMeshScale_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "Comment", "/**Planet Mesh scale*/" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet Mesh scale" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMeshScale = { "PlanetMeshScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlanetActor, PlanetMeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMeshScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMeshScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_ForceMode_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "Comment", "/** Planet force mode : Acceleration or Force. */" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet force mode : Acceleration or Force." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_ForceMode = { "ForceMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlanetActor, ForceMode), Z_Construct_UEnum_CustomGravityPlugin_EForceMode, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_ForceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_ForceMode_MetaData)) }; // 3660200392
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_GravityPower_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "Comment", "/** Planet gravity power. */" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet gravity power." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_GravityPower = { "GravityPower", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlanetActor, GravityPower), METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_GravityPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_GravityPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "Comment", "/**If true, forces sub-stepping. */" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "If true, forces sub-stepping." },
	};
#endif
	void Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping_SetBit(void* Obj)
	{
		((APlanetActor*)Obj)->bShouldUseStepping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping = { "bShouldUseStepping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlanetActor), &Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetRootComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** The root component of the planet*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "The root component of the planet" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetRootComponent = { "PlanetRootComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlanetActor, PlanetRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetRootComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/**Planet MeshComponet*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet MeshComponet" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlanetActor, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** Planet Sphere Collision. \n\x09* Created only when CollisonType is set to \"Sphere Collision\". \n\x09* Otherwise the component is unregistered.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet Sphere Collision.\nCreated only when CollisonType is set to \"Sphere Collision\".\nOtherwise the component is unregistered." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlanetActor, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollision_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlanetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollisionRaduis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMeshScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_ForceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_GravityPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetRootComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlanetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlanetActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlanetActor_Statics::ClassParams = {
		&APlanetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlanetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlanetActor()
	{
		if (!Z_Registration_Info_UClass_APlanetActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlanetActor.OuterSingleton, Z_Construct_UClass_APlanetActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlanetActor.OuterSingleton;
	}
	template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<APlanetActor>()
	{
		return APlanetActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlanetActor);
	APlanetActor::~APlanetActor() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_Statics::EnumInfo[] = {
		{ ECollisionType_StaticEnum, TEXT("ECollisionType"), &Z_Registration_Info_UEnum_ECollisionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2802186421U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlanetActor, APlanetActor::StaticClass, TEXT("APlanetActor"), &Z_Registration_Info_UClass_APlanetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlanetActor), 3247058477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_1173728751(TEXT("/Script/CustomGravityPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
