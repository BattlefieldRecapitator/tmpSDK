// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/VirtualWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualWeapon() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AVirtualWeapon_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AVirtualWeapon();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauWeapon();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void AVirtualWeapon::StaticRegisterNativesAVirtualWeapon()
	{
	}
	UClass* Z_Construct_UClass_AVirtualWeapon_NoRegister()
	{
		return AVirtualWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AVirtualWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVirtualWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMordhauWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VirtualWeapon.h" },
		{ "ModuleRelativePath", "VirtualWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVirtualWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVirtualWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVirtualWeapon_Statics::ClassParams = {
		&AVirtualWeapon::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AVirtualWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVirtualWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVirtualWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVirtualWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVirtualWeapon, 3941649113);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVirtualWeapon(Z_Construct_UClass_AVirtualWeapon, &AVirtualWeapon::StaticClass, TEXT("/Script/Mordhau"), TEXT("AVirtualWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVirtualWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif