// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/HolsterMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHolsterMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UHolsterMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UHolsterMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UHolsterMotion::StaticRegisterNativesUHolsterMotion()
	{
	}
	UClass* Z_Construct_UClass_UHolsterMotion_NoRegister()
	{
		return UHolsterMotion::StaticClass();
	}
	struct Z_Construct_UClass_UHolsterMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHolsterMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHolsterMotion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HolsterMotion.h" },
		{ "ModuleRelativePath", "HolsterMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHolsterMotion_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "HolsterMotion" },
		{ "ModuleRelativePath", "HolsterMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHolsterMotion_Statics::NewProp_Mode = { UE4CodeGen_Private::EPropertyClass::Byte, "Mode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHolsterMotion, Mode), nullptr, METADATA_PARAMS(Z_Construct_UClass_UHolsterMotion_Statics::NewProp_Mode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHolsterMotion_Statics::NewProp_Mode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHolsterMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHolsterMotion_Statics::NewProp_Mode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHolsterMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHolsterMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHolsterMotion_Statics::ClassParams = {
		&UHolsterMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UHolsterMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UHolsterMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UHolsterMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHolsterMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHolsterMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHolsterMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHolsterMotion, 2681338370);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHolsterMotion(Z_Construct_UClass_UHolsterMotion, &UHolsterMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UHolsterMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHolsterMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
