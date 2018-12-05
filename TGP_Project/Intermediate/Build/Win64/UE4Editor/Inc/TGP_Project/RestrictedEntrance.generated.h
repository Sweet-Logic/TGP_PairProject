// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TGP_PROJECT_RestrictedEntrance_generated_h
#error "RestrictedEntrance.generated.h already included, missing '#pragma once' in RestrictedEntrance.h"
#endif
#define TGP_PROJECT_RestrictedEntrance_generated_h

#define TGP_Project_Source_TGP_Project_Public_RestrictedEntrance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Exit(Z_Param_Actor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnter) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Enter(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define TGP_Project_Source_TGP_Project_Public_RestrictedEntrance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Exit(Z_Param_Actor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnter) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Enter(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define TGP_Project_Source_TGP_Project_Public_RestrictedEntrance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARestrictedEntrance(); \
	friend struct Z_Construct_UClass_ARestrictedEntrance_Statics; \
public: \
	DECLARE_CLASS(ARestrictedEntrance, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Project"), NO_API) \
	DECLARE_SERIALIZER(ARestrictedEntrance)


#define TGP_Project_Source_TGP_Project_Public_RestrictedEntrance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesARestrictedEntrance(); \
	friend struct Z_Construct_UClass_ARestrictedEntrance_Statics; \
public: \
	DECLARE_CLASS(ARestrictedEntrance, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Project"), NO_API) \
	DECLARE_SERIALIZER(ARestrictedEntrance)


#define TGP_Project_Source_TGP_Project_Public_RestrictedEntrance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARestrictedEntrance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARestrictedEntrance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARestrictedEntrance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARestrictedEntrance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARestrictedEntrance(ARestrictedEntrance&&); \
	NO_API ARestrictedEntrance(const ARestrictedEntrance&); \
public:


#define TGP_Project_Source_TGP_Project_Public_RestrictedEntrance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARestrictedEntrance(ARestrictedEntrance&&); \
	NO_API ARestrictedEntrance(const ARestrictedEntrance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARestrictedEntrance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARestrictedEntrance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARestrictedEntrance)


#define TGP_Project_Source_TGP_Project_Public_RestrictedEntrance_h_15_PRIVATE_PROPERTY_OFFSET
#define TGP_Project_Source_TGP_Project_Public_RestrictedEntrance_h_12_PROLOG
#define TGP_Project_Source_TGP_Project_Public_RestrictedEntrance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Project_Source_TGP_Project_Public_RestrictedEntrance_h_15_PRIVATE_PROPERTY_OFFSET \
	TGP_Project_Source_TGP_Project_Public_RestrictedEntrance_h_15_RPC_WRAPPERS \
	TGP_Project_Source_TGP_Project_Public_RestrictedEntrance_h_15_INCLASS \
	TGP_Project_Source_TGP_Project_Public_RestrictedEntrance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGP_Project_Source_TGP_Project_Public_RestrictedEntrance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Project_Source_TGP_Project_Public_RestrictedEntrance_h_15_PRIVATE_PROPERTY_OFFSET \
	TGP_Project_Source_TGP_Project_Public_RestrictedEntrance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TGP_Project_Source_TGP_Project_Public_RestrictedEntrance_h_15_INCLASS_NO_PURE_DECLS \
	TGP_Project_Source_TGP_Project_Public_RestrictedEntrance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGP_Project_Source_TGP_Project_Public_RestrictedEntrance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
