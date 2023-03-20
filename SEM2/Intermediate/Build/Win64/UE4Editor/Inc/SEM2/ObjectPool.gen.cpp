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
	SEM2_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UObjectPool::execOnPooledEnemyDespawn)
	{
		P_GET_OBJECT(AEnemy,Z_Param_EnemyActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPooledEnemyDespawn(Z_Param_EnemyActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectPool::execSpawnPooledObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AEnemy**)Z_Param__Result=P_THIS->SpawnPooledObject();
		P_NATIVE_END;
	}
	void UObjectPool::StaticRegisterNativesUObjectPool()
	{
		UClass* Class = UObjectPool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPooledEnemyDespawn", &UObjectPool::execOnPooledEnemyDespawn },
			{ "SpawnPooledObject", &UObjectPool::execSpawnPooledObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UObjectPool_OnPooledEnemyDespawn_Statics
	{
		struct ObjectPool_eventOnPooledEnemyDespawn_Parms
		{
			AEnemy* EnemyActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPool_OnPooledEnemyDespawn_Statics::NewProp_EnemyActor = { "EnemyActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPool_eventOnPooledEnemyDespawn_Parms, EnemyActor), Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPool_OnPooledEnemyDespawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_OnPooledEnemyDespawn_Statics::NewProp_EnemyActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPool_OnPooledEnemyDespawn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Function that is linked to the delegate\n" },
		{ "ModuleRelativePath", "ObjectPool.h" },
		{ "ToolTip", "Function that is linked to the delegate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPool_OnPooledEnemyDespawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPool, nullptr, "OnPooledEnemyDespawn", nullptr, nullptr, sizeof(ObjectPool_eventOnPooledEnemyDespawn_Parms), Z_Construct_UFunction_UObjectPool_OnPooledEnemyDespawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_OnPooledEnemyDespawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPool_OnPooledEnemyDespawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_OnPooledEnemyDespawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPool_OnPooledEnemyDespawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPool_OnPooledEnemyDespawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectPool_SpawnPooledObject_Statics
	{
		struct ObjectPool_eventSpawnPooledObject_Parms
		{
			AEnemy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPool_SpawnPooledObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPool_eventSpawnPooledObject_Parms, ReturnValue), Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPool_SpawnPooledObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPool_SpawnPooledObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPool_SpawnPooledObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Object Pool" },
		{ "Comment", "//Can be used as a node in blueprints\n" },
		{ "ModuleRelativePath", "ObjectPool.h" },
		{ "ToolTip", "Can be used as a node in blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPool_SpawnPooledObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPool, nullptr, "SpawnPooledObject", nullptr, nullptr, sizeof(ObjectPool_eventSpawnPooledObject_Parms), Z_Construct_UFunction_UObjectPool_SpawnPooledObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_SpawnPooledObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPool_SpawnPooledObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPool_SpawnPooledObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPool_SpawnPooledObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPool_SpawnPooledObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UObjectPool_NoRegister()
	{
		return UObjectPool::StaticClass();
	}
	struct Z_Construct_UClass_UObjectPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PooledObjectSubclass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PooledObjectSubclass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PooledObjectLifeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PooledObjectLifeSpan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SEM2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjectPool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectPool_OnPooledEnemyDespawn, "OnPooledEnemyDespawn" }, // 1917289342
		{ &Z_Construct_UFunction_UObjectPool_SpawnPooledObject, "SpawnPooledObject" }, // 757697138
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ObjectPool.h" },
		{ "ModuleRelativePath", "ObjectPool.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::NewProp_PooledObjectSubclass_MetaData[] = {
		{ "Category", "Object Pool" },
		{ "Comment", "//Creates a subclass of enemies\n" },
		{ "ModuleRelativePath", "ObjectPool.h" },
		{ "ToolTip", "Creates a subclass of enemies" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_PooledObjectSubclass = { "PooledObjectSubclass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPool, PooledObjectSubclass), Z_Construct_UClass_AEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::NewProp_PooledObjectSubclass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::NewProp_PooledObjectSubclass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::NewProp_PoolSize_MetaData[] = {
		{ "Category", "Object Pool" },
		{ "Comment", "//Creates a size of the pool\n" },
		{ "ModuleRelativePath", "ObjectPool.h" },
		{ "ToolTip", "Creates a size of the pool" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPool, PoolSize), METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::NewProp_PoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::NewProp_PoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPool_Statics::NewProp_PooledObjectLifeSpan_MetaData[] = {
		{ "Category", "Object Pool" },
		{ "Comment", "//Creates a lifespan of the enemy\n" },
		{ "ModuleRelativePath", "ObjectPool.h" },
		{ "ToolTip", "Creates a lifespan of the enemy" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UObjectPool_Statics::NewProp_PooledObjectLifeSpan = { "PooledObjectLifeSpan", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPool, PooledObjectLifeSpan), METADATA_PARAMS(Z_Construct_UClass_UObjectPool_Statics::NewProp_PooledObjectLifeSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::NewProp_PooledObjectLifeSpan_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_PooledObjectSubclass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_PoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPool_Statics::NewProp_PooledObjectLifeSpan,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectPool_Statics::ClassParams = {
		&UObjectPool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UObjectPool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPool_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UObjectPool, 1004705876);
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
