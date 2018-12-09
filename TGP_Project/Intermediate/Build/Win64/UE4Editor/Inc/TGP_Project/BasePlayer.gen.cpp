// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGP_Project/Public/BasePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePlayer() {}
// Cross Module References
	TGP_PROJECT_API UClass* Z_Construct_UClass_ABasePlayer_NoRegister();
	TGP_PROJECT_API UClass* Z_Construct_UClass_ABasePlayer();
	TGP_PROJECT_API UClass* Z_Construct_UClass_ABaseCharacter();
	UPackage* Z_Construct_UPackage__Script_TGP_Project();
	TGP_PROJECT_API UFunction* Z_Construct_UFunction_ABasePlayer_GetIsPlayerInRestrictedArea();
	TGP_PROJECT_API UFunction* Z_Construct_UFunction_ABasePlayer_SetIsPlayerInRestrictedArea();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void ABasePlayer::StaticRegisterNativesABasePlayer()
	{
		UClass* Class = ABasePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsPlayerInRestrictedArea", &ABasePlayer::execGetIsPlayerInRestrictedArea },
			{ "SetIsPlayerInRestrictedArea", &ABasePlayer::execSetIsPlayerInRestrictedArea },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABasePlayer_GetIsPlayerInRestrictedArea_Statics
	{
		struct BasePlayer_eventGetIsPlayerInRestrictedArea_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABasePlayer_GetIsPlayerInRestrictedArea_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BasePlayer_eventGetIsPlayerInRestrictedArea_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABasePlayer_GetIsPlayerInRestrictedArea_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BasePlayer_eventGetIsPlayerInRestrictedArea_Parms), &Z_Construct_UFunction_ABasePlayer_GetIsPlayerInRestrictedArea_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlayer_GetIsPlayerInRestrictedArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlayer_GetIsPlayerInRestrictedArea_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasePlayer_GetIsPlayerInRestrictedArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "RestictedAreas" },
		{ "ModuleRelativePath", "Public/BasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayer_GetIsPlayerInRestrictedArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayer, "GetIsPlayerInRestrictedArea", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BasePlayer_eventGetIsPlayerInRestrictedArea_Parms), Z_Construct_UFunction_ABasePlayer_GetIsPlayerInRestrictedArea_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABasePlayer_GetIsPlayerInRestrictedArea_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasePlayer_GetIsPlayerInRestrictedArea_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABasePlayer_GetIsPlayerInRestrictedArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasePlayer_GetIsPlayerInRestrictedArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasePlayer_GetIsPlayerInRestrictedArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasePlayer_SetIsPlayerInRestrictedArea_Statics
	{
		struct BasePlayer_eventSetIsPlayerInRestrictedArea_Parms
		{
			bool newIsInRestrictedArea;
		};
		static void NewProp_newIsInRestrictedArea_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_newIsInRestrictedArea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABasePlayer_SetIsPlayerInRestrictedArea_Statics::NewProp_newIsInRestrictedArea_SetBit(void* Obj)
	{
		((BasePlayer_eventSetIsPlayerInRestrictedArea_Parms*)Obj)->newIsInRestrictedArea = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABasePlayer_SetIsPlayerInRestrictedArea_Statics::NewProp_newIsInRestrictedArea = { UE4CodeGen_Private::EPropertyClass::Bool, "newIsInRestrictedArea", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BasePlayer_eventSetIsPlayerInRestrictedArea_Parms), &Z_Construct_UFunction_ABasePlayer_SetIsPlayerInRestrictedArea_Statics::NewProp_newIsInRestrictedArea_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlayer_SetIsPlayerInRestrictedArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlayer_SetIsPlayerInRestrictedArea_Statics::NewProp_newIsInRestrictedArea,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasePlayer_SetIsPlayerInRestrictedArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "RestictedAreas" },
		{ "ModuleRelativePath", "Public/BasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayer_SetIsPlayerInRestrictedArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlayer, "SetIsPlayerInRestrictedArea", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BasePlayer_eventSetIsPlayerInRestrictedArea_Parms), Z_Construct_UFunction_ABasePlayer_SetIsPlayerInRestrictedArea_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABasePlayer_SetIsPlayerInRestrictedArea_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasePlayer_SetIsPlayerInRestrictedArea_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABasePlayer_SetIsPlayerInRestrictedArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasePlayer_SetIsPlayerInRestrictedArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasePlayer_SetIsPlayerInRestrictedArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABasePlayer_NoRegister()
	{
		return ABasePlayer::StaticClass();
	}
	struct Z_Construct_UClass_ABasePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inRestictedArea_MetaData[];
#endif
		static void NewProp__inRestictedArea_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__inRestictedArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sprintTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sprintTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSneaking_MetaData[];
#endif
		static void NewProp__isSneaking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSneaking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sneakSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sneakSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mousePosinNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__mousePosinNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__panMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__panMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__panResetSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__panResetSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__panSpeedMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__panSpeedMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__panSpeedMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__panSpeedMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__panSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__panSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zoomSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__zoomSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__orthoWidthMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__orthoWidthMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__orthoWidthMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__orthoWidthMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__orthoWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__orthoWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TGP_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABasePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasePlayer_GetIsPlayerInRestrictedArea, "GetIsPlayerInRestrictedArea" }, // 1026546197
		{ &Z_Construct_UFunction_ABasePlayer_SetIsPlayerInRestrictedArea, "SetIsPlayerInRestrictedArea" }, // 3392012391
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasePlayer.h" },
		{ "ModuleRelativePath", "Public/BasePlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayer_Statics::NewProp__inRestictedArea_MetaData[] = {
		{ "Category", "Areas" },
		{ "ModuleRelativePath", "Public/BasePlayer.h" },
		{ "ToolTip", "Stealth Variables" },
	};
#endif
	void Z_Construct_UClass_ABasePlayer_Statics::NewProp__inRestictedArea_SetBit(void* Obj)
	{
		((ABasePlayer*)Obj)->_inRestictedArea = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp__inRestictedArea = { UE4CodeGen_Private::EPropertyClass::Bool, "_inRestictedArea", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABasePlayer), &Z_Construct_UClass_ABasePlayer_Statics::NewProp__inRestictedArea_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABasePlayer_Statics::NewProp__inRestictedArea_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::NewProp__inRestictedArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayer_Statics::NewProp__sprintTimer_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/BasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp__sprintTimer = { UE4CodeGen_Private::EPropertyClass::Float, "_sprintTimer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABasePlayer, _sprintTimer), METADATA_PARAMS(Z_Construct_UClass_ABasePlayer_Statics::NewProp__sprintTimer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::NewProp__sprintTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayer_Statics::NewProp__sprintSpeed_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ClampMax", "120.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/BasePlayer.h" },
		{ "ToolTip", "Movement Variables" },
		{ "UIMax", "200.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp__sprintSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "_sprintSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABasePlayer, _sprintSpeed), METADATA_PARAMS(Z_Construct_UClass_ABasePlayer_Statics::NewProp__sprintSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::NewProp__sprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayer_Statics::NewProp__isSneaking_MetaData[] = {
		{ "Category", "Stealth Settings" },
		{ "ModuleRelativePath", "Public/BasePlayer.h" },
	};
#endif
	void Z_Construct_UClass_ABasePlayer_Statics::NewProp__isSneaking_SetBit(void* Obj)
	{
		((ABasePlayer*)Obj)->_isSneaking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp__isSneaking = { UE4CodeGen_Private::EPropertyClass::Bool, "_isSneaking", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABasePlayer), &Z_Construct_UClass_ABasePlayer_Statics::NewProp__isSneaking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABasePlayer_Statics::NewProp__isSneaking_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::NewProp__isSneaking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayer_Statics::NewProp__sneakSpeed_MetaData[] = {
		{ "Category", "Stealth Settings" },
		{ "ClampMax", "120.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/BasePlayer.h" },
		{ "ToolTip", "Stealth Variables" },
		{ "UIMax", "200.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp__sneakSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "_sneakSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABasePlayer, _sneakSpeed), METADATA_PARAMS(Z_Construct_UClass_ABasePlayer_Statics::NewProp__sneakSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::NewProp__sneakSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayer_Statics::NewProp__mousePosinNormal_MetaData[] = {
		{ "Category", "PlayerMusicSkill" },
		{ "ModuleRelativePath", "Public/BasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp__mousePosinNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "_mousePosinNormal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABasePlayer, _mousePosinNormal), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ABasePlayer_Statics::NewProp__mousePosinNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::NewProp__mousePosinNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayer_Statics::NewProp__panMaxDistance_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/BasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp__panMaxDistance = { UE4CodeGen_Private::EPropertyClass::Float, "_panMaxDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABasePlayer, _panMaxDistance), METADATA_PARAMS(Z_Construct_UClass_ABasePlayer_Statics::NewProp__panMaxDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::NewProp__panMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayer_Statics::NewProp__panResetSpeed_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/BasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp__panResetSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "_panResetSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABasePlayer, _panResetSpeed), METADATA_PARAMS(Z_Construct_UClass_ABasePlayer_Statics::NewProp__panResetSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::NewProp__panResetSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayer_Statics::NewProp__panSpeedMax_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/BasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp__panSpeedMax = { UE4CodeGen_Private::EPropertyClass::Float, "_panSpeedMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABasePlayer, _panSpeedMax), METADATA_PARAMS(Z_Construct_UClass_ABasePlayer_Statics::NewProp__panSpeedMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::NewProp__panSpeedMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayer_Statics::NewProp__panSpeedMin_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/BasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp__panSpeedMin = { UE4CodeGen_Private::EPropertyClass::Float, "_panSpeedMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABasePlayer, _panSpeedMin), METADATA_PARAMS(Z_Construct_UClass_ABasePlayer_Statics::NewProp__panSpeedMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::NewProp__panSpeedMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayer_Statics::NewProp__panSpeed_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/BasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp__panSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "_panSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABasePlayer, _panSpeed), METADATA_PARAMS(Z_Construct_UClass_ABasePlayer_Statics::NewProp__panSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::NewProp__panSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayer_Statics::NewProp__zoomSpeed_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/BasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp__zoomSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "_zoomSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABasePlayer, _zoomSpeed), METADATA_PARAMS(Z_Construct_UClass_ABasePlayer_Statics::NewProp__zoomSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::NewProp__zoomSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayer_Statics::NewProp__orthoWidthMin_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/BasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp__orthoWidthMin = { UE4CodeGen_Private::EPropertyClass::Float, "_orthoWidthMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABasePlayer, _orthoWidthMin), METADATA_PARAMS(Z_Construct_UClass_ABasePlayer_Statics::NewProp__orthoWidthMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::NewProp__orthoWidthMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayer_Statics::NewProp__orthoWidthMax_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/BasePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp__orthoWidthMax = { UE4CodeGen_Private::EPropertyClass::Float, "_orthoWidthMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABasePlayer, _orthoWidthMax), METADATA_PARAMS(Z_Construct_UClass_ABasePlayer_Statics::NewProp__orthoWidthMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::NewProp__orthoWidthMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayer_Statics::NewProp__orthoWidth_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/BasePlayer.h" },
		{ "ToolTip", "Camera Settings" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp__orthoWidth = { UE4CodeGen_Private::EPropertyClass::Float, "_orthoWidth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABasePlayer, _orthoWidth), METADATA_PARAMS(Z_Construct_UClass_ABasePlayer_Statics::NewProp__orthoWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::NewProp__orthoWidth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp__inRestictedArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp__sprintTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp__sprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp__isSneaking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp__sneakSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp__mousePosinNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp__panMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp__panResetSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp__panSpeedMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp__panSpeedMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp__panSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp__zoomSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp__orthoWidthMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp__orthoWidthMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp__orthoWidth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasePlayer_Statics::ClassParams = {
		&ABasePlayer::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ABasePlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABasePlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasePlayer, 1561919045);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasePlayer(Z_Construct_UClass_ABasePlayer, &ABasePlayer::StaticClass, TEXT("/Script/TGP_Project"), TEXT("ABasePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
