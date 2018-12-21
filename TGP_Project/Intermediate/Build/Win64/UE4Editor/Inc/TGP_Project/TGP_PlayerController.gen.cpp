// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGP_Project/Public/TGP_PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTGP_PlayerController() {}
// Cross Module References
	TGP_PROJECT_API UClass* Z_Construct_UClass_ATGP_PlayerController_NoRegister();
	TGP_PROJECT_API UClass* Z_Construct_UClass_ATGP_PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TGP_Project();
	TGP_PROJECT_API UFunction* Z_Construct_UFunction_ATGP_PlayerController_DisplayPauseMenu();
// End Cross Module References
	static FName NAME_ATGP_PlayerController_DisplayPauseMenu = FName(TEXT("DisplayPauseMenu"));
	void ATGP_PlayerController::DisplayPauseMenu(bool Show)
	{
		TGP_PlayerController_eventDisplayPauseMenu_Parms Parms;
		Parms.Show=Show ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATGP_PlayerController_DisplayPauseMenu),&Parms);
	}
	void ATGP_PlayerController::StaticRegisterNativesATGP_PlayerController()
	{
	}
	struct Z_Construct_UFunction_ATGP_PlayerController_DisplayPauseMenu_Statics
	{
		static void NewProp_Show_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Show;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATGP_PlayerController_DisplayPauseMenu_Statics::NewProp_Show_SetBit(void* Obj)
	{
		((TGP_PlayerController_eventDisplayPauseMenu_Parms*)Obj)->Show = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATGP_PlayerController_DisplayPauseMenu_Statics::NewProp_Show = { UE4CodeGen_Private::EPropertyClass::Bool, "Show", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TGP_PlayerController_eventDisplayPauseMenu_Parms), &Z_Construct_UFunction_ATGP_PlayerController_DisplayPauseMenu_Statics::NewProp_Show_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATGP_PlayerController_DisplayPauseMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATGP_PlayerController_DisplayPauseMenu_Statics::NewProp_Show,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATGP_PlayerController_DisplayPauseMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TGP_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATGP_PlayerController_DisplayPauseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATGP_PlayerController, "DisplayPauseMenu", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(TGP_PlayerController_eventDisplayPauseMenu_Parms), Z_Construct_UFunction_ATGP_PlayerController_DisplayPauseMenu_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATGP_PlayerController_DisplayPauseMenu_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATGP_PlayerController_DisplayPauseMenu_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATGP_PlayerController_DisplayPauseMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATGP_PlayerController_DisplayPauseMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATGP_PlayerController_DisplayPauseMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATGP_PlayerController_NoRegister()
	{
		return ATGP_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATGP_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATGP_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TGP_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATGP_PlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATGP_PlayerController_DisplayPauseMenu, "DisplayPauseMenu" }, // 3708944147
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATGP_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TGP_PlayerController.h" },
		{ "ModuleRelativePath", "Public/TGP_PlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATGP_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATGP_PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATGP_PlayerController_Statics::ClassParams = {
		&ATGP_PlayerController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATGP_PlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATGP_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATGP_PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATGP_PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATGP_PlayerController, 225346313);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATGP_PlayerController(Z_Construct_UClass_ATGP_PlayerController, &ATGP_PlayerController::StaticClass, TEXT("/Script/TGP_Project"), TEXT("ATGP_PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATGP_PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
