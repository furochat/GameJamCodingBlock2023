// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomGravityPlugin/Public/Components/CustomGravityComponent.h"
#include "CustomGravityPlugin/Public/Objects/CustomGravityManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomGravityComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_APlanetActor_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_UCustomGravityComponent();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_UCustomGravityComponent_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UEnum* Z_Construct_UEnum_CustomGravityPlugin_EGravityType();
	CUSTOMGRAVITYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGravityInfo();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomGravityPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UCustomGravityComponent::execGetCurrentGravityInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGravityInfo*)Z_Param__Result=P_THIS->GetCurrentGravityInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomGravityComponent::execGetCurrentGravityPower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentGravityPower();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomGravityComponent::execGetCurrentGravityDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentGravityDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomGravityComponent::execGetCurrentPlanet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlanetActor**)Z_Param__Result=P_THIS->GetCurrentPlanet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomGravityComponent::execGetUpdatedComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetUpdatedComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomGravityComponent::execSetUpdatedComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewUpdatedComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpdatedComponent(Z_Param_NewUpdatedComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomGravityComponent::execClearCurrentPlanet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCurrentPlanet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomGravityComponent::execSetCurrentPlanet)
	{
		P_GET_OBJECT(APlanetActor,Z_Param_NewPlanet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentPlanet(Z_Param_NewPlanet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomGravityComponent::execSetGravityType)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewGravityType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGravityType(EGravityType::Type(Z_Param_NewGravityType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomGravityComponent::execSetGravityScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewGravityScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGravityScale(Z_Param_NewGravityScale);
		P_NATIVE_END;
	}
	void UCustomGravityComponent::StaticRegisterNativesUCustomGravityComponent()
	{
		UClass* Class = UCustomGravityComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCurrentPlanet", &UCustomGravityComponent::execClearCurrentPlanet },
			{ "GetCurrentGravityDirection", &UCustomGravityComponent::execGetCurrentGravityDirection },
			{ "GetCurrentGravityInfo", &UCustomGravityComponent::execGetCurrentGravityInfo },
			{ "GetCurrentGravityPower", &UCustomGravityComponent::execGetCurrentGravityPower },
			{ "GetCurrentPlanet", &UCustomGravityComponent::execGetCurrentPlanet },
			{ "GetUpdatedComponent", &UCustomGravityComponent::execGetUpdatedComponent },
			{ "SetCurrentPlanet", &UCustomGravityComponent::execSetCurrentPlanet },
			{ "SetGravityScale", &UCustomGravityComponent::execSetGravityScale },
			{ "SetGravityType", &UCustomGravityComponent::execSetGravityType },
			{ "SetUpdatedComponent", &UCustomGravityComponent::execSetUpdatedComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomGravityComponent_ClearCurrentPlanet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityComponent_ClearCurrentPlanet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|CustomGravity" },
		{ "Comment", "/**Set Current Planet Reference to null*/" },
		{ "ModuleRelativePath", "Public/Components/CustomGravityComponent.h" },
		{ "ToolTip", "Set Current Planet Reference to null" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityComponent_ClearCurrentPlanet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityComponent, nullptr, "ClearCurrentPlanet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityComponent_ClearCurrentPlanet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_ClearCurrentPlanet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityComponent_ClearCurrentPlanet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityComponent_ClearCurrentPlanet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityDirection_Statics
	{
		struct CustomGravityComponent_eventGetCurrentGravityDirection_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityComponent_eventGetCurrentGravityDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|CustomGravity" },
		{ "Comment", "/** Return current component gravity direction. */" },
		{ "ModuleRelativePath", "Public/Components/CustomGravityComponent.h" },
		{ "ToolTip", "Return current component gravity direction." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityComponent, nullptr, "GetCurrentGravityDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityDirection_Statics::CustomGravityComponent_eventGetCurrentGravityDirection_Parms), Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityInfo_Statics
	{
		struct CustomGravityComponent_eventGetCurrentGravityInfo_Parms
		{
			FGravityInfo ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityComponent_eventGetCurrentGravityInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FGravityInfo, METADATA_PARAMS(nullptr, 0) }; // 1304662584
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|CustomGravity" },
		{ "Comment", "/** Return current component gravity information. */" },
		{ "ModuleRelativePath", "Public/Components/CustomGravityComponent.h" },
		{ "ToolTip", "Return current component gravity information." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityComponent, nullptr, "GetCurrentGravityInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityInfo_Statics::CustomGravityComponent_eventGetCurrentGravityInfo_Parms), Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityPower_Statics
	{
		struct CustomGravityComponent_eventGetCurrentGravityPower_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityComponent_eventGetCurrentGravityPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityPower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|CustomGravity" },
		{ "Comment", "/** Return current component gravity power. */" },
		{ "ModuleRelativePath", "Public/Components/CustomGravityComponent.h" },
		{ "ToolTip", "Return current component gravity power." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityComponent, nullptr, "GetCurrentGravityPower", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityPower_Statics::CustomGravityComponent_eventGetCurrentGravityPower_Parms), Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityComponent_GetCurrentPlanet_Statics
	{
		struct CustomGravityComponent_eventGetCurrentPlanet_Parms
		{
			APlanetActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomGravityComponent_GetCurrentPlanet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityComponent_eventGetCurrentPlanet_Parms, ReturnValue), Z_Construct_UClass_APlanetActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityComponent_GetCurrentPlanet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityComponent_GetCurrentPlanet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityComponent_GetCurrentPlanet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|CustomGravity" },
		{ "Comment", "/** Return APlanetActor reference. */" },
		{ "ModuleRelativePath", "Public/Components/CustomGravityComponent.h" },
		{ "ToolTip", "Return APlanetActor reference." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityComponent_GetCurrentPlanet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityComponent, nullptr, "GetCurrentPlanet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityComponent_GetCurrentPlanet_Statics::CustomGravityComponent_eventGetCurrentPlanet_Parms), Z_Construct_UFunction_UCustomGravityComponent_GetCurrentPlanet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_GetCurrentPlanet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityComponent_GetCurrentPlanet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_GetCurrentPlanet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityComponent_GetCurrentPlanet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityComponent_GetCurrentPlanet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityComponent_GetUpdatedComponent_Statics
	{
		struct CustomGravityComponent_eventGetUpdatedComponent_Parms
		{
			UPrimitiveComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityComponent_GetUpdatedComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomGravityComponent_GetUpdatedComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityComponent_eventGetUpdatedComponent_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityComponent_GetUpdatedComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_GetUpdatedComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityComponent_GetUpdatedComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityComponent_GetUpdatedComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityComponent_GetUpdatedComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|CustomGravity" },
		{ "Comment", "/** Return PrimitiveComponent we are Updating. */" },
		{ "ModuleRelativePath", "Public/Components/CustomGravityComponent.h" },
		{ "ToolTip", "Return PrimitiveComponent we are Updating." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityComponent_GetUpdatedComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityComponent, nullptr, "GetUpdatedComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityComponent_GetUpdatedComponent_Statics::CustomGravityComponent_eventGetUpdatedComponent_Parms), Z_Construct_UFunction_UCustomGravityComponent_GetUpdatedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_GetUpdatedComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityComponent_GetUpdatedComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_GetUpdatedComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityComponent_GetUpdatedComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityComponent_GetUpdatedComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityComponent_SetCurrentPlanet_Statics
	{
		struct CustomGravityComponent_eventSetCurrentPlanet_Parms
		{
			APlanetActor* NewPlanet;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlanet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomGravityComponent_SetCurrentPlanet_Statics::NewProp_NewPlanet = { "NewPlanet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityComponent_eventSetCurrentPlanet_Parms, NewPlanet), Z_Construct_UClass_APlanetActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityComponent_SetCurrentPlanet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityComponent_SetCurrentPlanet_Statics::NewProp_NewPlanet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityComponent_SetCurrentPlanet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|CustomGravity" },
		{ "Comment", "/**Update Current Planet Reference*/" },
		{ "ModuleRelativePath", "Public/Components/CustomGravityComponent.h" },
		{ "ToolTip", "Update Current Planet Reference" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityComponent_SetCurrentPlanet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityComponent, nullptr, "SetCurrentPlanet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityComponent_SetCurrentPlanet_Statics::CustomGravityComponent_eventSetCurrentPlanet_Parms), Z_Construct_UFunction_UCustomGravityComponent_SetCurrentPlanet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_SetCurrentPlanet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityComponent_SetCurrentPlanet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_SetCurrentPlanet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityComponent_SetCurrentPlanet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityComponent_SetCurrentPlanet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityComponent_SetGravityScale_Statics
	{
		struct CustomGravityComponent_eventSetGravityScale_Parms
		{
			float NewGravityScale;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewGravityScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomGravityComponent_SetGravityScale_Statics::NewProp_NewGravityScale = { "NewGravityScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityComponent_eventSetGravityScale_Parms, NewGravityScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityComponent_SetGravityScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityComponent_SetGravityScale_Statics::NewProp_NewGravityScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityComponent_SetGravityScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|CustomGravity" },
		{ "Comment", "/**Change Gravity Scale*/" },
		{ "ModuleRelativePath", "Public/Components/CustomGravityComponent.h" },
		{ "ToolTip", "Change Gravity Scale" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityComponent_SetGravityScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityComponent, nullptr, "SetGravityScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityComponent_SetGravityScale_Statics::CustomGravityComponent_eventSetGravityScale_Parms), Z_Construct_UFunction_UCustomGravityComponent_SetGravityScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_SetGravityScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityComponent_SetGravityScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_SetGravityScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityComponent_SetGravityScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityComponent_SetGravityScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityComponent_SetGravityType_Statics
	{
		struct CustomGravityComponent_eventSetGravityType_Parms
		{
			TEnumAsByte<EGravityType::Type> NewGravityType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewGravityType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomGravityComponent_SetGravityType_Statics::NewProp_NewGravityType = { "NewGravityType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityComponent_eventSetGravityType_Parms, NewGravityType), Z_Construct_UEnum_CustomGravityPlugin_EGravityType, METADATA_PARAMS(nullptr, 0) }; // 244949429
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityComponent_SetGravityType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityComponent_SetGravityType_Statics::NewProp_NewGravityType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityComponent_SetGravityType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|CustomGravity" },
		{ "Comment", "/**Change GravityType*/" },
		{ "ModuleRelativePath", "Public/Components/CustomGravityComponent.h" },
		{ "ToolTip", "Change GravityType" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityComponent_SetGravityType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityComponent, nullptr, "SetGravityType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityComponent_SetGravityType_Statics::CustomGravityComponent_eventSetGravityType_Parms), Z_Construct_UFunction_UCustomGravityComponent_SetGravityType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_SetGravityType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityComponent_SetGravityType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_SetGravityType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityComponent_SetGravityType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityComponent_SetGravityType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityComponent_SetUpdatedComponent_Statics
	{
		struct CustomGravityComponent_eventSetUpdatedComponent_Parms
		{
			UPrimitiveComponent* NewUpdatedComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewUpdatedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewUpdatedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityComponent_SetUpdatedComponent_Statics::NewProp_NewUpdatedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomGravityComponent_SetUpdatedComponent_Statics::NewProp_NewUpdatedComponent = { "NewUpdatedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityComponent_eventSetUpdatedComponent_Parms, NewUpdatedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityComponent_SetUpdatedComponent_Statics::NewProp_NewUpdatedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_SetUpdatedComponent_Statics::NewProp_NewUpdatedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityComponent_SetUpdatedComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityComponent_SetUpdatedComponent_Statics::NewProp_NewUpdatedComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityComponent_SetUpdatedComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|CustomGravity" },
		{ "Comment", "/**Update the Component updated by this component*/" },
		{ "ModuleRelativePath", "Public/Components/CustomGravityComponent.h" },
		{ "ToolTip", "Update the Component updated by this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityComponent_SetUpdatedComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityComponent, nullptr, "SetUpdatedComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityComponent_SetUpdatedComponent_Statics::CustomGravityComponent_eventSetUpdatedComponent_Parms), Z_Construct_UFunction_UCustomGravityComponent_SetUpdatedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_SetUpdatedComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityComponent_SetUpdatedComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityComponent_SetUpdatedComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityComponent_SetUpdatedComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityComponent_SetUpdatedComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomGravityComponent);
	UClass* Z_Construct_UClass_UCustomGravityComponent_NoRegister()
	{
		return UCustomGravityComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCustomGravityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomGravityInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomGravityInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GravityType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlanetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomGravityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomGravityComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomGravityComponent_ClearCurrentPlanet, "ClearCurrentPlanet" }, // 3321597210
		{ &Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityDirection, "GetCurrentGravityDirection" }, // 3456058050
		{ &Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityInfo, "GetCurrentGravityInfo" }, // 189163897
		{ &Z_Construct_UFunction_UCustomGravityComponent_GetCurrentGravityPower, "GetCurrentGravityPower" }, // 1070892510
		{ &Z_Construct_UFunction_UCustomGravityComponent_GetCurrentPlanet, "GetCurrentPlanet" }, // 3348509301
		{ &Z_Construct_UFunction_UCustomGravityComponent_GetUpdatedComponent, "GetUpdatedComponent" }, // 780605715
		{ &Z_Construct_UFunction_UCustomGravityComponent_SetCurrentPlanet, "SetCurrentPlanet" }, // 920943996
		{ &Z_Construct_UFunction_UCustomGravityComponent_SetGravityScale, "SetGravityScale" }, // 2625126654
		{ &Z_Construct_UFunction_UCustomGravityComponent_SetGravityType, "SetGravityType" }, // 473758130
		{ &Z_Construct_UFunction_UCustomGravityComponent_SetUpdatedComponent, "SetUpdatedComponent" }, // 3493230312
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGravityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CustomGravityComponent.h" },
		{ "ModuleRelativePath", "Public/Components/CustomGravityComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_GravityScale_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Gravity Component (General Settings)" },
		{ "Comment", "/** Custom gravity scale. Gravity is multiplied by this amount for the component owner. */" },
		{ "ModuleRelativePath", "Public/Components/CustomGravityComponent.h" },
		{ "ToolTip", "Custom gravity scale. Gravity is multiplied by this amount for the component owner." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomGravityComponent, GravityScale), METADATA_PARAMS(Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_GravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_GravityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_CustomGravityInfo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Gravity Component (General Settings)" },
		{ "Comment", "/** Custom gravity Information.\n\x09* Gravity Power.\n\x09* Gravity Direction.\n\x09* Force Mode.\n\x09* ForeSubstepping.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/CustomGravityComponent.h" },
		{ "ToolTip", "Custom gravity Information.\nGravity Power.\nGravity Direction.\nForce Mode.\nForeSubstepping." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_CustomGravityInfo = { "CustomGravityInfo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomGravityComponent, CustomGravityInfo), Z_Construct_UScriptStruct_FGravityInfo, METADATA_PARAMS(Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_CustomGravityInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_CustomGravityInfo_MetaData)) }; // 1304662584
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_GravityType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Gravity Component (General Settings)" },
		{ "Comment", "/** Gravity Type.\n\x09* Default Gravity.\n\x09* Point Gravity.\n\x09* Custom Gravity.\n\x09* Global Custom Gravity.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/CustomGravityComponent.h" },
		{ "ToolTip", "Gravity Type.\nDefault Gravity.\nPoint Gravity.\nCustom Gravity.\nGlobal Custom Gravity." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_GravityType = { "GravityType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomGravityComponent, GravityType), Z_Construct_UEnum_CustomGravityPlugin_EGravityType, METADATA_PARAMS(Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_GravityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_GravityType_MetaData)) }; // 244949429
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_PlanetActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Gravity Component (General Settings)" },
		{ "Comment", "/**Planet Actor Reference .*/" },
		{ "ModuleRelativePath", "Public/Components/CustomGravityComponent.h" },
		{ "ToolTip", "Planet Actor Reference ." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_PlanetActor = { "PlanetActor", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomGravityComponent, PlanetActor), Z_Construct_UClass_APlanetActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_PlanetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_PlanetActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomGravityComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_GravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_CustomGravityInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_GravityType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGravityComponent_Statics::NewProp_PlanetActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomGravityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomGravityComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomGravityComponent_Statics::ClassParams = {
		&UCustomGravityComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomGravityComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGravityComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomGravityComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGravityComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomGravityComponent()
	{
		if (!Z_Registration_Info_UClass_UCustomGravityComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomGravityComponent.OuterSingleton, Z_Construct_UClass_UCustomGravityComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomGravityComponent.OuterSingleton;
	}
	template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<UCustomGravityComponent>()
	{
		return UCustomGravityComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomGravityComponent);
	UCustomGravityComponent::~UCustomGravityComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomGravityComponent, UCustomGravityComponent::StaticClass, TEXT("UCustomGravityComponent"), &Z_Registration_Info_UClass_UCustomGravityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomGravityComponent), 3587092943U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_1667072347(TEXT("/Script/CustomGravityPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
