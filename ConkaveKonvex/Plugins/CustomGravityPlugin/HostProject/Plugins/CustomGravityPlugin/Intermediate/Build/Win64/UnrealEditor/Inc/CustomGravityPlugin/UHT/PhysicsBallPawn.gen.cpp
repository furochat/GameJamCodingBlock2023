// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomGravityPlugin/Public/Pawns/PhysicsBallPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsBallPawn() {}
// Cross Module References
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_APhysicsBallPawn();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_APhysicsBallPawn_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_UCustomGravityComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomGravityPlugin();
// End Cross Module References
	DEFINE_FUNCTION(APhysicsBallPawn::execJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Jump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhysicsBallPawn::execAddCameraYawInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_UpdateRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCameraYawInput(Z_Param_UpdateRate,Z_Param_ScaleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhysicsBallPawn::execAddCameraPitchInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_UpdateRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCameraPitchInput(Z_Param_UpdateRate,Z_Param_ScaleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhysicsBallPawn::execAddForwardTorque)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddForwardTorque(Z_Param_ScaleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhysicsBallPawn::execAddRightTorque)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRightTorque(Z_Param_ScaleValue);
		P_NATIVE_END;
	}
	void APhysicsBallPawn::StaticRegisterNativesAPhysicsBallPawn()
	{
		UClass* Class = APhysicsBallPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCameraPitchInput", &APhysicsBallPawn::execAddCameraPitchInput },
			{ "AddCameraYawInput", &APhysicsBallPawn::execAddCameraYawInput },
			{ "AddForwardTorque", &APhysicsBallPawn::execAddForwardTorque },
			{ "AddRightTorque", &APhysicsBallPawn::execAddRightTorque },
			{ "Jump", &APhysicsBallPawn::execJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APhysicsBallPawn_AddCameraPitchInput_Statics
	{
		struct PhysicsBallPawn_eventAddCameraPitchInput_Parms
		{
			float UpdateRate;
			float ScaleValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APhysicsBallPawn_AddCameraPitchInput_Statics::NewProp_UpdateRate = { "UpdateRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsBallPawn_eventAddCameraPitchInput_Parms, UpdateRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APhysicsBallPawn_AddCameraPitchInput_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsBallPawn_eventAddCameraPitchInput_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhysicsBallPawn_AddCameraPitchInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhysicsBallPawn_AddCameraPitchInput_Statics::NewProp_UpdateRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhysicsBallPawn_AddCameraPitchInput_Statics::NewProp_ScaleValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhysicsBallPawn_AddCameraPitchInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "BasePawn|Input" },
		{ "Comment", "/**\n\x09* Add input (affecting Pitch) to the SpringArm relative rotation.\n\x09* The added value is the product of UpdateRate & ScaleValue.\n\x09*/" },
		{ "CPP_Default_ScaleValue", "0.000000" },
		{ "CPP_Default_UpdateRate", "1.000000" },
		{ "Keywords", "AddInput" },
		{ "ModuleRelativePath", "Public/Pawns/PhysicsBallPawn.h" },
		{ "ToolTip", "Add input (affecting Pitch) to the SpringArm relative rotation.\nThe added value is the product of UpdateRate & ScaleValue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhysicsBallPawn_AddCameraPitchInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhysicsBallPawn, nullptr, "AddCameraPitchInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_APhysicsBallPawn_AddCameraPitchInput_Statics::PhysicsBallPawn_eventAddCameraPitchInput_Parms), Z_Construct_UFunction_APhysicsBallPawn_AddCameraPitchInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhysicsBallPawn_AddCameraPitchInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhysicsBallPawn_AddCameraPitchInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhysicsBallPawn_AddCameraPitchInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhysicsBallPawn_AddCameraPitchInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhysicsBallPawn_AddCameraPitchInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhysicsBallPawn_AddCameraYawInput_Statics
	{
		struct PhysicsBallPawn_eventAddCameraYawInput_Parms
		{
			float UpdateRate;
			float ScaleValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APhysicsBallPawn_AddCameraYawInput_Statics::NewProp_UpdateRate = { "UpdateRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsBallPawn_eventAddCameraYawInput_Parms, UpdateRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APhysicsBallPawn_AddCameraYawInput_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsBallPawn_eventAddCameraYawInput_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhysicsBallPawn_AddCameraYawInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhysicsBallPawn_AddCameraYawInput_Statics::NewProp_UpdateRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhysicsBallPawn_AddCameraYawInput_Statics::NewProp_ScaleValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhysicsBallPawn_AddCameraYawInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "BasePawn|Input" },
		{ "Comment", "/**\n\x09* Add input (affecting Yaw) to the SpringArm relative rotation.\n\x09* The added value is the product of UpdateRate & ScaleValue.\n\x09*/" },
		{ "CPP_Default_ScaleValue", "0.000000" },
		{ "CPP_Default_UpdateRate", "1.000000" },
		{ "Keywords", "AddInput" },
		{ "ModuleRelativePath", "Public/Pawns/PhysicsBallPawn.h" },
		{ "ToolTip", "Add input (affecting Yaw) to the SpringArm relative rotation.\nThe added value is the product of UpdateRate & ScaleValue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhysicsBallPawn_AddCameraYawInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhysicsBallPawn, nullptr, "AddCameraYawInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_APhysicsBallPawn_AddCameraYawInput_Statics::PhysicsBallPawn_eventAddCameraYawInput_Parms), Z_Construct_UFunction_APhysicsBallPawn_AddCameraYawInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhysicsBallPawn_AddCameraYawInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhysicsBallPawn_AddCameraYawInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhysicsBallPawn_AddCameraYawInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhysicsBallPawn_AddCameraYawInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhysicsBallPawn_AddCameraYawInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhysicsBallPawn_AddForwardTorque_Statics
	{
		struct PhysicsBallPawn_eventAddForwardTorque_Parms
		{
			float ScaleValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APhysicsBallPawn_AddForwardTorque_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsBallPawn_eventAddForwardTorque_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhysicsBallPawn_AddForwardTorque_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhysicsBallPawn_AddForwardTorque_Statics::NewProp_ScaleValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhysicsBallPawn_AddForwardTorque_Statics::Function_MetaDataParams[] = {
		{ "Category", "BasePawn|Input" },
		{ "Comment", "/** Called to move ball forwards and backwards */" },
		{ "Keywords", "AddInput" },
		{ "ModuleRelativePath", "Public/Pawns/PhysicsBallPawn.h" },
		{ "ToolTip", "Called to move ball forwards and backwards" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhysicsBallPawn_AddForwardTorque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhysicsBallPawn, nullptr, "AddForwardTorque", nullptr, nullptr, sizeof(Z_Construct_UFunction_APhysicsBallPawn_AddForwardTorque_Statics::PhysicsBallPawn_eventAddForwardTorque_Parms), Z_Construct_UFunction_APhysicsBallPawn_AddForwardTorque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhysicsBallPawn_AddForwardTorque_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhysicsBallPawn_AddForwardTorque_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhysicsBallPawn_AddForwardTorque_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhysicsBallPawn_AddForwardTorque()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhysicsBallPawn_AddForwardTorque_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhysicsBallPawn_AddRightTorque_Statics
	{
		struct PhysicsBallPawn_eventAddRightTorque_Parms
		{
			float ScaleValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APhysicsBallPawn_AddRightTorque_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsBallPawn_eventAddRightTorque_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhysicsBallPawn_AddRightTorque_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhysicsBallPawn_AddRightTorque_Statics::NewProp_ScaleValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhysicsBallPawn_AddRightTorque_Statics::Function_MetaDataParams[] = {
		{ "Category", "BasePawn|Input" },
		{ "Comment", "/** Called to move ball Left and Right */" },
		{ "Keywords", "AddInput" },
		{ "ModuleRelativePath", "Public/Pawns/PhysicsBallPawn.h" },
		{ "ToolTip", "Called to move ball Left and Right" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhysicsBallPawn_AddRightTorque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhysicsBallPawn, nullptr, "AddRightTorque", nullptr, nullptr, sizeof(Z_Construct_UFunction_APhysicsBallPawn_AddRightTorque_Statics::PhysicsBallPawn_eventAddRightTorque_Parms), Z_Construct_UFunction_APhysicsBallPawn_AddRightTorque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhysicsBallPawn_AddRightTorque_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhysicsBallPawn_AddRightTorque_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhysicsBallPawn_AddRightTorque_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhysicsBallPawn_AddRightTorque()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhysicsBallPawn_AddRightTorque_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhysicsBallPawn_Jump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhysicsBallPawn_Jump_Statics::Function_MetaDataParams[] = {
		{ "Category", "BasePawn|Input" },
		{ "Comment", "/** Handle jump action. */" },
		{ "Keywords", "AddInput" },
		{ "ModuleRelativePath", "Public/Pawns/PhysicsBallPawn.h" },
		{ "ToolTip", "Handle jump action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhysicsBallPawn_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhysicsBallPawn, nullptr, "Jump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhysicsBallPawn_Jump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhysicsBallPawn_Jump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhysicsBallPawn_Jump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhysicsBallPawn_Jump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APhysicsBallPawn);
	UClass* Z_Construct_UClass_APhysicsBallPawn_NoRegister()
	{
		return APhysicsBallPawn::StaticClass();
	}
	struct Z_Construct_UClass_APhysicsBallPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanJump_MetaData[];
#endif
		static void NewProp_bCanJump_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanJump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollTorque_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollTorque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraPitchMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraPitchMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraPitchMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraPitchMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ball_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ball;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GravityComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhysicsBallPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APhysicsBallPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APhysicsBallPawn_AddCameraPitchInput, "AddCameraPitchInput" }, // 3007065494
		{ &Z_Construct_UFunction_APhysicsBallPawn_AddCameraYawInput, "AddCameraYawInput" }, // 2684104151
		{ &Z_Construct_UFunction_APhysicsBallPawn_AddForwardTorque, "AddForwardTorque" }, // 231923168
		{ &Z_Construct_UFunction_APhysicsBallPawn_AddRightTorque, "AddRightTorque" }, // 910219537
		{ &Z_Construct_UFunction_APhysicsBallPawn_Jump, "Jump" }, // 3579533930
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsBallPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/PhysicsBallPawn.h" },
		{ "ModuleRelativePath", "Public/Pawns/PhysicsBallPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_bCanJump_MetaData[] = {
		{ "Category", "Ball" },
		{ "Comment", "/** Indicates whether we can currently jump, use to prevent double jumping */" },
		{ "ModuleRelativePath", "Public/Pawns/PhysicsBallPawn.h" },
		{ "ToolTip", "Indicates whether we can currently jump, use to prevent double jumping" },
	};
#endif
	void Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_bCanJump_SetBit(void* Obj)
	{
		((APhysicsBallPawn*)Obj)->bCanJump = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_bCanJump = { "bCanJump", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APhysicsBallPawn), &Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_bCanJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_bCanJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_bCanJump_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_JumpImpulse_MetaData[] = {
		{ "Category", "Ball" },
		{ "Comment", "/** Vertical impulse to apply when pressing jump */" },
		{ "ModuleRelativePath", "Public/Pawns/PhysicsBallPawn.h" },
		{ "ToolTip", "Vertical impulse to apply when pressing jump" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_JumpImpulse = { "JumpImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhysicsBallPawn, JumpImpulse), METADATA_PARAMS(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_JumpImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_JumpImpulse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_RollTorque_MetaData[] = {
		{ "Category", "Ball" },
		{ "Comment", "/** Torque to apply when trying to roll ball */" },
		{ "ModuleRelativePath", "Public/Pawns/PhysicsBallPawn.h" },
		{ "ToolTip", "Torque to apply when trying to roll ball" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_RollTorque = { "RollTorque", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhysicsBallPawn, RollTorque), METADATA_PARAMS(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_RollTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_RollTorque_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_CameraPitchMin_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Minimum view Pitch, in degrees. */" },
		{ "ModuleRelativePath", "Public/Pawns/PhysicsBallPawn.h" },
		{ "ToolTip", "Minimum view Pitch, in degrees." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_CameraPitchMin = { "CameraPitchMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhysicsBallPawn, CameraPitchMin), METADATA_PARAMS(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_CameraPitchMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_CameraPitchMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_CameraPitchMax_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Maximum view Pitch, in degrees. */" },
		{ "ModuleRelativePath", "Public/Pawns/PhysicsBallPawn.h" },
		{ "ToolTip", "Maximum view Pitch, in degrees." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_CameraPitchMax = { "CameraPitchMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhysicsBallPawn, CameraPitchMax), METADATA_PARAMS(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_CameraPitchMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_CameraPitchMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_Ball_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** StaticMesh used for the ball */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/PhysicsBallPawn.h" },
		{ "ToolTip", "StaticMesh used for the ball" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_Ball = { "Ball", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhysicsBallPawn, Ball), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_Ball_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_Ball_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_SpringRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** Spring root Component*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/PhysicsBallPawn.h" },
		{ "ToolTip", "Spring root Component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_SpringRoot = { "SpringRoot", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhysicsBallPawn, SpringRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_SpringRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_SpringRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** Spring arm for positioning the camera above the ball */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/PhysicsBallPawn.h" },
		{ "ToolTip", "Spring arm for positioning the camera above the ball" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhysicsBallPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** Camera to view the ball */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/PhysicsBallPawn.h" },
		{ "ToolTip", "Camera to view the ball" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhysicsBallPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_GravityComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** Gravity Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/PhysicsBallPawn.h" },
		{ "ToolTip", "Gravity Component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_GravityComponent = { "GravityComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhysicsBallPawn, GravityComponent), Z_Construct_UClass_UCustomGravityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_GravityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_GravityComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhysicsBallPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_bCanJump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_JumpImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_RollTorque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_CameraPitchMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_CameraPitchMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_Ball,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_SpringRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsBallPawn_Statics::NewProp_GravityComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhysicsBallPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhysicsBallPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APhysicsBallPawn_Statics::ClassParams = {
		&APhysicsBallPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APhysicsBallPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsBallPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APhysicsBallPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsBallPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhysicsBallPawn()
	{
		if (!Z_Registration_Info_UClass_APhysicsBallPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APhysicsBallPawn.OuterSingleton, Z_Construct_UClass_APhysicsBallPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APhysicsBallPawn.OuterSingleton;
	}
	template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<APhysicsBallPawn>()
	{
		return APhysicsBallPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsBallPawn);
	APhysicsBallPawn::~APhysicsBallPawn() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APhysicsBallPawn, APhysicsBallPawn::StaticClass, TEXT("APhysicsBallPawn"), &Z_Registration_Info_UClass_APhysicsBallPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APhysicsBallPawn), 2039900072U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_2077170805(TEXT("/Script/CustomGravityPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
