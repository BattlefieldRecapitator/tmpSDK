// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
#ifdef MORDHAU_Quiver_generated_h
#error "Quiver.generated.h already included, missing '#pragma once' in Quiver.h"
#endif
#define MORDHAU_Quiver_generated_h

#define Mordhau_Source_Mordhau_Quiver_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindAppropriateQuiverMesh) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Ammo); \
		P_GET_PROPERTY(UByteProperty,Z_Param_MaxAmmo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMesh**)Z_Param__Result=P_THIS->FindAppropriateQuiverMesh(Z_Param_Ammo,Z_Param_MaxAmmo); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_Quiver_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindAppropriateQuiverMesh) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Ammo); \
		P_GET_PROPERTY(UByteProperty,Z_Param_MaxAmmo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMesh**)Z_Param__Result=P_THIS->FindAppropriateQuiverMesh(Z_Param_Ammo,Z_Param_MaxAmmo); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_Quiver_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuiver(); \
	friend struct Z_Construct_UClass_UQuiver_Statics; \
public: \
	DECLARE_CLASS(UQuiver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UQuiver)


#define Mordhau_Source_Mordhau_Quiver_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUQuiver(); \
	friend struct Z_Construct_UClass_UQuiver_Statics; \
public: \
	DECLARE_CLASS(UQuiver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UQuiver)


#define Mordhau_Source_Mordhau_Quiver_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuiver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuiver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuiver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuiver(UQuiver&&); \
	NO_API UQuiver(const UQuiver&); \
public:


#define Mordhau_Source_Mordhau_Quiver_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuiver(UQuiver&&); \
	NO_API UQuiver(const UQuiver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuiver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuiver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuiver)


#define Mordhau_Source_Mordhau_Quiver_h_15_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_Quiver_h_12_PROLOG
#define Mordhau_Source_Mordhau_Quiver_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_Quiver_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_Quiver_h_15_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_Quiver_h_15_INCLASS \
	Mordhau_Source_Mordhau_Quiver_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_Quiver_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_Quiver_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_Quiver_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_Quiver_h_15_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_Quiver_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_Quiver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS