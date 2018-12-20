// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TGP_Project/Public/BaseCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacter() {}
// Cross Module References
	TGP_PROJECT_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	TGP_PROJECT_API UClass* Z_Construct_UClass_ABaseCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_TGP_Project();
	TGP_PROJECT_API UFunction* Z_Construct_UFunction_ABaseCharacter_Collision();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TGP_PROJECT_API UFunction* Z_Construct_UFunction_ABaseCharacter_FlipFlipbook();
	TGP_PROJECT_API UFunction* Z_Construct_UFunction_ABaseCharacter_GetIsWeaponDrawn();
	TGP_PROJECT_API UFunction* Z_Construct_UFunction_ABaseCharacter_IsCharacterAlive();
	TGP_PROJECT_API UFunction* Z_Construct_UFunction_ABaseCharacter_SetIsWeaponDrawn();
	TGP_PROJECT_API UFunction* Z_Construct_UFunction_ABaseCharacter_SwitchFlipbook();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TGP_PROJECT_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ABaseCharacter::StaticRegisterNativesABaseCharacter()
	{
		UClass* Class = ABaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Collision", &ABaseCharacter::execCollision },
			{ "FlipFlipbook", &ABaseCharacter::execFlipFlipbook },
			{ "GetIsWeaponDrawn", &ABaseCharacter::execGetIsWeaponDrawn },
			{ "IsCharacterAlive", &ABaseCharacter::execIsCharacterAlive },
			{ "SetIsWeaponDrawn", &ABaseCharacter::execSetIsWeaponDrawn },
			{ "SwitchFlipbook", &ABaseCharacter::execSwitchFlipbook },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseCharacter_Collision_Statics
	{
		struct BaseCharacter_eventCollision_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(BaseCharacter_eventCollision_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BaseCharacter_eventCollision_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BaseCharacter_eventCollision_Parms), &Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseCharacter_eventCollision_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BaseCharacter_eventCollision_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseCharacter_eventCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BaseCharacter_eventCollision_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_Collision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_Collision_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_Collision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_Collision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "Collision", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(BaseCharacter_eventCollision_Parms), Z_Construct_UFunction_ABaseCharacter_Collision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_Collision_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_Collision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_Collision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_Collision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_Collision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_FlipFlipbook_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_FlipFlipbook_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlippingFlipbooks" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_FlipFlipbook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "FlipFlipbook", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_FlipFlipbook_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_FlipFlipbook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_FlipFlipbook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_FlipFlipbook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_GetIsWeaponDrawn_Statics
	{
		struct BaseCharacter_eventGetIsWeaponDrawn_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseCharacter_GetIsWeaponDrawn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseCharacter_eventGetIsWeaponDrawn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseCharacter_GetIsWeaponDrawn_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BaseCharacter_eventGetIsWeaponDrawn_Parms), &Z_Construct_UFunction_ABaseCharacter_GetIsWeaponDrawn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_GetIsWeaponDrawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_GetIsWeaponDrawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_GetIsWeaponDrawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "WeaponVisibility" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_GetIsWeaponDrawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "GetIsWeaponDrawn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BaseCharacter_eventGetIsWeaponDrawn_Parms), Z_Construct_UFunction_ABaseCharacter_GetIsWeaponDrawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetIsWeaponDrawn_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_GetIsWeaponDrawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetIsWeaponDrawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_GetIsWeaponDrawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_GetIsWeaponDrawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_IsCharacterAlive_Statics
	{
		struct BaseCharacter_eventIsCharacterAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseCharacter_IsCharacterAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseCharacter_eventIsCharacterAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseCharacter_IsCharacterAlive_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BaseCharacter_eventIsCharacterAlive_Parms), &Z_Construct_UFunction_ABaseCharacter_IsCharacterAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_IsCharacterAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_IsCharacterAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_IsCharacterAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterState" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_IsCharacterAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "IsCharacterAlive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(BaseCharacter_eventIsCharacterAlive_Parms), Z_Construct_UFunction_ABaseCharacter_IsCharacterAlive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_IsCharacterAlive_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_IsCharacterAlive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_IsCharacterAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_IsCharacterAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_IsCharacterAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_SetIsWeaponDrawn_Statics
	{
		struct BaseCharacter_eventSetIsWeaponDrawn_Parms
		{
			bool newHasWeaponDrawn;
		};
		static void NewProp_newHasWeaponDrawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_newHasWeaponDrawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseCharacter_SetIsWeaponDrawn_Statics::NewProp_newHasWeaponDrawn_SetBit(void* Obj)
	{
		((BaseCharacter_eventSetIsWeaponDrawn_Parms*)Obj)->newHasWeaponDrawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseCharacter_SetIsWeaponDrawn_Statics::NewProp_newHasWeaponDrawn = { UE4CodeGen_Private::EPropertyClass::Bool, "newHasWeaponDrawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BaseCharacter_eventSetIsWeaponDrawn_Parms), &Z_Construct_UFunction_ABaseCharacter_SetIsWeaponDrawn_Statics::NewProp_newHasWeaponDrawn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_SetIsWeaponDrawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_SetIsWeaponDrawn_Statics::NewProp_newHasWeaponDrawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_SetIsWeaponDrawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "WeaponVisibility" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_SetIsWeaponDrawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "SetIsWeaponDrawn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BaseCharacter_eventSetIsWeaponDrawn_Parms), Z_Construct_UFunction_ABaseCharacter_SetIsWeaponDrawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_SetIsWeaponDrawn_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_SetIsWeaponDrawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_SetIsWeaponDrawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_SetIsWeaponDrawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_SetIsWeaponDrawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_SwitchFlipbook_Statics
	{
		struct BaseCharacter_eventSwitchFlipbook_Parms
		{
			UPaperFlipbook* newFlipbook;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newFlipbook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseCharacter_SwitchFlipbook_Statics::NewProp_newFlipbook = { UE4CodeGen_Private::EPropertyClass::Object, "newFlipbook", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseCharacter_eventSwitchFlipbook_Parms, newFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_SwitchFlipbook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_SwitchFlipbook_Statics::NewProp_newFlipbook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_SwitchFlipbook_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlippingFlipbooks" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_SwitchFlipbook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "SwitchFlipbook", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BaseCharacter_eventSwitchFlipbook_Parms), Z_Construct_UFunction_ABaseCharacter_SwitchFlipbook_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_SwitchFlipbook_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_SwitchFlipbook_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_SwitchFlipbook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_SwitchFlipbook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCharacter_SwitchFlipbook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseCharacter_NoRegister()
	{
		return ABaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__x_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__walkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__walkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loopFlipbook_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp__loopFlipbook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__playRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__walikingFlipBook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__walikingFlipBook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__idleFlipbook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__idleFlipbook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasWeaponDrawn_MetaData[];
#endif
		static void NewProp__hasWeaponDrawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasWeaponDrawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__defaultMelee_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__defaultMelee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__defaultGun_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__defaultGun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__weaponInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__weaponInventory;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__weaponInventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__boxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__boxComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TGP_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseCharacter_Collision, "Collision" }, // 1599360745
		{ &Z_Construct_UFunction_ABaseCharacter_FlipFlipbook, "FlipFlipbook" }, // 3896178746
		{ &Z_Construct_UFunction_ABaseCharacter_GetIsWeaponDrawn, "GetIsWeaponDrawn" }, // 3554905307
		{ &Z_Construct_UFunction_ABaseCharacter_IsCharacterAlive, "IsCharacterAlive" }, // 3960536171
		{ &Z_Construct_UFunction_ABaseCharacter_SetIsWeaponDrawn, "SetIsWeaponDrawn" }, // 2882821219
		{ &Z_Construct_UFunction_ABaseCharacter_SwitchFlipbook, "SwitchFlipbook" }, // 3355348744
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseCharacter.h" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp__z_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp__z = { UE4CodeGen_Private::EPropertyClass::Float, "_z", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, _z), METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__z_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp__y_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp__y = { UE4CodeGen_Private::EPropertyClass::Float, "_y", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, _y), METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__y_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp__x_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
		{ "ToolTip", "Debug values" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp__x = { UE4CodeGen_Private::EPropertyClass::Float, "_x", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, _x), METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__x_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp__walkSpeed_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ClampMax", "200.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
		{ "ToolTip", "Movement Settings" },
		{ "UIMax", "200.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp__walkSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "_walkSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, _walkSpeed), METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__walkSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__walkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp__loopFlipbook_MetaData[] = {
		{ "Category", "Sprite Settings" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp__loopFlipbook = { UE4CodeGen_Private::EPropertyClass::UInt32, "_loopFlipbook", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, _loopFlipbook), METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__loopFlipbook_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__loopFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp__playRate_MetaData[] = {
		{ "Category", "Sprite Settings" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp__playRate = { UE4CodeGen_Private::EPropertyClass::Float, "_playRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, _playRate), METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__playRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__playRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp__walikingFlipBook_MetaData[] = {
		{ "Category", "Sprite Settings" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp__walikingFlipBook = { UE4CodeGen_Private::EPropertyClass::Object, "_walikingFlipBook", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, _walikingFlipBook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__walikingFlipBook_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__walikingFlipBook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp__idleFlipbook_MetaData[] = {
		{ "Category", "Sprite Settings" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
		{ "ToolTip", "Sprite Settings" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp__idleFlipbook = { UE4CodeGen_Private::EPropertyClass::Object, "_idleFlipbook", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, _idleFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__idleFlipbook_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__idleFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp__hasWeaponDrawn_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
		{ "ToolTip", "Weapon" },
	};
#endif
	void Z_Construct_UClass_ABaseCharacter_Statics::NewProp__hasWeaponDrawn_SetBit(void* Obj)
	{
		((ABaseCharacter*)Obj)->_hasWeaponDrawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp__hasWeaponDrawn = { UE4CodeGen_Private::EPropertyClass::Bool, "_hasWeaponDrawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABaseCharacter), &Z_Construct_UClass_ABaseCharacter_Statics::NewProp__hasWeaponDrawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__hasWeaponDrawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__hasWeaponDrawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp__defaultMelee_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp__defaultMelee = { UE4CodeGen_Private::EPropertyClass::Class, "_defaultMelee", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, _defaultMelee), Z_Construct_UClass_AWeaponBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__defaultMelee_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__defaultMelee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp__defaultGun_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp__defaultGun = { UE4CodeGen_Private::EPropertyClass::Class, "_defaultGun", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, _defaultGun), Z_Construct_UClass_AWeaponBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__defaultGun_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__defaultGun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp__weaponInventory_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp__weaponInventory = { UE4CodeGen_Private::EPropertyClass::Array, "_weaponInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, _weaponInventory), METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__weaponInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__weaponInventory_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp__weaponInventory_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "_weaponInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_AWeaponBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp__currentWeapon_MetaData[] = {
		{ "Category", "Weapon Component" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp__currentWeapon = { UE4CodeGen_Private::EPropertyClass::Object, "_currentWeapon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, _currentWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__currentWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__currentWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp__direction_MetaData[] = {
		{ "Category", "BaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp__direction = { UE4CodeGen_Private::EPropertyClass::Object, "_direction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, _direction), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__direction_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp__boxComponent_MetaData[] = {
		{ "Category", "BaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseCharacter.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp__boxComponent = { UE4CodeGen_Private::EPropertyClass::Object, "_boxComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, _boxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__boxComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp__boxComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp__z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp__y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp__x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp__walkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp__loopFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp__playRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp__walikingFlipBook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp__idleFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp__hasWeaponDrawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp__defaultMelee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp__defaultGun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp__weaponInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp__weaponInventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp__currentWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp__direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp__boxComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseCharacter_Statics::ClassParams = {
		&ABaseCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ABaseCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseCharacter, 2466286154);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseCharacter(Z_Construct_UClass_ABaseCharacter, &ABaseCharacter::StaticClass, TEXT("/Script/TGP_Project"), TEXT("ABaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
