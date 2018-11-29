// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGP_Project/Public/AreaTriggers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAreaTriggers() {}
// Cross Module References
	TGP_PROJECT_API UClass* Z_Construct_UClass_AAreaTriggers_NoRegister();
	TGP_PROJECT_API UClass* Z_Construct_UClass_AAreaTriggers();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TGP_Project();
// End Cross Module References
	void AAreaTriggers::StaticRegisterNativesAAreaTriggers()
	{
	}
	UClass* Z_Construct_UClass_AAreaTriggers_NoRegister()
	{
		return AAreaTriggers::StaticClass();
	}
	struct Z_Construct_UClass_AAreaTriggers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAreaTriggers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TGP_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaTriggers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AreaTriggers.h" },
		{ "ModuleRelativePath", "Public/AreaTriggers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAreaTriggers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAreaTriggers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAreaTriggers_Statics::ClassParams = {
		&AAreaTriggers::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAreaTriggers_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAreaTriggers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAreaTriggers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAreaTriggers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAreaTriggers, 1630129732);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAreaTriggers(Z_Construct_UClass_AAreaTriggers, &AAreaTriggers::StaticClass, TEXT("/Script/TGP_Project"), TEXT("AAreaTriggers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAreaTriggers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
