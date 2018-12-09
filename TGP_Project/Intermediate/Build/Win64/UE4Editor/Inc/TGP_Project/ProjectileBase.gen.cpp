// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGP_Project/Public/ProjectileBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileBase() {}
// Cross Module References
	TGP_PROJECT_API UClass* Z_Construct_UClass_AProjectileBase_NoRegister();
	TGP_PROJECT_API UClass* Z_Construct_UClass_AProjectileBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TGP_Project();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
// End Cross Module References
	void AProjectileBase::StaticRegisterNativesAProjectileBase()
	{
	}
	UClass* Z_Construct_UClass_AProjectileBase_NoRegister()
	{
		return AProjectileBase::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__lifeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__forwardVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__forwardVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TGP_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectileBase.h" },
		{ "ModuleRelativePath", "Public/ProjectileBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileBase_Statics::NewProp__lifeTime_MetaData[] = {
		{ "Category", "BulletProperties" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ProjectileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileBase_Statics::NewProp__lifeTime = { UE4CodeGen_Private::EPropertyClass::Float, "_lifeTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0011000000000005, 1, nullptr, STRUCT_OFFSET(AProjectileBase, _lifeTime), METADATA_PARAMS(Z_Construct_UClass_AProjectileBase_Statics::NewProp__lifeTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectileBase_Statics::NewProp__lifeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileBase_Statics::NewProp__velocity_MetaData[] = {
		{ "Category", "BulletProperties" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ProjectileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileBase_Statics::NewProp__velocity = { UE4CodeGen_Private::EPropertyClass::Float, "_velocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0011000000000005, 1, nullptr, STRUCT_OFFSET(AProjectileBase, _velocity), METADATA_PARAMS(Z_Construct_UClass_AProjectileBase_Statics::NewProp__velocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectileBase_Statics::NewProp__velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileBase_Statics::NewProp__forwardVector_MetaData[] = {
		{ "Category", "BulletProperties" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ProjectileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProjectileBase_Statics::NewProp__forwardVector = { UE4CodeGen_Private::EPropertyClass::Struct, "_forwardVector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0011000000000005, 1, nullptr, STRUCT_OFFSET(AProjectileBase, _forwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AProjectileBase_Statics::NewProp__forwardVector_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectileBase_Statics::NewProp__forwardVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileBase_Statics::NewProp_Sprite_MetaData[] = {
		{ "Category", "ProjectileBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileBase_Statics::NewProp_Sprite = { UE4CodeGen_Private::EPropertyClass::Object, "Sprite", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AProjectileBase, Sprite), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectileBase_Statics::NewProp_Sprite_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectileBase_Statics::NewProp_Sprite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileBase_Statics::NewProp__lifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileBase_Statics::NewProp__velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileBase_Statics::NewProp__forwardVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileBase_Statics::NewProp_Sprite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectileBase_Statics::ClassParams = {
		&AProjectileBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AProjectileBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AProjectileBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AProjectileBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProjectileBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectileBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectileBase, 966160574);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectileBase(Z_Construct_UClass_AProjectileBase, &AProjectileBase::StaticClass, TEXT("/Script/TGP_Project"), TEXT("AProjectileBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
