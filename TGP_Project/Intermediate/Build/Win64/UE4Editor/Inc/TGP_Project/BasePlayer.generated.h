// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TGP_PROJECT_BasePlayer_generated_h
#error "BasePlayer.generated.h already included, missing '#pragma once' in BasePlayer.h"
#endif
#define TGP_PROJECT_BasePlayer_generated_h

#define TGP_Project_Source_TGP_Project_Public_BasePlayer_h_21_RPC_WRAPPERS
#define TGP_Project_Source_TGP_Project_Public_BasePlayer_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define TGP_Project_Source_TGP_Project_Public_BasePlayer_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayer(); \
	friend struct Z_Construct_UClass_ABasePlayer_Statics; \
public: \
	DECLARE_CLASS(ABasePlayer, ABaseCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Project"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayer)


#define TGP_Project_Source_TGP_Project_Public_BasePlayer_h_21_INCLASS \
private: \
	static void StaticRegisterNativesABasePlayer(); \
	friend struct Z_Construct_UClass_ABasePlayer_Statics; \
public: \
	DECLARE_CLASS(ABasePlayer, ABaseCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Project"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayer)


#define TGP_Project_Source_TGP_Project_Public_BasePlayer_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayer(ABasePlayer&&); \
	NO_API ABasePlayer(const ABasePlayer&); \
public:


#define TGP_Project_Source_TGP_Project_Public_BasePlayer_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayer(ABasePlayer&&); \
	NO_API ABasePlayer(const ABasePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePlayer)


#define TGP_Project_Source_TGP_Project_Public_BasePlayer_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___orthoWidth() { return STRUCT_OFFSET(ABasePlayer, _orthoWidth); } \
	FORCEINLINE static uint32 __PPO___orthoWidthMax() { return STRUCT_OFFSET(ABasePlayer, _orthoWidthMax); } \
	FORCEINLINE static uint32 __PPO___orthoWidthMin() { return STRUCT_OFFSET(ABasePlayer, _orthoWidthMin); } \
	FORCEINLINE static uint32 __PPO___zoomSpeed() { return STRUCT_OFFSET(ABasePlayer, _zoomSpeed); } \
	FORCEINLINE static uint32 __PPO___panSpeed() { return STRUCT_OFFSET(ABasePlayer, _panSpeed); } \
	FORCEINLINE static uint32 __PPO___panSpeedMin() { return STRUCT_OFFSET(ABasePlayer, _panSpeedMin); } \
	FORCEINLINE static uint32 __PPO___panSpeedMax() { return STRUCT_OFFSET(ABasePlayer, _panSpeedMax); } \
	FORCEINLINE static uint32 __PPO___panResetSpeed() { return STRUCT_OFFSET(ABasePlayer, _panResetSpeed); } \
	FORCEINLINE static uint32 __PPO___panMaxDistance() { return STRUCT_OFFSET(ABasePlayer, _panMaxDistance); } \
	FORCEINLINE static uint32 __PPO___mousePosinNormal() { return STRUCT_OFFSET(ABasePlayer, _mousePosinNormal); } \
	FORCEINLINE static uint32 __PPO___sneakSpeed() { return STRUCT_OFFSET(ABasePlayer, _sneakSpeed); } \
	FORCEINLINE static uint32 __PPO___isSneaking() { return STRUCT_OFFSET(ABasePlayer, _isSneaking); } \
	FORCEINLINE static uint32 __PPO___sprintSpeed() { return STRUCT_OFFSET(ABasePlayer, _sprintSpeed); } \
	FORCEINLINE static uint32 __PPO___sprintTimer() { return STRUCT_OFFSET(ABasePlayer, _sprintTimer); }


#define TGP_Project_Source_TGP_Project_Public_BasePlayer_h_18_PROLOG
#define TGP_Project_Source_TGP_Project_Public_BasePlayer_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Project_Source_TGP_Project_Public_BasePlayer_h_21_PRIVATE_PROPERTY_OFFSET \
	TGP_Project_Source_TGP_Project_Public_BasePlayer_h_21_RPC_WRAPPERS \
	TGP_Project_Source_TGP_Project_Public_BasePlayer_h_21_INCLASS \
	TGP_Project_Source_TGP_Project_Public_BasePlayer_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGP_Project_Source_TGP_Project_Public_BasePlayer_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Project_Source_TGP_Project_Public_BasePlayer_h_21_PRIVATE_PROPERTY_OFFSET \
	TGP_Project_Source_TGP_Project_Public_BasePlayer_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	TGP_Project_Source_TGP_Project_Public_BasePlayer_h_21_INCLASS_NO_PURE_DECLS \
	TGP_Project_Source_TGP_Project_Public_BasePlayer_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGP_Project_Source_TGP_Project_Public_BasePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
