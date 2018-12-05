// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGP_Project/Public/Areas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAreas() {}
// Cross Module References
	TGP_PROJECT_API UEnum* Z_Construct_UEnum_TGP_Project_EAREAS();
	UPackage* Z_Construct_UPackage__Script_TGP_Project();
	TGP_PROJECT_API UClass* Z_Construct_UClass_AAreas_NoRegister();
	TGP_PROJECT_API UClass* Z_Construct_UClass_AAreas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	static UEnum* EAREAS_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TGP_Project_EAREAS, Z_Construct_UPackage__Script_TGP_Project(), TEXT("EAREAS"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAREAS(EAREAS_StaticEnum, TEXT("/Script/TGP_Project"), TEXT("EAREAS"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TGP_Project_EAREAS_CRC() { return 1934496207U; }
	UEnum* Z_Construct_UEnum_TGP_Project_EAREAS()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TGP_Project();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAREAS"), 0, Get_Z_Construct_UEnum_TGP_Project_EAREAS_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "A_AUTHORISED", (int64)A_AUTHORISED },
				{ "A_RESTRICTED", (int64)A_RESTRICTED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "A_AUTHORISED.DisplayName", "Authorised" },
				{ "A_RESTRICTED.DisplayName", "Restricted" },
				{ "ModuleRelativePath", "Public/Areas.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TGP_Project,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAREAS",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EAREAS",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AAreas::StaticRegisterNativesAAreas()
	{
	}
	UClass* Z_Construct_UClass_AAreas_NoRegister()
	{
		return AAreas::StaticClass();
	}
	struct Z_Construct_UClass_AAreas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAreas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TGP_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Areas.h" },
		{ "ModuleRelativePath", "Public/Areas.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreas_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Areas" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Areas.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAreas_Statics::NewProp_BoxComponent = { UE4CodeGen_Private::EPropertyClass::Object, "BoxComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AAreas, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAreas_Statics::NewProp_BoxComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAreas_Statics::NewProp_BoxComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAreas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreas_Statics::NewProp_BoxComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAreas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAreas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAreas_Statics::ClassParams = {
		&AAreas::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AAreas_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AAreas_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAreas_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAreas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAreas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAreas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAreas, 688238932);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAreas(Z_Construct_UClass_AAreas, &AAreas::StaticClass, TEXT("/Script/TGP_Project"), TEXT("AAreas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAreas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
