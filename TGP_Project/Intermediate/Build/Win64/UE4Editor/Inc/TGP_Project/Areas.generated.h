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
#ifdef TGP_PROJECT_Areas_generated_h
#error "Areas.generated.h already included, missing '#pragma once' in Areas.h"
#endif
#define TGP_PROJECT_Areas_generated_h

#define TGP_Project_Source_TGP_Project_Public_Areas_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExitRestictedArea) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExitRestictedArea(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterRestictedArea) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterRestictedArea(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define TGP_Project_Source_TGP_Project_Public_Areas_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExitRestictedArea) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExitRestictedArea(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterRestictedArea) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterRestictedArea(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define TGP_Project_Source_TGP_Project_Public_Areas_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAreas(); \
	friend struct Z_Construct_UClass_AAreas_Statics; \
public: \
	DECLARE_CLASS(AAreas, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Project"), NO_API) \
	DECLARE_SERIALIZER(AAreas)


#define TGP_Project_Source_TGP_Project_Public_Areas_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAAreas(); \
	friend struct Z_Construct_UClass_AAreas_Statics; \
public: \
	DECLARE_CLASS(AAreas, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Project"), NO_API) \
	DECLARE_SERIALIZER(AAreas)


#define TGP_Project_Source_TGP_Project_Public_Areas_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAreas(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAreas) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAreas); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAreas); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAreas(AAreas&&); \
	NO_API AAreas(const AAreas&); \
public:


#define TGP_Project_Source_TGP_Project_Public_Areas_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAreas(AAreas&&); \
	NO_API AAreas(const AAreas&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAreas); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAreas); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAreas)


#define TGP_Project_Source_TGP_Project_Public_Areas_h_21_PRIVATE_PROPERTY_OFFSET
#define TGP_Project_Source_TGP_Project_Public_Areas_h_18_PROLOG
#define TGP_Project_Source_TGP_Project_Public_Areas_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Project_Source_TGP_Project_Public_Areas_h_21_PRIVATE_PROPERTY_OFFSET \
	TGP_Project_Source_TGP_Project_Public_Areas_h_21_RPC_WRAPPERS \
	TGP_Project_Source_TGP_Project_Public_Areas_h_21_INCLASS \
	TGP_Project_Source_TGP_Project_Public_Areas_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGP_Project_Source_TGP_Project_Public_Areas_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Project_Source_TGP_Project_Public_Areas_h_21_PRIVATE_PROPERTY_OFFSET \
	TGP_Project_Source_TGP_Project_Public_Areas_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	TGP_Project_Source_TGP_Project_Public_Areas_h_21_INCLASS_NO_PURE_DECLS \
	TGP_Project_Source_TGP_Project_Public_Areas_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGP_Project_Source_TGP_Project_Public_Areas_h


#define FOREACH_ENUM_EAREAS(op) \
	op(A_AUTHORISED) \
	op(A_RESTRICTED) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
