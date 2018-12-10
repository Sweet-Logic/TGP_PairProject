// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGP_Project/Public/BaseAI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAI() {}
// Cross Module References
	TGP_PROJECT_API UEnum* Z_Construct_UEnum_TGP_Project_AI_STATE();
	UPackage* Z_Construct_UPackage__Script_TGP_Project();
	TGP_PROJECT_API UClass* Z_Construct_UClass_ABaseAI_NoRegister();
	TGP_PROJECT_API UClass* Z_Construct_UClass_ABaseAI();
	TGP_PROJECT_API UClass* Z_Construct_UClass_ABaseCharacter();
	TGP_PROJECT_API UFunction* Z_Construct_UFunction_ABaseAI_OnNoiseHeard();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	TGP_PROJECT_API UFunction* Z_Construct_UFunction_ABaseAI_OnPawnSeen();
	TGP_PROJECT_API UFunction* Z_Construct_UFunction_ABaseAI_OnStateChanged();
	TGP_PROJECT_API UFunction* Z_Construct_UFunction_ABaseAI_ResetOrientation();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
// End Cross Module References
	static UEnum* AI_STATE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TGP_Project_AI_STATE, Z_Construct_UPackage__Script_TGP_Project(), TEXT("AI_STATE"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AI_STATE(AI_STATE_StaticEnum, TEXT("/Script/TGP_Project"), TEXT("AI_STATE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TGP_Project_AI_STATE_CRC() { return 4000273592U; }
	UEnum* Z_Construct_UEnum_TGP_Project_AI_STATE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TGP_Project();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AI_STATE"), 0, Get_Z_Construct_UEnum_TGP_Project_AI_STATE_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AI_STATE::IDLE", (int64)AI_STATE::IDLE },
				{ "AI_STATE::SUSPICIOUS", (int64)AI_STATE::SUSPICIOUS },
				{ "AI_STATE::ALERTED", (int64)AI_STATE::ALERTED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/BaseAI.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TGP_Project,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"AI_STATE",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"AI_STATE",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_ABaseAI_OnStateChanged = FName(TEXT("OnStateChanged"));
	void ABaseAI::OnStateChanged(AI_STATE newState)
	{
		BaseAI_eventOnStateChanged_Parms Parms;
		Parms.newState=newState;
		ProcessEvent(FindFunctionChecked(NAME_ABaseAI_OnStateChanged),&Parms);
	}
	void ABaseAI::StaticRegisterNativesABaseAI()
	{
		UClass* Class = ABaseAI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnNoiseHeard", &ABaseAI::execOnNoiseHeard },
			{ "OnPawnSeen", &ABaseAI::execOnPawnSeen },
			{ "ResetOrientation", &ABaseAI::execResetOrientation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseAI_OnNoiseHeard_Statics
	{
		struct BaseAI_eventOnNoiseHeard_Parms
		{
			APawn* NoiseInstigator;
			FVector location;
			float volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseAI_OnNoiseHeard_Statics::NewProp_volume = { UE4CodeGen_Private::EPropertyClass::Float, "volume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseAI_eventOnNoiseHeard_Parms, volume), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseAI_OnNoiseHeard_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseAI_OnNoiseHeard_Statics::NewProp_location = { UE4CodeGen_Private::EPropertyClass::Struct, "location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BaseAI_eventOnNoiseHeard_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ABaseAI_OnNoiseHeard_Statics::NewProp_location_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABaseAI_OnNoiseHeard_Statics::NewProp_location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseAI_OnNoiseHeard_Statics::NewProp_NoiseInstigator = { UE4CodeGen_Private::EPropertyClass::Object, "NoiseInstigator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseAI_eventOnNoiseHeard_Parms, NoiseInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseAI_OnNoiseHeard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseAI_OnNoiseHeard_Statics::NewProp_volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseAI_OnNoiseHeard_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseAI_OnNoiseHeard_Statics::NewProp_NoiseInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseAI_OnNoiseHeard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseAI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseAI_OnNoiseHeard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseAI, "OnNoiseHeard", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C80400, sizeof(BaseAI_eventOnNoiseHeard_Parms), Z_Construct_UFunction_ABaseAI_OnNoiseHeard_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseAI_OnNoiseHeard_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseAI_OnNoiseHeard_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseAI_OnNoiseHeard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseAI_OnNoiseHeard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseAI_OnNoiseHeard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseAI_OnPawnSeen_Statics
	{
		struct BaseAI_eventOnPawnSeen_Parms
		{
			APawn* SeenPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeenPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseAI_OnPawnSeen_Statics::NewProp_SeenPawn = { UE4CodeGen_Private::EPropertyClass::Object, "SeenPawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseAI_eventOnPawnSeen_Parms, SeenPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseAI_OnPawnSeen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseAI_OnPawnSeen_Statics::NewProp_SeenPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseAI_OnPawnSeen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseAI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseAI_OnPawnSeen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseAI, "OnPawnSeen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, sizeof(BaseAI_eventOnPawnSeen_Parms), Z_Construct_UFunction_ABaseAI_OnPawnSeen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseAI_OnPawnSeen_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseAI_OnPawnSeen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseAI_OnPawnSeen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseAI_OnPawnSeen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseAI_OnPawnSeen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseAI_OnStateChanged_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABaseAI_OnStateChanged_Statics::NewProp_newState = { UE4CodeGen_Private::EPropertyClass::Enum, "newState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseAI_eventOnStateChanged_Parms, newState), Z_Construct_UEnum_TGP_Project_AI_STATE, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABaseAI_OnStateChanged_Statics::NewProp_newState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseAI_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseAI_OnStateChanged_Statics::NewProp_newState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseAI_OnStateChanged_Statics::NewProp_newState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseAI_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/BaseAI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseAI_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseAI, "OnStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BaseAI_eventOnStateChanged_Parms), Z_Construct_UFunction_ABaseAI_OnStateChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseAI_OnStateChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseAI_OnStateChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseAI_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseAI_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseAI_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseAI_ResetOrientation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseAI_ResetOrientation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseAI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseAI_ResetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseAI, "ResetOrientation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseAI_ResetOrientation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseAI_ResetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseAI_ResetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseAI_ResetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseAI_NoRegister()
	{
		return ABaseAI::StaticClass();
	}
	struct Z_Construct_UClass_ABaseAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mapHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mapWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mapY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mapX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minDistanceToHostile_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minDistanceToHostile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minDistanceToTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minDistanceToTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sensor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__sensor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TGP_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseAI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseAI_OnNoiseHeard, "OnNoiseHeard" }, // 2365885626
		{ &Z_Construct_UFunction_ABaseAI_OnPawnSeen, "OnPawnSeen" }, // 4275662019
		{ &Z_Construct_UFunction_ABaseAI_OnStateChanged, "OnStateChanged" }, // 3834879443
		{ &Z_Construct_UFunction_ABaseAI_ResetOrientation, "ResetOrientation" }, // 924837884
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseAI.h" },
		{ "ModuleRelativePath", "Public/BaseAI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAI_Statics::NewProp_mapHeight_MetaData[] = {
		{ "Category", "MapBoundries" },
		{ "ModuleRelativePath", "Public/BaseAI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAI_Statics::NewProp_mapHeight = { UE4CodeGen_Private::EPropertyClass::Float, "mapHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseAI, mapHeight), METADATA_PARAMS(Z_Construct_UClass_ABaseAI_Statics::NewProp_mapHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseAI_Statics::NewProp_mapHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAI_Statics::NewProp_mapWidth_MetaData[] = {
		{ "Category", "MapBoundries" },
		{ "ModuleRelativePath", "Public/BaseAI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAI_Statics::NewProp_mapWidth = { UE4CodeGen_Private::EPropertyClass::Float, "mapWidth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseAI, mapWidth), METADATA_PARAMS(Z_Construct_UClass_ABaseAI_Statics::NewProp_mapWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseAI_Statics::NewProp_mapWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAI_Statics::NewProp_mapY_MetaData[] = {
		{ "Category", "MapBoundries" },
		{ "ModuleRelativePath", "Public/BaseAI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAI_Statics::NewProp_mapY = { UE4CodeGen_Private::EPropertyClass::Float, "mapY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseAI, mapY), METADATA_PARAMS(Z_Construct_UClass_ABaseAI_Statics::NewProp_mapY_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseAI_Statics::NewProp_mapY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAI_Statics::NewProp_mapX_MetaData[] = {
		{ "Category", "MapBoundries" },
		{ "ModuleRelativePath", "Public/BaseAI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAI_Statics::NewProp_mapX = { UE4CodeGen_Private::EPropertyClass::Float, "mapX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseAI, mapX), METADATA_PARAMS(Z_Construct_UClass_ABaseAI_Statics::NewProp_mapX_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseAI_Statics::NewProp_mapX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAI_Statics::NewProp__minDistanceToHostile_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/BaseAI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAI_Statics::NewProp__minDistanceToHostile = { UE4CodeGen_Private::EPropertyClass::Float, "_minDistanceToHostile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000801, 1, nullptr, STRUCT_OFFSET(ABaseAI, _minDistanceToHostile), METADATA_PARAMS(Z_Construct_UClass_ABaseAI_Statics::NewProp__minDistanceToHostile_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseAI_Statics::NewProp__minDistanceToHostile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAI_Statics::NewProp__minDistanceToTarget_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/BaseAI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAI_Statics::NewProp__minDistanceToTarget = { UE4CodeGen_Private::EPropertyClass::Float, "_minDistanceToTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000801, 1, nullptr, STRUCT_OFFSET(ABaseAI, _minDistanceToTarget), METADATA_PARAMS(Z_Construct_UClass_ABaseAI_Statics::NewProp__minDistanceToTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseAI_Statics::NewProp__minDistanceToTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAI_Statics::NewProp__sensor_MetaData[] = {
		{ "Category", "PawnSensing" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseAI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseAI_Statics::NewProp__sensor = { UE4CodeGen_Private::EPropertyClass::Object, "_sensor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ABaseAI, _sensor), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseAI_Statics::NewProp__sensor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseAI_Statics::NewProp__sensor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAI_Statics::NewProp_mapHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAI_Statics::NewProp_mapWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAI_Statics::NewProp_mapY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAI_Statics::NewProp_mapX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAI_Statics::NewProp__minDistanceToHostile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAI_Statics::NewProp__minDistanceToTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAI_Statics::NewProp__sensor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseAI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseAI_Statics::ClassParams = {
		&ABaseAI::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ABaseAI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABaseAI_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABaseAI_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABaseAI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseAI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseAI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseAI, 2363281183);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseAI(Z_Construct_UClass_ABaseAI, &ABaseAI::StaticClass, TEXT("/Script/TGP_Project"), TEXT("ABaseAI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseAI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
