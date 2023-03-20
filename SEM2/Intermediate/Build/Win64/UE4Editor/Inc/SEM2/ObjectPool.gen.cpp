// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SEM2/ObjectPool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectPool() {}
// Cross Module References
	SEM2_API UClass* Z_Construct_UClass_UObjectPool_NoRegister();
	SEM2_API UClass* Z_Construct_UClass_UObjectPool();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SEM2();
// End Cross Module References
	void UObjectPool::StaticRegisterNativesUObjectPool()
	{
	}
	UClass* Z_Construct_UClass_UObjectPool_NoRegister()
	{
		return UObjectPool::StaticClass();
	}
	struct Z_Construct_UClass_UObjectPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SEM2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ObjectPool.h" },
		{ "ModuleRelativePath", "ObjectPool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectPool_Statics::ClassParams = {
		&UObjectPool::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectPool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectPool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectPool, 3197136022);
	template<> SEM2_API UClass* StaticClass<UObjectPool>()
	{
		return UObjectPool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectPool(Z_Construct_UClass_UObjectPool, &UObjectPool::StaticClass, TEXT("/Script/SEM2"), TEXT("UObjectPool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectPool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
