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
	TGP_PROJECT_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
// End Cross Module References
	void Agm_TGPGAME::StaticRegisterNativesAgm_TGPGAME()
	{
	}
	UClass* Z_Construct_UClass_Agm_TGPGAME_NoRegister()
	{
		return Agm_TGPGAME::StaticClass();
	}
	struct Z_Construct_UClass_Agm_TGPGAME_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agm_TGPGAME_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "gm_TGPGAME.h" },
		{ "ModuleRelativePath", "Public/gm_TGPGAME.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
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
		nullptr, 0,
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
	IMPLEMENT_CLASS(Agm_TGPGAME, 3609504037);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Agm_TGPGAME(Z_Construct_UClass_Agm_TGPGAME, &Agm_TGPGAME::StaticClass, TEXT("/Script/TGP_Project"), TEXT("Agm_TGPGAME"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Agm_TGPGAME);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
