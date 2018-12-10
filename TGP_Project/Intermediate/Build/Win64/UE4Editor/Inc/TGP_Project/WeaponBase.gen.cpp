// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGP_Project/Public/WeaponBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBase() {}
// Cross Module References
	TGP_PROJECT_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	TGP_PROJECT_API UClass* Z_Construct_UClass_AWeaponBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TGP_Project();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TGP_PROJECT_API UClass* Z_Construct_UClass_AProjectileBase_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
// End Cross Module References
	void AWeaponBase::StaticRegisterNativesAWeaponBase()
	{
	}
	UClass* Z_Construct_UClass_AWeaponBase_NoRegister()
	{
		return AWeaponBase::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gunShot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gunShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__projectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__projectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__sprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TGP_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponBase.h" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp__gunShot_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp__gunShot = { UE4CodeGen_Private::EPropertyClass::Object, "_gunShot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AWeaponBase, _gunShot), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp__gunShot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp__gunShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp__projectile_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp__projectile = { UE4CodeGen_Private::EPropertyClass::Class, "_projectile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(AWeaponBase, _projectile), Z_Construct_UClass_AProjectileBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp__projectile_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp__projectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp__sprite_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp__sprite = { UE4CodeGen_Private::EPropertyClass::Object, "_sprite", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AWeaponBase, _sprite), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::NewProp__sprite_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp__sprite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp__gunShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp__projectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp__sprite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponBase_Statics::ClassParams = {
		&AWeaponBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AWeaponBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponBase, 4189743941);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponBase(Z_Construct_UClass_AWeaponBase, &AWeaponBase::StaticClass, TEXT("/Script/TGP_Project"), TEXT("AWeaponBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
