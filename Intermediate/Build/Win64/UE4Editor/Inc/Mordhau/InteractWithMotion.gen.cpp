// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/InteractWithMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractWithMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UInteractWithMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UInteractWithMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UInteractWithMotion::StaticRegisterNativesUInteractWithMotion()
	{
	}
	UClass* Z_Construct_UClass_UInteractWithMotion_NoRegister()
	{
		return UInteractWithMotion::StaticClass();
	}
	struct Z_Construct_UClass_UInteractWithMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractWithMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractWithMotion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractWithMotion.h" },
		{ "ModuleRelativePath", "InteractWithMotion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractWithMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractWithMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractWithMotion_Statics::ClassParams = {
		&UInteractWithMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInteractWithMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInteractWithMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractWithMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractWithMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractWithMotion, 2936200227);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractWithMotion(Z_Construct_UClass_UInteractWithMotion, &UInteractWithMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UInteractWithMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractWithMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
