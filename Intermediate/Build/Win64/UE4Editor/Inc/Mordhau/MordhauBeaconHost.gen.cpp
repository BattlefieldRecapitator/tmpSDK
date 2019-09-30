// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauBeaconHost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauBeaconHost() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauBeaconHost_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauBeaconHost();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void AMordhauBeaconHost::StaticRegisterNativesAMordhauBeaconHost()
	{
	}
	UClass* Z_Construct_UClass_AMordhauBeaconHost_NoRegister()
	{
		return AMordhauBeaconHost::StaticClass();
	}
	struct Z_Construct_UClass_AMordhauBeaconHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_OpenSlots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMordhauBeaconHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauBeaconHost_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MordhauBeaconHost.h" },
		{ "ModuleRelativePath", "MordhauBeaconHost.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauBeaconHost_Statics::NewProp_OpenSlots_MetaData[] = {
		{ "Category", "MordhauBeaconHost" },
		{ "ModuleRelativePath", "MordhauBeaconHost.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauBeaconHost_Statics::NewProp_OpenSlots = { UE4CodeGen_Private::EPropertyClass::Int, "OpenSlots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauBeaconHost, OpenSlots), METADATA_PARAMS(Z_Construct_UClass_AMordhauBeaconHost_Statics::NewProp_OpenSlots_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauBeaconHost_Statics::NewProp_OpenSlots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMordhauBeaconHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauBeaconHost_Statics::NewProp_OpenSlots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMordhauBeaconHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMordhauBeaconHost>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMordhauBeaconHost_Statics::ClassParams = {
		&AMordhauBeaconHost::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AMordhauBeaconHost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMordhauBeaconHost_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMordhauBeaconHost_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMordhauBeaconHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMordhauBeaconHost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMordhauBeaconHost_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMordhauBeaconHost, 1068651336);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMordhauBeaconHost(Z_Construct_UClass_AMordhauBeaconHost, &AMordhauBeaconHost::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMordhauBeaconHost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMordhauBeaconHost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
