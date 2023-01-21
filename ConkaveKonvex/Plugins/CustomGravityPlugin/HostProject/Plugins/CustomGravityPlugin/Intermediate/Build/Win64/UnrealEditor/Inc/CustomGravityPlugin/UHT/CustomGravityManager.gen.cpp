// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomGravityPlugin/Public/Objects/CustomGravityManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomGravityManager() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_UCustomGravityManager();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_UCustomGravityManager_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UEnum* Z_Construct_UEnum_CustomGravityPlugin_EForceMode();
	CUSTOMGRAVITYPLUGIN_API UEnum* Z_Construct_UEnum_CustomGravityPlugin_EGravityType();
	CUSTOMGRAVITYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGravityInfo();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CustomGravityPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGravityType;
	static UEnum* EGravityType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGravityType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGravityType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomGravityPlugin_EGravityType, Z_Construct_UPackage__Script_CustomGravityPlugin(), TEXT("EGravityType"));
		}
		return Z_Registration_Info_UEnum_EGravityType.OuterSingleton;
	}
	template<> CUSTOMGRAVITYPLUGIN_API UEnum* StaticEnum<EGravityType::Type>()
	{
		return EGravityType_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomGravityPlugin_EGravityType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomGravityPlugin_EGravityType_Statics::Enumerators[] = {
		{ "EGravityType::EGT_Default", (int64)EGravityType::EGT_Default },
		{ "EGravityType::EGT_Point", (int64)EGravityType::EGT_Point },
		{ "EGravityType::EGT_Custom", (int64)EGravityType::EGT_Custom },
		{ "EGravityType::EGT_GlobalCustom", (int64)EGravityType::EGT_GlobalCustom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomGravityPlugin_EGravityType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enumerates available custom gravity types. */" },
		{ "EGT_Custom.DisplayName", "Custom Gravity" },
		{ "EGT_Custom.Name", "EGravityType::EGT_Custom" },
		{ "EGT_Default.DisplayName", "Default Gravity" },
		{ "EGT_Default.Name", "EGravityType::EGT_Default" },
		{ "EGT_GlobalCustom.DisplayName", "Global Custom Gravity" },
		{ "EGT_GlobalCustom.Name", "EGravityType::EGT_GlobalCustom" },
		{ "EGT_Point.DisplayName", "Point Gravity" },
		{ "EGT_Point.Name", "EGravityType::EGT_Point" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "Enumerates available custom gravity types." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomGravityPlugin_EGravityType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
		nullptr,
		"EGravityType",
		"EGravityType::Type",
		Z_Construct_UEnum_CustomGravityPlugin_EGravityType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomGravityPlugin_EGravityType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_CustomGravityPlugin_EGravityType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomGravityPlugin_EGravityType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomGravityPlugin_EGravityType()
	{
		if (!Z_Registration_Info_UEnum_EGravityType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGravityType.InnerSingleton, Z_Construct_UEnum_CustomGravityPlugin_EGravityType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGravityType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EForceMode;
	static UEnum* EForceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EForceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EForceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomGravityPlugin_EForceMode, Z_Construct_UPackage__Script_CustomGravityPlugin(), TEXT("EForceMode"));
		}
		return Z_Registration_Info_UEnum_EForceMode.OuterSingleton;
	}
	template<> CUSTOMGRAVITYPLUGIN_API UEnum* StaticEnum<EForceMode::Type>()
	{
		return EForceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomGravityPlugin_EForceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomGravityPlugin_EForceMode_Statics::Enumerators[] = {
		{ "EForceMode::EFM_Acceleration", (int64)EForceMode::EFM_Acceleration },
		{ "EForceMode::EFM_Force", (int64)EForceMode::EFM_Force },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomGravityPlugin_EForceMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Type of force applied to a body using Custom Gravity. */" },
		{ "EFM_Acceleration.DisplayName", "Acceleration" },
		{ "EFM_Acceleration.Name", "EForceMode::EFM_Acceleration" },
		{ "EFM_Force.DisplayName", "Force" },
		{ "EFM_Force.Name", "EForceMode::EFM_Force" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "Type of force applied to a body using Custom Gravity." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomGravityPlugin_EForceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
		nullptr,
		"EForceMode",
		"EForceMode::Type",
		Z_Construct_UEnum_CustomGravityPlugin_EForceMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomGravityPlugin_EForceMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_CustomGravityPlugin_EForceMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomGravityPlugin_EForceMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomGravityPlugin_EForceMode()
	{
		if (!Z_Registration_Info_UEnum_EForceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EForceMode.InnerSingleton, Z_Construct_UEnum_CustomGravityPlugin_EForceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EForceMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GravityInfo;
class UScriptStruct* FGravityInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GravityInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GravityInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGravityInfo, Z_Construct_UPackage__Script_CustomGravityPlugin(), TEXT("GravityInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GravityInfo.OuterSingleton;
}
template<> CUSTOMGRAVITYPLUGIN_API UScriptStruct* StaticStruct<FGravityInfo>()
{
	return FGravityInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGravityInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GravityDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ForceMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceSubStepping_MetaData[];
#endif
		static void NewProp_bForceSubStepping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSubStepping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGravityInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct to hold information about the \"Gravity Type\" . */" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "Struct to hold information about the \"Gravity Type\" ." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGravityInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGravityInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityPower_MetaData[] = {
		{ "Category", "GravityInfo" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityPower = { "GravityPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGravityInfo, GravityPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityDirection_MetaData[] = {
		{ "Category", "GravityInfo" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityDirection = { "GravityDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGravityInfo, GravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_ForceMode_MetaData[] = {
		{ "Category", "GravityInfo" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_ForceMode = { "ForceMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGravityInfo, ForceMode), Z_Construct_UEnum_CustomGravityPlugin_EForceMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_ForceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_ForceMode_MetaData)) }; // 3660200392
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_bForceSubStepping_MetaData[] = {
		{ "Category", "GravityInfo" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_bForceSubStepping_SetBit(void* Obj)
	{
		((FGravityInfo*)Obj)->bForceSubStepping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_bForceSubStepping = { "bForceSubStepping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGravityInfo), &Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_bForceSubStepping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_bForceSubStepping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_bForceSubStepping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGravityInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_GravityDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_ForceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGravityInfo_Statics::NewProp_bForceSubStepping,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGravityInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
		nullptr,
		&NewStructOps,
		"GravityInfo",
		sizeof(FGravityInfo),
		alignof(FGravityInfo),
		Z_Construct_UScriptStruct_FGravityInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGravityInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGravityInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGravityInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGravityInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GravityInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GravityInfo.InnerSingleton, Z_Construct_UScriptStruct_FGravityInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GravityInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UCustomGravityManager::execConv_ForceModeToString)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InForceMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCustomGravityManager::Conv_ForceModeToString(EForceMode::Type(Z_Param_InForceMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomGravityManager::execConv_GravityTypeToString)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InGravityType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCustomGravityManager::Conv_GravityTypeToString(EGravityType::Type(Z_Param_InGravityType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomGravityManager::execConv_GravityInfoToString)
	{
		P_GET_STRUCT(FGravityInfo,Z_Param_InGravityInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCustomGravityManager::Conv_GravityInfoToString(Z_Param_InGravityInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomGravityManager::execGetGlobalCustomGravityInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGravityInfo*)Z_Param__Result=UCustomGravityManager::GetGlobalCustomGravityInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomGravityManager::execGetGlobalCustomGravityForceMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EForceMode::Type>*)Z_Param__Result=UCustomGravityManager::GetGlobalCustomGravityForceMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomGravityManager::execGetGlobalCustomGravityDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UCustomGravityManager::GetGlobalCustomGravityDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomGravityManager::execGetGlobalCustomGravityPower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UCustomGravityManager::GetGlobalCustomGravityPower();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomGravityManager::execSetGlobalCustomGravityInfo)
	{
		P_GET_STRUCT_REF(FGravityInfo,Z_Param_Out_NewGravityInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCustomGravityManager::SetGlobalCustomGravityInfo(Z_Param_Out_NewGravityInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomGravityManager::execSetGlobalCustomGravityForceMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewForceMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCustomGravityManager::SetGlobalCustomGravityForceMode(EForceMode::Type(Z_Param_NewForceMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomGravityManager::execSetGlobalCustomGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCustomGravityManager::SetGlobalCustomGravityDirection(Z_Param_Out_NewGravityDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomGravityManager::execSetGlobalCustomGravityPower)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewGravityPower);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCustomGravityManager::SetGlobalCustomGravityPower(Z_Param_NewGravityPower);
		P_NATIVE_END;
	}
	void UCustomGravityManager::StaticRegisterNativesUCustomGravityManager()
	{
		UClass* Class = UCustomGravityManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_ForceModeToString", &UCustomGravityManager::execConv_ForceModeToString },
			{ "Conv_GravityInfoToString", &UCustomGravityManager::execConv_GravityInfoToString },
			{ "Conv_GravityTypeToString", &UCustomGravityManager::execConv_GravityTypeToString },
			{ "GetGlobalCustomGravityDirection", &UCustomGravityManager::execGetGlobalCustomGravityDirection },
			{ "GetGlobalCustomGravityForceMode", &UCustomGravityManager::execGetGlobalCustomGravityForceMode },
			{ "GetGlobalCustomGravityInfo", &UCustomGravityManager::execGetGlobalCustomGravityInfo },
			{ "GetGlobalCustomGravityPower", &UCustomGravityManager::execGetGlobalCustomGravityPower },
			{ "SetGlobalCustomGravityDirection", &UCustomGravityManager::execSetGlobalCustomGravityDirection },
			{ "SetGlobalCustomGravityForceMode", &UCustomGravityManager::execSetGlobalCustomGravityForceMode },
			{ "SetGlobalCustomGravityInfo", &UCustomGravityManager::execSetGlobalCustomGravityInfo },
			{ "SetGlobalCustomGravityPower", &UCustomGravityManager::execSetGlobalCustomGravityPower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics
	{
		struct CustomGravityManager_eventConv_ForceModeToString_Parms
		{
			TEnumAsByte<EForceMode::Type> InForceMode;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InForceMode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::NewProp_InForceMode = { "InForceMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityManager_eventConv_ForceModeToString_Parms, InForceMode), Z_Construct_UEnum_CustomGravityPlugin_EForceMode, METADATA_PARAMS(nullptr, 0) }; // 3660200392
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityManager_eventConv_ForceModeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::NewProp_InForceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "Comment", "/** Converts a ForceMode enum value to a string */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (ForceMode)" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "Converts a ForceMode enum value to a string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, nullptr, "Conv_ForceModeToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::CustomGravityManager_eventConv_ForceModeToString_Parms), Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics
	{
		struct CustomGravityManager_eventConv_GravityInfoToString_Parms
		{
			FGravityInfo InGravityInfo;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InGravityInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::NewProp_InGravityInfo = { "InGravityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityManager_eventConv_GravityInfoToString_Parms, InGravityInfo), Z_Construct_UScriptStruct_FGravityInfo, METADATA_PARAMS(nullptr, 0) }; // 1304662584
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityManager_eventConv_GravityInfoToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::NewProp_InGravityInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "Comment", "/** Converts a GravityInfo struct value to a string */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (GravityInfo)" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "Converts a GravityInfo struct value to a string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, nullptr, "Conv_GravityInfoToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::CustomGravityManager_eventConv_GravityInfoToString_Parms), Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics
	{
		struct CustomGravityManager_eventConv_GravityTypeToString_Parms
		{
			TEnumAsByte<EGravityType::Type> InGravityType;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InGravityType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::NewProp_InGravityType = { "InGravityType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityManager_eventConv_GravityTypeToString_Parms, InGravityType), Z_Construct_UEnum_CustomGravityPlugin_EGravityType, METADATA_PARAMS(nullptr, 0) }; // 244949429
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityManager_eventConv_GravityTypeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::NewProp_InGravityType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "Comment", "/** Converts a GravityType enum value to a string */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (GravityType)" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "Converts a GravityType enum value to a string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, nullptr, "Conv_GravityTypeToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::CustomGravityManager_eventConv_GravityTypeToString_Parms), Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics
	{
		struct CustomGravityManager_eventGetGlobalCustomGravityDirection_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityManager_eventGetGlobalCustomGravityDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Custom Gravity" },
		{ "Comment", "/** returns Global Custom Gravity direction */" },
		{ "DisplayName", "Global Custom Gravity Direction" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "returns Global Custom Gravity direction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, nullptr, "GetGlobalCustomGravityDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::CustomGravityManager_eventGetGlobalCustomGravityDirection_Parms), Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics
	{
		struct CustomGravityManager_eventGetGlobalCustomGravityForceMode_Parms
		{
			TEnumAsByte<EForceMode::Type> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityManager_eventGetGlobalCustomGravityForceMode_Parms, ReturnValue), Z_Construct_UEnum_CustomGravityPlugin_EForceMode, METADATA_PARAMS(nullptr, 0) }; // 3660200392
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Custom Gravity" },
		{ "Comment", "/** returns Global Custom Gravity force mode */" },
		{ "DisplayName", "Global Custom Gravity ForceMode" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "returns Global Custom Gravity force mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, nullptr, "GetGlobalCustomGravityForceMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::CustomGravityManager_eventGetGlobalCustomGravityForceMode_Parms), Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics
	{
		struct CustomGravityManager_eventGetGlobalCustomGravityInfo_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityManager_eventGetGlobalCustomGravityInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FGravityInfo, METADATA_PARAMS(nullptr, 0) }; // 1304662584
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Custom Gravity" },
		{ "Comment", "/** returns Global Custom Gravity information */" },
		{ "DisplayName", "Global Custom Gravity Info" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "returns Global Custom Gravity information" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, nullptr, "GetGlobalCustomGravityInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::CustomGravityManager_eventGetGlobalCustomGravityInfo_Parms), Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics
	{
		struct CustomGravityManager_eventGetGlobalCustomGravityPower_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityManager_eventGetGlobalCustomGravityPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Custom Gravity" },
		{ "Comment", "/** returns Global Custom Gravity power */" },
		{ "DisplayName", "Global Custom Gravity Power" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "returns Global Custom Gravity power" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, nullptr, "GetGlobalCustomGravityPower", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::CustomGravityManager_eventGetGlobalCustomGravityPower_Parms), Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics
	{
		struct CustomGravityManager_eventSetGlobalCustomGravityDirection_Parms
		{
			FVector NewGravityDirection;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::NewProp_NewGravityDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::NewProp_NewGravityDirection = { "NewGravityDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityManager_eventSetGlobalCustomGravityDirection_Parms, NewGravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::NewProp_NewGravityDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::NewProp_NewGravityDirection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::NewProp_NewGravityDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Custom Gravity" },
		{ "Comment", "/** Change Global Custom Gravity direction. \n\x09* This change will affect all physics object using a CustomGravityComponent with GravityType set to \"Global Custom Gravity\". \n\x09*/" },
		{ "DisplayName", "Set Global Custom Gravity Direction" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "Change Global Custom Gravity direction.\nThis change will affect all physics object using a CustomGravityComponent with GravityType set to \"Global Custom Gravity\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, nullptr, "SetGlobalCustomGravityDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::CustomGravityManager_eventSetGlobalCustomGravityDirection_Parms), Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics
	{
		struct CustomGravityManager_eventSetGlobalCustomGravityForceMode_Parms
		{
			TEnumAsByte<EForceMode::Type> NewForceMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewForceMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::NewProp_NewForceMode = { "NewForceMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityManager_eventSetGlobalCustomGravityForceMode_Parms, NewForceMode), Z_Construct_UEnum_CustomGravityPlugin_EForceMode, METADATA_PARAMS(nullptr, 0) }; // 3660200392
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::NewProp_NewForceMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Custom Gravity" },
		{ "Comment", "/** Change Global Custom Gravity force mode. \n\x09* \x09* This change will affect all physics object using a CustomGravityComponent with GravityType set to \"Global Custom Gravity\". \n\x09*/" },
		{ "DisplayName", "Set Global Custom Gravity Force Mode" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "Change Global Custom Gravity force mode.\n     * This change will affect all physics object using a CustomGravityComponent with GravityType set to \"Global Custom Gravity\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, nullptr, "SetGlobalCustomGravityForceMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::CustomGravityManager_eventSetGlobalCustomGravityForceMode_Parms), Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics
	{
		struct CustomGravityManager_eventSetGlobalCustomGravityInfo_Parms
		{
			FGravityInfo NewGravityInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewGravityInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::NewProp_NewGravityInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::NewProp_NewGravityInfo = { "NewGravityInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityManager_eventSetGlobalCustomGravityInfo_Parms, NewGravityInfo), Z_Construct_UScriptStruct_FGravityInfo, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::NewProp_NewGravityInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::NewProp_NewGravityInfo_MetaData)) }; // 1304662584
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::NewProp_NewGravityInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Custom Gravity" },
		{ "Comment", "/** Change Global Custom Gravity information. \n\x09* This change will affect all physics object using a CustomGravityComponent with GravityType set to \"Global Custom Gravity\". \n\x09*/" },
		{ "DisplayName", "Set Global Custom Gravity Info" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "Change Global Custom Gravity information.\nThis change will affect all physics object using a CustomGravityComponent with GravityType set to \"Global Custom Gravity\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, nullptr, "SetGlobalCustomGravityInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::CustomGravityManager_eventSetGlobalCustomGravityInfo_Parms), Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics
	{
		struct CustomGravityManager_eventSetGlobalCustomGravityPower_Parms
		{
			float NewGravityPower;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewGravityPower;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::NewProp_NewGravityPower = { "NewGravityPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomGravityManager_eventSetGlobalCustomGravityPower_Parms, NewGravityPower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::NewProp_NewGravityPower,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Custom Gravity" },
		{ "Comment", "/** Change Global Custom Gravity power. \n\x09* This change will affect all physics object using a CustomGravityComponent with GravityType set to \"Global Custom Gravity\". \n\x09*/" },
		{ "DisplayName", "Set Global Custom Gravity Power" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
		{ "ToolTip", "Change Global Custom Gravity power.\nThis change will affect all physics object using a CustomGravityComponent with GravityType set to \"Global Custom Gravity\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGravityManager, nullptr, "SetGlobalCustomGravityPower", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::CustomGravityManager_eventSetGlobalCustomGravityPower_Parms), Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomGravityManager);
	UClass* Z_Construct_UClass_UCustomGravityManager_NoRegister()
	{
		return UCustomGravityManager::StaticClass();
	}
	struct Z_Construct_UClass_UCustomGravityManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomGravityManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomGravityManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomGravityManager_Conv_ForceModeToString, "Conv_ForceModeToString" }, // 225556394
		{ &Z_Construct_UFunction_UCustomGravityManager_Conv_GravityInfoToString, "Conv_GravityInfoToString" }, // 2988201480
		{ &Z_Construct_UFunction_UCustomGravityManager_Conv_GravityTypeToString, "Conv_GravityTypeToString" }, // 4224694187
		{ &Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityDirection, "GetGlobalCustomGravityDirection" }, // 113487376
		{ &Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityForceMode, "GetGlobalCustomGravityForceMode" }, // 121873593
		{ &Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityInfo, "GetGlobalCustomGravityInfo" }, // 3839357645
		{ &Z_Construct_UFunction_UCustomGravityManager_GetGlobalCustomGravityPower, "GetGlobalCustomGravityPower" }, // 1355339468
		{ &Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityDirection, "SetGlobalCustomGravityDirection" }, // 914663574
		{ &Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityForceMode, "SetGlobalCustomGravityForceMode" }, // 3460232607
		{ &Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityInfo, "SetGlobalCustomGravityInfo" }, // 2026709303
		{ &Z_Construct_UFunction_UCustomGravityManager_SetGlobalCustomGravityPower, "SetGlobalCustomGravityPower" }, // 1440854574
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGravityManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Objects/CustomGravityManager.h" },
		{ "ModuleRelativePath", "Public/Objects/CustomGravityManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomGravityManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomGravityManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomGravityManager_Statics::ClassParams = {
		&UCustomGravityManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomGravityManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGravityManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomGravityManager()
	{
		if (!Z_Registration_Info_UClass_UCustomGravityManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomGravityManager.OuterSingleton, Z_Construct_UClass_UCustomGravityManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomGravityManager.OuterSingleton;
	}
	template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<UCustomGravityManager>()
	{
		return UCustomGravityManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomGravityManager);
	UCustomGravityManager::~UCustomGravityManager() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_Statics::EnumInfo[] = {
		{ EGravityType_StaticEnum, TEXT("EGravityType"), &Z_Registration_Info_UEnum_EGravityType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 244949429U) },
		{ EForceMode_StaticEnum, TEXT("EForceMode"), &Z_Registration_Info_UEnum_EForceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3660200392U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_Statics::ScriptStructInfo[] = {
		{ FGravityInfo::StaticStruct, Z_Construct_UScriptStruct_FGravityInfo_Statics::NewStructOps, TEXT("GravityInfo"), &Z_Registration_Info_UScriptStruct_GravityInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGravityInfo), 1304662584U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomGravityManager, UCustomGravityManager::StaticClass, TEXT("UCustomGravityManager"), &Z_Registration_Info_UClass_UCustomGravityManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomGravityManager), 2788640573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_2174804078(TEXT("/Script/CustomGravityPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Objects_CustomGravityManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
