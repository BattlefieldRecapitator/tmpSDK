// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMordhauDialog;
#ifdef MORDHAU_MordhauHUD_generated_h
#error "MordhauHUD.generated.h already included, missing '#pragma once' in MordhauHUD.h"
#endif
#define MORDHAU_MordhauHUD_generated_h

#define Mordhau_Source_Mordhau_MordhauHUD_h_15_RPC_WRAPPERS
#define Mordhau_Source_Mordhau_MordhauHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Mordhau_Source_Mordhau_MordhauHUD_h_15_EVENT_PARMS \
	struct MordhauHUD_eventEnqueueMordhauDialog_Parms \
	{ \
		UMordhauDialog* Dialog; \
	};


#define Mordhau_Source_Mordhau_MordhauHUD_h_15_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_MordhauHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMordhauHUD(); \
	friend struct Z_Construct_UClass_AMordhauHUD_Statics; \
public: \
	DECLARE_CLASS(AMordhauHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauHUD)


#define Mordhau_Source_Mordhau_MordhauHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMordhauHUD(); \
	friend struct Z_Construct_UClass_AMordhauHUD_Statics; \
public: \
	DECLARE_CLASS(AMordhauHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauHUD)


#define Mordhau_Source_Mordhau_MordhauHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauHUD(AMordhauHUD&&); \
	NO_API AMordhauHUD(const AMordhauHUD&); \
public:


#define Mordhau_Source_Mordhau_MordhauHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauHUD(AMordhauHUD&&); \
	NO_API AMordhauHUD(const AMordhauHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauHUD)


#define Mordhau_Source_Mordhau_MordhauHUD_h_15_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauHUD_h_12_PROLOG \
	Mordhau_Source_Mordhau_MordhauHUD_h_15_EVENT_PARMS


#define Mordhau_Source_Mordhau_MordhauHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauHUD_h_15_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauHUD_h_15_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauHUD_h_15_INCLASS \
	Mordhau_Source_Mordhau_MordhauHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauHUD_h_15_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauHUD_h_15_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS