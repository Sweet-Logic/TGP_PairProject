// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperFlipbook;
#ifdef TGP_PROJECT_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define TGP_PROJECT_BaseCharacter_generated_h

#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFlipFlipbook) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlipFlipbook(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchFlipbook) \
	{ \
		P_GET_OBJECT(UPaperFlipbook,Z_Param_newFlipbook); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwitchFlipbook(Z_Param_newFlipbook); \
		P_NATIVE_END; \
	}


#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFlipFlipbook) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlipFlipbook(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchFlipbook) \
	{ \
		P_GET_OBJECT(UPaperFlipbook,Z_Param_newFlipbook); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwitchFlipbook(Z_Param_newFlipbook); \
		P_NATIVE_END; \
	}


#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Project"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Project"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_23_PRIVATE_PROPERTY_OFFSET
#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_20_PROLOG
#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_23_RPC_WRAPPERS \
	TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_23_INCLASS \
	TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_23_INCLASS_NO_PURE_DECLS \
	TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGP_Project_Source_TGP_Project_Public_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
