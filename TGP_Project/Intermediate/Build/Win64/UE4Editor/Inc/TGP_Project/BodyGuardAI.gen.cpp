// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGP_Project/Private/BodyGuardAI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyGuardAI() {}
// Cross Module References
	TGP_PROJECT_API UClass* Z_Construct_UClass_ABodyGuardAI_NoRegister();
	TGP_PROJECT_API UClass* Z_Construct_UClass_ABodyGuardAI();
	TGP_PROJECT_API UClass* Z_Construct_UClass_ABaseAI();
	UPackage* Z_Construct_UPackage__Script_TGP_Project();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ABodyGuardAI::StaticRegisterNativesABodyGuardAI()
	{
	}
	UClass* Z_Construct_UClass_ABodyGuardAI_NoRegister()
	{
		return ABodyGuardAI::StaticClass();
	}
	struct Z_Construct_UClass_ABodyGuardAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__post_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__post;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__waypoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__waypoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__waypoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__patrol_MetaData[];
#endif
		static void NewProp__patrol_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__patrol;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABodyGuardAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseAI,
		(UObject* (*)())Z_Construct_UPackage__Script_TGP_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABodyGuardAI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BodyGuardAI.h" },
		{ "ModuleRelativePath", "Private/BodyGuardAI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABodyGuardAI_Statics::NewProp__post_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Private/BodyGuardAI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABodyGuardAI_Statics::NewProp__post = { UE4CodeGen_Private::EPropertyClass::Object, "_post", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000801, 1, nullptr, STRUCT_OFFSET(ABodyGuardAI, _post), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABodyGuardAI_Statics::NewProp__post_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABodyGuardAI_Statics::NewProp__post_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABodyGuardAI_Statics::NewProp__waypoints_MetaData[] = {
		{ "Category", "AI" },
		{ "EditCondition", "_patrol" },
		{ "ModuleRelativePath", "Private/BodyGuardAI.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABodyGuardAI_Statics::NewProp__waypoints = { UE4CodeGen_Private::EPropertyClass::Array, "_waypoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000801, 1, nullptr, STRUCT_OFFSET(ABodyGuardAI, _waypoints), METADATA_PARAMS(Z_Construct_UClass_ABodyGuardAI_Statics::NewProp__waypoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABodyGuardAI_Statics::NewProp__waypoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABodyGuardAI_Statics::NewProp__waypoints_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "_waypoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABodyGuardAI_Statics::NewProp__patrol_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Private/BodyGuardAI.h" },
	};
#endif
	void Z_Construct_UClass_ABodyGuardAI_Statics::NewProp__patrol_SetBit(void* Obj)
	{
		((ABodyGuardAI*)Obj)->_patrol = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABodyGuardAI_Statics::NewProp__patrol = { UE4CodeGen_Private::EPropertyClass::Bool, "_patrol", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000801, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABodyGuardAI), &Z_Construct_UClass_ABodyGuardAI_Statics::NewProp__patrol_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABodyGuardAI_Statics::NewProp__patrol_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABodyGuardAI_Statics::NewProp__patrol_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABodyGuardAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABodyGuardAI_Statics::NewProp__post,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABodyGuardAI_Statics::NewProp__waypoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABodyGuardAI_Statics::NewProp__waypoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABodyGuardAI_Statics::NewProp__patrol,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABodyGuardAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABodyGuardAI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABodyGuardAI_Statics::ClassParams = {
		&ABodyGuardAI::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ABodyGuardAI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABodyGuardAI_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABodyGuardAI_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABodyGuardAI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABodyGuardAI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABodyGuardAI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABodyGuardAI, 578841526);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABodyGuardAI(Z_Construct_UClass_ABodyGuardAI, &ABodyGuardAI::StaticClass, TEXT("/Script/TGP_Project"), TEXT("ABodyGuardAI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABodyGuardAI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
