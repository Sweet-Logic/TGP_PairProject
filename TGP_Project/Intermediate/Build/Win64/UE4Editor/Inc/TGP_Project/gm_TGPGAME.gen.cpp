// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGP_Project/Public/gm_TGPGAME.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegm_TGPGAME() {}
// Cross Module References
	TGP_PROJECT_API UClass* Z_Construct_UClass_Agm_TGPGAME_NoRegister();
	TGP_PROJECT_API UClass* Z_Construct_UClass_Agm_TGPGAME();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TGP_Project();
	TGP_PROJECT_API UFunction* Z_Construct_UFunction_Agm_TGPGAME_GetLevelTarget();
	TGP_PROJECT_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	TGP_PROJECT_API UFunction* Z_Construct_UFunction_Agm_TGPGAME_PlayerCompleteLevel();
	TGP_PROJECT_API UFunction* Z_Construct_UFunction_Agm_TGPGAME_PlayerFailedLevel();
	TGP_PROJECT_API UFunction* Z_Construct_UFunction_Agm_TGPGAME_SwitchToMainMenu();
// End Cross Module References
	static FName NAME_Agm_TGPGAME_PlayerCompleteLevel = FName(TEXT("PlayerCompleteLevel"));
	void Agm_TGPGAME::PlayerCompleteLevel()
	{
		ProcessEvent(FindFunctionChecked(NAME_Agm_TGPGAME_PlayerCompleteLevel),NULL);
	}
	static FName NAME_Agm_TGPGAME_PlayerFailedLevel = FName(TEXT("PlayerFailedLevel"));
	void Agm_TGPGAME::PlayerFailedLevel()
	{
		ProcessEvent(FindFunctionChecked(NAME_Agm_TGPGAME_PlayerFailedLevel),NULL);
	}
	static FName NAME_Agm_TGPGAME_SwitchToMainMenu = FName(TEXT("SwitchToMainMenu"));
	void Agm_TGPGAME::SwitchToMainMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_Agm_TGPGAME_SwitchToMainMenu),NULL);
	}
	void Agm_TGPGAME::StaticRegisterNativesAgm_TGPGAME()
	{
		UClass* Class = Agm_TGPGAME::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLevelTarget", &Agm_TGPGAME::execGetLevelTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Agm_TGPGAME_GetLevelTarget_Statics
	{
		struct gm_TGPGAME_eventGetLevelTarget_Parms
		{
			ABaseCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Agm_TGPGAME_GetLevelTarget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(gm_TGPGAME_eventGetLevelTarget_Parms, ReturnValue), Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Agm_TGPGAME_GetLevelTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Agm_TGPGAME_GetLevelTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Agm_TGPGAME_GetLevelTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/gm_TGPGAME.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Agm_TGPGAME_GetLevelTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Agm_TGPGAME, "GetLevelTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(gm_TGPGAME_eventGetLevelTarget_Parms), Z_Construct_UFunction_Agm_TGPGAME_GetLevelTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_Agm_TGPGAME_GetLevelTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Agm_TGPGAME_GetLevelTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_Agm_TGPGAME_GetLevelTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Agm_TGPGAME_GetLevelTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Agm_TGPGAME_GetLevelTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Agm_TGPGAME_PlayerCompleteLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Agm_TGPGAME_PlayerCompleteLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/gm_TGPGAME.h" },
		{ "ToolTip", "When the game ends. Show Score? or Go to MainMenu" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Agm_TGPGAME_PlayerCompleteLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Agm_TGPGAME, "PlayerCompleteLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Agm_TGPGAME_PlayerCompleteLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_Agm_TGPGAME_PlayerCompleteLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Agm_TGPGAME_PlayerCompleteLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Agm_TGPGAME_PlayerCompleteLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Agm_TGPGAME_PlayerFailedLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Agm_TGPGAME_PlayerFailedLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/gm_TGPGAME.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Agm_TGPGAME_PlayerFailedLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Agm_TGPGAME, "PlayerFailedLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Agm_TGPGAME_PlayerFailedLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_Agm_TGPGAME_PlayerFailedLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Agm_TGPGAME_PlayerFailedLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Agm_TGPGAME_PlayerFailedLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Agm_TGPGAME_SwitchToMainMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Agm_TGPGAME_SwitchToMainMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/gm_TGPGAME.h" },
		{ "ToolTip", "For going to the main menu from pause or end of game." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Agm_TGPGAME_SwitchToMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Agm_TGPGAME, "SwitchToMainMenu", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Agm_TGPGAME_SwitchToMainMenu_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_Agm_TGPGAME_SwitchToMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Agm_TGPGAME_SwitchToMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Agm_TGPGAME_SwitchToMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Agm_TGPGAME_NoRegister()
	{
		return Agm_TGPGAME::StaticClass();
	}
	struct Z_Construct_UClass_Agm_TGPGAME_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timesPlayerDetected_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__timesPlayerDetected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bodyGuardKillCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__bodyGuardKillCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__civilianKillCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__civilianKillCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerNeverDetected_MetaData[];
#endif
		static void NewProp__playerNeverDetected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__playerNeverDetected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerDied_MetaData[];
#endif
		static void NewProp__playerDied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__playerDied;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vipKilled_MetaData[];
#endif
		static void NewProp__vipKilled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__vipKilled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyGuard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyGuard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Civilian_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Civilian;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Agm_TGPGAME_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TGP_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Agm_TGPGAME_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Agm_TGPGAME_GetLevelTarget, "GetLevelTarget" }, // 947771851
		{ &Z_Construct_UFunction_Agm_TGPGAME_PlayerCompleteLevel, "PlayerCompleteLevel" }, // 2338257849
		{ &Z_Construct_UFunction_Agm_TGPGAME_PlayerFailedLevel, "PlayerFailedLevel" }, // 2570731379
		{ &Z_Construct_UFunction_Agm_TGPGAME_SwitchToMainMenu, "SwitchToMainMenu" }, // 1668451889
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agm_TGPGAME_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "gm_TGPGAME.h" },
		{ "ModuleRelativePath", "Public/gm_TGPGAME.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__timesPlayerDetected_MetaData[] = {
		{ "Category", "gm_TGPGAME" },
		{ "ModuleRelativePath", "Public/gm_TGPGAME.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__timesPlayerDetected = { UE4CodeGen_Private::EPropertyClass::Int, "_timesPlayerDetected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(Agm_TGPGAME, _timesPlayerDetected), METADATA_PARAMS(Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__timesPlayerDetected_MetaData, ARRAY_COUNT(Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__timesPlayerDetected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__bodyGuardKillCount_MetaData[] = {
		{ "Category", "gm_TGPGAME" },
		{ "ModuleRelativePath", "Public/gm_TGPGAME.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__bodyGuardKillCount = { UE4CodeGen_Private::EPropertyClass::Int, "_bodyGuardKillCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(Agm_TGPGAME, _bodyGuardKillCount), METADATA_PARAMS(Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__bodyGuardKillCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__bodyGuardKillCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__civilianKillCount_MetaData[] = {
		{ "Category", "gm_TGPGAME" },
		{ "ModuleRelativePath", "Public/gm_TGPGAME.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__civilianKillCount = { UE4CodeGen_Private::EPropertyClass::Int, "_civilianKillCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(Agm_TGPGAME, _civilianKillCount), METADATA_PARAMS(Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__civilianKillCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__civilianKillCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__playerNeverDetected_MetaData[] = {
		{ "Category", "gm_TGPGAME" },
		{ "ModuleRelativePath", "Public/gm_TGPGAME.h" },
	};
#endif
	void Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__playerNeverDetected_SetBit(void* Obj)
	{
		((Agm_TGPGAME*)Obj)->_playerNeverDetected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__playerNeverDetected = { UE4CodeGen_Private::EPropertyClass::Bool, "_playerNeverDetected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Agm_TGPGAME), &Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__playerNeverDetected_SetBit, METADATA_PARAMS(Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__playerNeverDetected_MetaData, ARRAY_COUNT(Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__playerNeverDetected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__playerDied_MetaData[] = {
		{ "Category", "gm_TGPGAME" },
		{ "ModuleRelativePath", "Public/gm_TGPGAME.h" },
	};
#endif
	void Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__playerDied_SetBit(void* Obj)
	{
		((Agm_TGPGAME*)Obj)->_playerDied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__playerDied = { UE4CodeGen_Private::EPropertyClass::Bool, "_playerDied", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Agm_TGPGAME), &Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__playerDied_SetBit, METADATA_PARAMS(Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__playerDied_MetaData, ARRAY_COUNT(Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__playerDied_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__vipKilled_MetaData[] = {
		{ "Category", "gm_TGPGAME" },
		{ "ModuleRelativePath", "Public/gm_TGPGAME.h" },
	};
#endif
	void Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__vipKilled_SetBit(void* Obj)
	{
		((Agm_TGPGAME*)Obj)->_vipKilled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__vipKilled = { UE4CodeGen_Private::EPropertyClass::Bool, "_vipKilled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Agm_TGPGAME), &Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__vipKilled_SetBit, METADATA_PARAMS(Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__vipKilled_MetaData, ARRAY_COUNT(Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__vipKilled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "gm_TGPGAME" },
		{ "ModuleRelativePath", "Public/gm_TGPGAME.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(Agm_TGPGAME, Target), Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp_Target_MetaData, ARRAY_COUNT(Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp_BodyGuard_MetaData[] = {
		{ "Category", "gm_TGPGAME" },
		{ "ModuleRelativePath", "Public/gm_TGPGAME.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp_BodyGuard = { UE4CodeGen_Private::EPropertyClass::Object, "BodyGuard", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(Agm_TGPGAME, BodyGuard), Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp_BodyGuard_MetaData, ARRAY_COUNT(Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp_BodyGuard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp_Civilian_MetaData[] = {
		{ "Category", "gm_TGPGAME" },
		{ "ModuleRelativePath", "Public/gm_TGPGAME.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp_Civilian = { UE4CodeGen_Private::EPropertyClass::Object, "Civilian", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(Agm_TGPGAME, Civilian), Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp_Civilian_MetaData, ARRAY_COUNT(Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp_Civilian_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Agm_TGPGAME_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__timesPlayerDetected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__bodyGuardKillCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__civilianKillCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__playerNeverDetected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__playerDied,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp__vipKilled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp_BodyGuard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agm_TGPGAME_Statics::NewProp_Civilian,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Agm_TGPGAME_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Agm_TGPGAME>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Agm_TGPGAME_Statics::ClassParams = {
		&Agm_TGPGAME::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_Agm_TGPGAME_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_Agm_TGPGAME_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_Agm_TGPGAME_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Agm_TGPGAME_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Agm_TGPGAME()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Agm_TGPGAME_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Agm_TGPGAME, 1844239973);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Agm_TGPGAME(Z_Construct_UClass_Agm_TGPGAME, &Agm_TGPGAME::StaticClass, TEXT("/Script/TGP_Project"), TEXT("Agm_TGPGAME"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Agm_TGPGAME);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
