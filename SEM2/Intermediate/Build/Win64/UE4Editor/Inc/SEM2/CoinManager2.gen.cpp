// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SEM2/CoinManager2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinManager2() {}
// Cross Module References
	SEM2_API UClass* Z_Construct_UClass_ACoinManager2_NoRegister();
	SEM2_API UClass* Z_Construct_UClass_ACoinManager2();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SEM2();
// End Cross Module References
	void ACoinManager2::StaticRegisterNativesACoinManager2()
	{
	}
	UClass* Z_Construct_UClass_ACoinManager2_NoRegister()
	{
		return ACoinManager2::StaticClass();
	}
	struct Z_Construct_UClass_ACoinManager2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfCoins_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfCoins;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoinManager2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SEM2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinManager2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoinManager2.h" },
		{ "ModuleRelativePath", "CoinManager2.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinManager2_Statics::NewProp_NumberOfCoins_MetaData[] = {
		{ "Category", "CoinManager2" },
		{ "ModuleRelativePath", "CoinManager2.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACoinManager2_Statics::NewProp_NumberOfCoins = { "NumberOfCoins", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinManager2, NumberOfCoins), METADATA_PARAMS(Z_Construct_UClass_ACoinManager2_Statics::NewProp_NumberOfCoins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinManager2_Statics::NewProp_NumberOfCoins_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoinManager2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinManager2_Statics::NewProp_NumberOfCoins,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoinManager2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinManager2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACoinManager2_Statics::ClassParams = {
		&ACoinManager2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACoinManager2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoinManager2_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACoinManager2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinManager2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoinManager2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACoinManager2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACoinManager2, 1592889154);
	template<> SEM2_API UClass* StaticClass<ACoinManager2>()
	{
		return ACoinManager2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACoinManager2(Z_Construct_UClass_ACoinManager2, &ACoinManager2::StaticClass, TEXT("/Script/SEM2"), TEXT("ACoinManager2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinManager2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
