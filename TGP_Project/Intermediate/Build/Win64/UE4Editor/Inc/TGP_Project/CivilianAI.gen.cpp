// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGP_Project/Private/CivilianAI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCivilianAI() {}
// Cross Module References
	TGP_PROJECT_API UClass* Z_Construct_UClass_ACivilianAI_NoRegister();
	TGP_PROJECT_API UClass* Z_Construct_UClass_ACivilianAI();
	TGP_PROJECT_API UClass* Z_Construct_UClass_ABaseAI();
	UPackage* Z_Construct_UPackage__Script_TGP_Project();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ACivilianAI::StaticRegisterNativesACivilianAI()
	{
	}
	UClass* Z_Construct_UClass_ACivilianAI_NoRegister()
	{
		return ACivilianAI::StaticClass();
	}
	struct Z_Construct_UClass_ACivilianAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__civHidingSpots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__civHidingSpots;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__civHidingSpots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxMoveRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__maxMoveRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__moveDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__moveDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__randomTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__randomTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACivilianAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseAI,
		(UObject* (*)())Z_Construct_UPackage__Script_TGP_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACivilianAI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CivilianAI.h" },
		{ "ModuleRelativePath", "Private/CivilianAI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACivilianAI_Statics::NewProp__civHidingSpots_MetaData[] = {
		{ "Category", "AI" },
		{ "EditCondition", "_patrol" },
		{ "ModuleRelativePath", "Private/CivilianAI.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACivilianAI_Statics::NewProp__civHidingSpots = { UE4CodeGen_Private::EPropertyClass::Array, "_civHidingSpots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000801, 1, nullptr, STRUCT_OFFSET(ACivilianAI, _civHidingSpots), METADATA_PARAMS(Z_Construct_UClass_ACivilianAI_Statics::NewProp__civHidingSpots_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACivilianAI_Statics::NewProp__civHidingSpots_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACivilianAI_Statics::NewProp__civHidingSpots_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "_civHidingSpots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACivilianAI_Statics::NewProp__maxMoveRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Private/CivilianAI.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACivilianAI_Statics::NewProp__maxMoveRadius = { UE4CodeGen_Private::EPropertyClass::Int, "_maxMoveRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000801, 1, nullptr, STRUCT_OFFSET(ACivilianAI, _maxMoveRadius), METADATA_PARAMS(Z_Construct_UClass_ACivilianAI_Statics::NewProp__maxMoveRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACivilianAI_Statics::NewProp__maxMoveRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACivilianAI_Statics::NewProp__moveDelay_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Private/CivilianAI.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACivilianAI_Statics::NewProp__moveDelay = { UE4CodeGen_Private::EPropertyClass::Float, "_moveDelay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000801, 1, nullptr, STRUCT_OFFSET(ACivilianAI, _moveDelay), METADATA_PARAMS(Z_Construct_UClass_ACivilianAI_Statics::NewProp__moveDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACivilianAI_Statics::NewProp__moveDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACivilianAI_Statics::NewProp__randomTarget_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Private/CivilianAI.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACivilianAI_Statics::NewProp__randomTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "_randomTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020001, 1, nullptr, STRUCT_OFFSET(ACivilianAI, _randomTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACivilianAI_Statics::NewProp__randomTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACivilianAI_Statics::NewProp__randomTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACivilianAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivilianAI_Statics::NewProp__civHidingSpots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivilianAI_Statics::NewProp__civHidingSpots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivilianAI_Statics::NewProp__maxMoveRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivilianAI_Statics::NewProp__moveDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivilianAI_Statics::NewProp__randomTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACivilianAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACivilianAI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACivilianAI_Statics::ClassParams = {
		&ACivilianAI::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ACivilianAI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACivilianAI_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACivilianAI_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACivilianAI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACivilianAI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACivilianAI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACivilianAI, 4250049303);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACivilianAI(Z_Construct_UClass_ACivilianAI, &ACivilianAI::StaticClass, TEXT("/Script/TGP_Project"), TEXT("ACivilianAI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACivilianAI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
