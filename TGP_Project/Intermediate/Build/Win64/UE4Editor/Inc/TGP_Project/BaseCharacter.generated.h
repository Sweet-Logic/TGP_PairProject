// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeaponBase;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class UPaperFlipbook;
#ifdef TGP_PROJECT_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define TGP_PROJECT_BaseCharacter_generated_h

#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWeaponBase**)Z_Param__Result=P_THIS->GetCurrentWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsWeaponDrawn) \
	{ \
		P_GET_UBOOL(Z_Param_newHasWeaponDrawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsWeaponDrawn(Z_Param_newHasWeaponDrawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsWeaponDrawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsWeaponDrawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCharacterAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCharacterAlive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollision) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Collision(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
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


#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWeaponBase**)Z_Param__Result=P_THIS->GetCurrentWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsWeaponDrawn) \
	{ \
		P_GET_UBOOL(Z_Param_newHasWeaponDrawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsWeaponDrawn(Z_Param_newHasWeaponDrawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsWeaponDrawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsWeaponDrawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCharacterAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCharacterAlive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollision) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Collision(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
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


#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Project"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_27_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Project"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_27_STANDARD_CONSTRUCTORS \
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


#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___boxComponent() { return STRUCT_OFFSET(ABaseCharacter, _boxComponent); } \
	FORCEINLINE static uint32 __PPO___direction() { return STRUCT_OFFSET(ABaseCharacter, _direction); } \
	FORCEINLINE static uint32 __PPO___currentWeapon() { return STRUCT_OFFSET(ABaseCharacter, _currentWeapon); } \
	FORCEINLINE static uint32 __PPO___weaponInventory() { return STRUCT_OFFSET(ABaseCharacter, _weaponInventory); } \
	FORCEINLINE static uint32 __PPO___defaultGun() { return STRUCT_OFFSET(ABaseCharacter, _defaultGun); } \
	FORCEINLINE static uint32 __PPO___defaultMelee() { return STRUCT_OFFSET(ABaseCharacter, _defaultMelee); } \
	FORCEINLINE static uint32 __PPO___hasWeaponDrawn() { return STRUCT_OFFSET(ABaseCharacter, _hasWeaponDrawn); } \
	FORCEINLINE static uint32 __PPO___idleFlipbook() { return STRUCT_OFFSET(ABaseCharacter, _idleFlipbook); } \
	FORCEINLINE static uint32 __PPO___walikingFlipBook() { return STRUCT_OFFSET(ABaseCharacter, _walikingFlipBook); } \
	FORCEINLINE static uint32 __PPO___playRate() { return STRUCT_OFFSET(ABaseCharacter, _playRate); } \
	FORCEINLINE static uint32 __PPO___loopFlipbook() { return STRUCT_OFFSET(ABaseCharacter, _loopFlipbook); } \
	FORCEINLINE static uint32 __PPO___walkSpeed() { return STRUCT_OFFSET(ABaseCharacter, _walkSpeed); } \
	FORCEINLINE static uint32 __PPO___x() { return STRUCT_OFFSET(ABaseCharacter, _x); } \
	FORCEINLINE static uint32 __PPO___y() { return STRUCT_OFFSET(ABaseCharacter, _y); } \
	FORCEINLINE static uint32 __PPO___z() { return STRUCT_OFFSET(ABaseCharacter, _z); }


#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_24_PROLOG
#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_27_PRIVATE_PROPERTY_OFFSET \
	TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_27_RPC_WRAPPERS \
	TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_27_INCLASS \
	TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_27_PRIVATE_PROPERTY_OFFSET \
	TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_27_INCLASS_NO_PURE_DECLS \
	TGP_Project_Source_TGP_Project_Public_BaseCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGP_Project_Source_TGP_Project_Public_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
