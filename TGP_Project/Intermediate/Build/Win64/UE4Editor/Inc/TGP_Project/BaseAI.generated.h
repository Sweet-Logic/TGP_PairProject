// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FVector;
enum class AI_STATE : uint8;
#ifdef TGP_PROJECT_BaseAI_generated_h
#error "BaseAI.generated.h already included, missing '#pragma once' in BaseAI.h"
#endif
#define TGP_PROJECT_BaseAI_generated_h

#define TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNoiseHeard) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNoiseHeard(Z_Param_NoiseInstigator,Z_Param_Out_location,Z_Param_volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnSeen(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNoiseHeard) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNoiseHeard(Z_Param_NoiseInstigator,Z_Param_Out_location,Z_Param_volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnSeen(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_EVENT_PARMS \
	struct BaseAI_eventOnStateChanged_Parms \
	{ \
		AI_STATE newState; \
	};


#define TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_CALLBACK_WRAPPERS
#define TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseAI(); \
	friend struct Z_Construct_UClass_ABaseAI_Statics; \
public: \
	DECLARE_CLASS(ABaseAI, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Project"), NO_API) \
	DECLARE_SERIALIZER(ABaseAI)


#define TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_INCLASS \
private: \
	static void StaticRegisterNativesABaseAI(); \
	friend struct Z_Construct_UClass_ABaseAI_Statics; \
public: \
	DECLARE_CLASS(ABaseAI, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TGP_Project"), NO_API) \
	DECLARE_SERIALIZER(ABaseAI)


#define TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseAI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseAI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseAI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseAI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseAI(ABaseAI&&); \
	NO_API ABaseAI(const ABaseAI&); \
public:


#define TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseAI(ABaseAI&&); \
	NO_API ABaseAI(const ABaseAI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseAI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseAI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseAI)


#define TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___sensor() { return STRUCT_OFFSET(ABaseAI, _sensor); } \
	FORCEINLINE static uint32 __PPO___minDistanceToTarget() { return STRUCT_OFFSET(ABaseAI, _minDistanceToTarget); } \
	FORCEINLINE static uint32 __PPO__mapX() { return STRUCT_OFFSET(ABaseAI, mapX); } \
	FORCEINLINE static uint32 __PPO__mapY() { return STRUCT_OFFSET(ABaseAI, mapY); } \
	FORCEINLINE static uint32 __PPO__mapWidth() { return STRUCT_OFFSET(ABaseAI, mapWidth); } \
	FORCEINLINE static uint32 __PPO__mapHeight() { return STRUCT_OFFSET(ABaseAI, mapHeight); }


#define TGP_Project_Source_TGP_Project_Public_BaseAI_h_18_PROLOG \
	TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_EVENT_PARMS


#define TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_PRIVATE_PROPERTY_OFFSET \
	TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_RPC_WRAPPERS \
	TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_CALLBACK_WRAPPERS \
	TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_INCLASS \
	TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_PRIVATE_PROPERTY_OFFSET \
	TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_CALLBACK_WRAPPERS \
	TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_INCLASS_NO_PURE_DECLS \
	TGP_Project_Source_TGP_Project_Public_BaseAI_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGP_Project_Source_TGP_Project_Public_BaseAI_h


#define FOREACH_ENUM_AI_STATE(op) \
	op(AI_STATE::IDLE) \
	op(AI_STATE::SUSPICIOUS) \
	op(AI_STATE::ALERTED) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
