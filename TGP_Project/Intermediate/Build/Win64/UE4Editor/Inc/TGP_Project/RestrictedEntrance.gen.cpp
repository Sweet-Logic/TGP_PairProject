// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGP_Project/Public/RestrictedEntrance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRestrictedEntrance() {}
// Cross Module References
	TGP_PROJECT_API UClass* Z_Construct_UClass_ARestrictedEntrance_NoRegister();
	TGP_PROJECT_API UClass* Z_Construct_UClass_ARestrictedEntrance();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TGP_Project();
	TGP_PROJECT_API UFunction* Z_Construct_UFunction_ARestrictedEntrance_Enter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TGP_PROJECT_API UFunction* Z_Construct_UFunction_ARestrictedEntrance_Exit();
	TGP_PROJECT_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ARestrictedEntrance::StaticRegisterNativesARestrictedEntrance()
	{
		UClass* Class = ARestrictedEntrance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Enter", &ARestrictedEntrance::execEnter },
			{ "Exit", &ARestrictedEntrance::execExit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics
	{
		struct RestrictedEntrance_eventEnter_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(RestrictedEntrance_eventEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((RestrictedEntrance_eventEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RestrictedEntrance_eventEnter_Parms), &Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RestrictedEntrance_eventEnter_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(RestrictedEntrance_eventEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RestrictedEntrance_eventEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(RestrictedEntrance_eventEnter_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RestrictedEntrance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARestrictedEntrance, "Enter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(RestrictedEntrance_eventEnter_Parms), Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARestrictedEntrance_Enter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARestrictedEntrance_Enter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARestrictedEntrance_Exit_Statics
	{
		struct RestrictedEntrance_eventExit_Parms
		{
			AActor* Actor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARestrictedEntrance_Exit_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RestrictedEntrance_eventExit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARestrictedEntrance_Exit_Statics::NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RestrictedEntrance_eventExit_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARestrictedEntrance_Exit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARestrictedEntrance_Exit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARestrictedEntrance_Exit_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARestrictedEntrance_Exit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RestrictedEntrance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARestrictedEntrance_Exit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARestrictedEntrance, "Exit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(RestrictedEntrance_eventExit_Parms), Z_Construct_UFunction_ARestrictedEntrance_Exit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARestrictedEntrance_Exit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARestrictedEntrance_Exit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARestrictedEntrance_Exit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARestrictedEntrance_Exit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARestrictedEntrance_Exit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARestrictedEntrance_NoRegister()
	{
		return ARestrictedEntrance::StaticClass();
	}
	struct Z_Construct_UClass_ARestrictedEntrance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Guards;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Guards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARestrictedEntrance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TGP_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARestrictedEntrance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARestrictedEntrance_Enter, "Enter" }, // 1665020694
		{ &Z_Construct_UFunction_ARestrictedEntrance_Exit, "Exit" }, // 2496083182
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARestrictedEntrance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RestrictedEntrance.h" },
		{ "ModuleRelativePath", "Public/RestrictedEntrance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARestrictedEntrance_Statics::NewProp_Guards_MetaData[] = {
		{ "Category", "GuardsOnDoor" },
		{ "ModuleRelativePath", "Public/RestrictedEntrance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARestrictedEntrance_Statics::NewProp_Guards = { UE4CodeGen_Private::EPropertyClass::Array, "Guards", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARestrictedEntrance, Guards), METADATA_PARAMS(Z_Construct_UClass_ARestrictedEntrance_Statics::NewProp_Guards_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARestrictedEntrance_Statics::NewProp_Guards_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARestrictedEntrance_Statics::NewProp_Guards_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Guards", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARestrictedEntrance_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "RestrictedEntrance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RestrictedEntrance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARestrictedEntrance_Statics::NewProp_BoxComponent = { UE4CodeGen_Private::EPropertyClass::Object, "BoxComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ARestrictedEntrance, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARestrictedEntrance_Statics::NewProp_BoxComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARestrictedEntrance_Statics::NewProp_BoxComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARestrictedEntrance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARestrictedEntrance_Statics::NewProp_Guards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARestrictedEntrance_Statics::NewProp_Guards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARestrictedEntrance_Statics::NewProp_BoxComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARestrictedEntrance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARestrictedEntrance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARestrictedEntrance_Statics::ClassParams = {
		&ARestrictedEntrance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ARestrictedEntrance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ARestrictedEntrance_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ARestrictedEntrance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARestrictedEntrance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARestrictedEntrance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARestrictedEntrance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARestrictedEntrance, 3843677313);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARestrictedEntrance(Z_Construct_UClass_ARestrictedEntrance, &ARestrictedEntrance::StaticClass, TEXT("/Script/TGP_Project"), TEXT("ARestrictedEntrance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARestrictedEntrance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
