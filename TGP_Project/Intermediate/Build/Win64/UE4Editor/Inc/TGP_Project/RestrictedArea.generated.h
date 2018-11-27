// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TGP_PROJECT_RestrictedArea_generated_h
#error "RestrictedArea.generated.h already included, missing '#pragma once' in RestrictedArea.h"
#endif
#define TGP_PROJECT_RestrictedArea_generated_h

#define TGP_Project_Source_TGP_Project_Public_RestrictedArea_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define TGP_Project_Source_TGP_Project_Public_RestrictedArea_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define TGP_Project_Source_TGP_Project_Public_RestrictedArea_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARestrictedArea(); \
	friend struct Z_Construct_UClass_ARestrictedArea_Statics; \
public: \
	DECLARE_CLASS(ARestrictedArea, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Project"), NO_API) \
	DECLARE_SERIALIZER(ARestrictedArea)


#define TGP_Project_Source_TGP_Project_Public_RestrictedArea_h_14_INCLASS \
private: \
	static void StaticRegisterNativesARestrictedArea(); \
	friend struct Z_Construct_UClass_ARestrictedArea_Statics; \
public: \
	DECLARE_CLASS(ARestrictedArea, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Project"), NO_API) \
	DECLARE_SERIALIZER(ARestrictedArea)


#define TGP_Project_Source_TGP_Project_Public_RestrictedArea_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARestrictedArea(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARestrictedArea) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARestrictedArea); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARestrictedArea); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARestrictedArea(ARestrictedArea&&); \
	NO_API ARestrictedArea(const ARestrictedArea&); \
public:


#define TGP_Project_Source_TGP_Project_Public_RestrictedArea_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARestrictedArea(ARestrictedArea&&); \
	NO_API ARestrictedArea(const ARestrictedArea&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARestrictedArea); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARestrictedArea); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARestrictedArea)


#define TGP_Project_Source_TGP_Project_Public_RestrictedArea_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___overlapBox() { return STRUCT_OFFSET(ARestrictedArea, _overlapBox); } \
	FORCEINLINE static uint32 __PPO___sound() { return STRUCT_OFFSET(ARestrictedArea, _sound); }


#define TGP_Project_Source_TGP_Project_Public_RestrictedArea_h_11_PROLOG
#define TGP_Project_Source_TGP_Project_Public_RestrictedArea_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Project_Source_TGP_Project_Public_RestrictedArea_h_14_PRIVATE_PROPERTY_OFFSET \
	TGP_Project_Source_TGP_Project_Public_RestrictedArea_h_14_RPC_WRAPPERS \
	TGP_Project_Source_TGP_Project_Public_RestrictedArea_h_14_INCLASS \
	TGP_Project_Source_TGP_Project_Public_RestrictedArea_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGP_Project_Source_TGP_Project_Public_RestrictedArea_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Project_Source_TGP_Project_Public_RestrictedArea_h_14_PRIVATE_PROPERTY_OFFSET \
	TGP_Project_Source_TGP_Project_Public_RestrictedArea_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TGP_Project_Source_TGP_Project_Public_RestrictedArea_h_14_INCLASS_NO_PURE_DECLS \
	TGP_Project_Source_TGP_Project_Public_RestrictedArea_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGP_Project_Source_TGP_Project_Public_RestrictedArea_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
