// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TGP_PROJECT_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define TGP_PROJECT_WeaponBase_generated_h

#define TGP_Project_Source_TGP_Project_Public_WeaponBase_h_15_RPC_WRAPPERS
#define TGP_Project_Source_TGP_Project_Public_WeaponBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TGP_Project_Source_TGP_Project_Public_WeaponBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Project"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define TGP_Project_Source_TGP_Project_Public_WeaponBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Project"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define TGP_Project_Source_TGP_Project_Public_WeaponBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public:


#define TGP_Project_Source_TGP_Project_Public_WeaponBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase)


#define TGP_Project_Source_TGP_Project_Public_WeaponBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___projectile() { return STRUCT_OFFSET(AWeaponBase, _projectile); }


#define TGP_Project_Source_TGP_Project_Public_WeaponBase_h_12_PROLOG
#define TGP_Project_Source_TGP_Project_Public_WeaponBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Project_Source_TGP_Project_Public_WeaponBase_h_15_PRIVATE_PROPERTY_OFFSET \
	TGP_Project_Source_TGP_Project_Public_WeaponBase_h_15_RPC_WRAPPERS \
	TGP_Project_Source_TGP_Project_Public_WeaponBase_h_15_INCLASS \
	TGP_Project_Source_TGP_Project_Public_WeaponBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGP_Project_Source_TGP_Project_Public_WeaponBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Project_Source_TGP_Project_Public_WeaponBase_h_15_PRIVATE_PROPERTY_OFFSET \
	TGP_Project_Source_TGP_Project_Public_WeaponBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TGP_Project_Source_TGP_Project_Public_WeaponBase_h_15_INCLASS_NO_PURE_DECLS \
	TGP_Project_Source_TGP_Project_Public_WeaponBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGP_Project_Source_TGP_Project_Public_WeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
