// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SEM2/MyAI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAI() {}
// Cross Module References
	SEM2_API UClass* Z_Construct_UClass_AMyAI_NoRegister();
	SEM2_API UClass* Z_Construct_UClass_AMyAI();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SEM2();
// End Cross Module References
	void AMyAI::StaticRegisterNativesAMyAI()
	{
	}
	UClass* Z_Construct_UClass_AMyAI_NoRegister()
	{
		return AMyAI::StaticClass();
	}
	struct Z_Construct_UClass_AMyAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SEM2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyAI.h" },
		{ "ModuleRelativePath", "MyAI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyAI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyAI_Statics::ClassParams = {
		&AMyAI::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyAI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyAI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyAI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyAI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyAI, 4232559545);
	template<> SEM2_API UClass* StaticClass<AMyAI>()
	{
		return AMyAI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyAI(Z_Construct_UClass_AMyAI, &AMyAI::StaticClass, TEXT("/Script/SEM2"), TEXT("AMyAI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyAI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
