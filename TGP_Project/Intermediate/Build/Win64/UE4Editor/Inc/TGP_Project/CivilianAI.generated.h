// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TGP_PROJECT_CivilianAI_generated_h
#error "CivilianAI.generated.h already included, missing '#pragma once' in CivilianAI.h"
#endif
#define TGP_PROJECT_CivilianAI_generated_h

#define TGP_Project_Source_TGP_Project_Public_CivilianAI_h_10_RPC_WRAPPERS
#define TGP_Project_Source_TGP_Project_Public_CivilianAI_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define TGP_Project_Source_TGP_Project_Public_CivilianAI_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACivilianAI(); \
	friend struct Z_Construct_UClass_ACivilianAI_Statics; \
public: \
	DECLARE_CLASS(ACivilianAI, ABaseAI, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Project"), NO_API) \
	DECLARE_SERIALIZER(ACivilianAI)


#define TGP_Project_Source_TGP_Project_Public_CivilianAI_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACivilianAI(); \
	friend struct Z_Construct_UClass_ACivilianAI_Statics; \
public: \
	DECLARE_CLASS(ACivilianAI, ABaseAI, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Project"), NO_API) \
	DECLARE_SERIALIZER(ACivilianAI)


#define TGP_Project_Source_TGP_Project_Public_CivilianAI_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACivilianAI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACivilianAI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACivilianAI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACivilianAI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACivilianAI(ACivilianAI&&); \
	NO_API ACivilianAI(const ACivilianAI&); \
public:


#define TGP_Project_Source_TGP_Project_Public_CivilianAI_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACivilianAI(ACivilianAI&&); \
	NO_API ACivilianAI(const ACivilianAI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACivilianAI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACivilianAI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACivilianAI)


#define TGP_Project_Source_TGP_Project_Public_CivilianAI_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___randomTarget() { return STRUCT_OFFSET(ACivilianAI, _randomTarget); } \
	FORCEINLINE static uint32 __PPO___moveDelay() { return STRUCT_OFFSET(ACivilianAI, _moveDelay); } \
	FORCEINLINE static uint32 __PPO___maxMoveRadius() { return STRUCT_OFFSET(ACivilianAI, _maxMoveRadius); }


#define TGP_Project_Source_TGP_Project_Public_CivilianAI_h_7_PROLOG
#define TGP_Project_Source_TGP_Project_Public_CivilianAI_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Project_Source_TGP_Project_Public_CivilianAI_h_10_PRIVATE_PROPERTY_OFFSET \
	TGP_Project_Source_TGP_Project_Public_CivilianAI_h_10_RPC_WRAPPERS \
	TGP_Project_Source_TGP_Project_Public_CivilianAI_h_10_INCLASS \
	TGP_Project_Source_TGP_Project_Public_CivilianAI_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGP_Project_Source_TGP_Project_Public_CivilianAI_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Project_Source_TGP_Project_Public_CivilianAI_h_10_PRIVATE_PROPERTY_OFFSET \
	TGP_Project_Source_TGP_Project_Public_CivilianAI_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	TGP_Project_Source_TGP_Project_Public_CivilianAI_h_10_INCLASS_NO_PURE_DECLS \
	TGP_Project_Source_TGP_Project_Public_CivilianAI_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGP_Project_Source_TGP_Project_Public_CivilianAI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
