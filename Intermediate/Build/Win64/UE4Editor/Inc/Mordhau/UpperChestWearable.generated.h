// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef MORDHAU_UpperChestWearable_generated_h
#error "UpperChestWearable.generated.h already included, missing '#pragma once' in UpperChestWearable.h"
#endif
#define MORDHAU_UpperChestWearable_generated_h

#define Mordhau_Source_Mordhau_UpperChestWearable_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetArmsWearable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetArmsWearable(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArmsWearablesNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetArmsWearablesNum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLowerChestWearable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetLowerChestWearable(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLowerChestWearablesNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLowerChestWearablesNum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShouldersWearable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetShouldersWearable(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShouldersWearablesNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShouldersWearablesNum(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_UpperChestWearable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetArmsWearable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetArmsWearable(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArmsWearablesNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetArmsWearablesNum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLowerChestWearable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetLowerChestWearable(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLowerChestWearablesNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLowerChestWearablesNum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShouldersWearable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetShouldersWearable(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShouldersWearablesNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShouldersWearablesNum(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_UpperChestWearable_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpperChestWearable(); \
	friend struct Z_Construct_UClass_UUpperChestWearable_Statics; \
public: \
	DECLARE_CLASS(UUpperChestWearable, UMordhauWearable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UUpperChestWearable)


#define Mordhau_Source_Mordhau_UpperChestWearable_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUUpperChestWearable(); \
	friend struct Z_Construct_UClass_UUpperChestWearable_Statics; \
public: \
	DECLARE_CLASS(UUpperChestWearable, UMordhauWearable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UUpperChestWearable)


#define Mordhau_Source_Mordhau_UpperChestWearable_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpperChestWearable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpperChestWearable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpperChestWearable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpperChestWearable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpperChestWearable(UUpperChestWearable&&); \
	NO_API UUpperChestWearable(const UUpperChestWearable&); \
public:


#define Mordhau_Source_Mordhau_UpperChestWearable_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpperChestWearable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpperChestWearable(UUpperChestWearable&&); \
	NO_API UUpperChestWearable(const UUpperChestWearable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpperChestWearable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpperChestWearable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpperChestWearable)


#define Mordhau_Source_Mordhau_UpperChestWearable_h_15_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_UpperChestWearable_h_12_PROLOG
#define Mordhau_Source_Mordhau_UpperChestWearable_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_UpperChestWearable_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_UpperChestWearable_h_15_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_UpperChestWearable_h_15_INCLASS \
	Mordhau_Source_Mordhau_UpperChestWearable_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_UpperChestWearable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_UpperChestWearable_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_UpperChestWearable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_UpperChestWearable_h_15_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_UpperChestWearable_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_UpperChestWearable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
