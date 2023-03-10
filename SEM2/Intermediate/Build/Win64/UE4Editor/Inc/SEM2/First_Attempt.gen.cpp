// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SEM2/First_Attempt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirst_Attempt() {}
// Cross Module References
	SEM2_API UClass* Z_Construct_UClass_AFirst_Attempt_NoRegister();
	SEM2_API UClass* Z_Construct_UClass_AFirst_Attempt();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SEM2();
// End Cross Module References
	void AFirst_Attempt::StaticRegisterNativesAFirst_Attempt()
	{
	}
	UClass* Z_Construct_UClass_AFirst_Attempt_NoRegister()
	{
		return AFirst_Attempt::StaticClass();
	}
	struct Z_Construct_UClass_AFirst_Attempt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirst_Attempt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SEM2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirst_Attempt_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "First_Attempt.h" },
		{ "ModuleRelativePath", "First_Attempt.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirst_Attempt_Statics::NewProp_input_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "First_Attempt.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFirst_Attempt_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirst_Attempt, input), METADATA_PARAMS(Z_Construct_UClass_AFirst_Attempt_Statics::NewProp_input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirst_Attempt_Statics::NewProp_input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirst_Attempt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirst_Attempt_Statics::NewProp_input,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirst_Attempt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirst_Attempt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirst_Attempt_Statics::ClassParams = {
		&AFirst_Attempt::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFirst_Attempt_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirst_Attempt_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirst_Attempt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirst_Attempt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirst_Attempt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirst_Attempt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirst_Attempt, 799391798);
	template<> SEM2_API UClass* StaticClass<AFirst_Attempt>()
	{
		return AFirst_Attempt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirst_Attempt(Z_Construct_UClass_AFirst_Attempt, &AFirst_Attempt::StaticClass, TEXT("/Script/SEM2"), TEXT("AFirst_Attempt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirst_Attempt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
