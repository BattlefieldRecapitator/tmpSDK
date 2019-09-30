// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MORDHAU_AttackMotion_generated_h
#error "AttackMotion.generated.h already included, missing '#pragma once' in AttackMotion.h"
#endif
#define MORDHAU_AttackMotion_generated_h

#define Mordhau_Source_Mordhau_AttackMotion_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetHasHitIncludingCosmeticHit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHasHitIncludingCosmeticHit(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_AttackMotion_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetHasHitIncludingCosmeticHit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHasHitIncludingCosmeticHit(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_AttackMotion_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttackMotion(); \
	friend struct Z_Construct_UClass_UAttackMotion_Statics; \
public: \
	DECLARE_CLASS(UAttackMotion, UMordhauMotion, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UAttackMotion)


#define Mordhau_Source_Mordhau_AttackMotion_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAttackMotion(); \
	friend struct Z_Construct_UClass_UAttackMotion_Statics; \
public: \
	DECLARE_CLASS(UAttackMotion, UMordhauMotion, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UAttackMotion)


#define Mordhau_Source_Mordhau_AttackMotion_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttackMotion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttackMotion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttackMotion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackMotion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttackMotion(UAttackMotion&&); \
	NO_API UAttackMotion(const UAttackMotion&); \
public:


#define Mordhau_Source_Mordhau_AttackMotion_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttackMotion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttackMotion(UAttackMotion&&); \
	NO_API UAttackMotion(const UAttackMotion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttackMotion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackMotion); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttackMotion)


#define Mordhau_Source_Mordhau_AttackMotion_h_16_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_AttackMotion_h_13_PROLOG
#define Mordhau_Source_Mordhau_AttackMotion_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_AttackMotion_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_AttackMotion_h_16_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_AttackMotion_h_16_INCLASS \
	Mordhau_Source_Mordhau_AttackMotion_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_AttackMotion_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_AttackMotion_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_AttackMotion_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_AttackMotion_h_16_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_AttackMotion_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_AttackMotion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS