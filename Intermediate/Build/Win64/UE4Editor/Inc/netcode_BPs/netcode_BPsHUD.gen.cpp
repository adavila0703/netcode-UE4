// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "netcode_BPs/netcode_BPsHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodenetcode_BPsHUD() {}
// Cross Module References
	NETCODE_BPS_API UClass* Z_Construct_UClass_Anetcode_BPsHUD_NoRegister();
	NETCODE_BPS_API UClass* Z_Construct_UClass_Anetcode_BPsHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_netcode_BPs();
// End Cross Module References
	void Anetcode_BPsHUD::StaticRegisterNativesAnetcode_BPsHUD()
	{
	}
	UClass* Z_Construct_UClass_Anetcode_BPsHUD_NoRegister()
	{
		return Anetcode_BPsHUD::StaticClass();
	}
	struct Z_Construct_UClass_Anetcode_BPsHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Anetcode_BPsHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_netcode_BPs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Anetcode_BPsHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "netcode_BPsHUD.h" },
		{ "ModuleRelativePath", "netcode_BPsHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Anetcode_BPsHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Anetcode_BPsHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Anetcode_BPsHUD_Statics::ClassParams = {
		&Anetcode_BPsHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Anetcode_BPsHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Anetcode_BPsHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Anetcode_BPsHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Anetcode_BPsHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Anetcode_BPsHUD, 3001019086);
	template<> NETCODE_BPS_API UClass* StaticClass<Anetcode_BPsHUD>()
	{
		return Anetcode_BPsHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Anetcode_BPsHUD(Z_Construct_UClass_Anetcode_BPsHUD, &Anetcode_BPsHUD::StaticClass, TEXT("/Script/netcode_BPs"), TEXT("Anetcode_BPsHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Anetcode_BPsHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
