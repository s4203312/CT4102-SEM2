// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SEM2/MyObjectPool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyObjectPool() {}
// Cross Module References
	SEM2_API UClass* Z_Construct_UClass_UMyObjectPool_NoRegister();
	SEM2_API UClass* Z_Construct_UClass_UMyObjectPool();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SEM2();
	SEM2_API UClass* Z_Construct_UClass_AMyEnemy_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMyObjectPool::execMovePooledObject)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovePooledObject(Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyObjectPool::execSpawnPooledObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMyEnemy**)Z_Param__Result=P_THIS->SpawnPooledObject();
		P_NATIVE_END;
	}
	void UMyObjectPool::StaticRegisterNativesUMyObjectPool()
	{
		UClass* Class = UMyObjectPool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MovePooledObject", &UMyObjectPool::execMovePooledObject },
			{ "SpawnPooledObject", &UMyObjectPool::execSpawnPooledObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyObjectPool_MovePooledObject_Statics
	{
		struct MyObjectPool_eventMovePooledObject_Parms
		{
			float deltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyObjectPool_MovePooledObject_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyObjectPool_eventMovePooledObject_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyObjectPool_MovePooledObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyObjectPool_MovePooledObject_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyObjectPool_MovePooledObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Object Pool" },
		{ "Comment", "//Can be used as a node in blueprints\n" },
		{ "ModuleRelativePath", "MyObjectPool.h" },
		{ "ToolTip", "Can be used as a node in blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyObjectPool_MovePooledObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyObjectPool, nullptr, "MovePooledObject", nullptr, nullptr, sizeof(MyObjectPool_eventMovePooledObject_Parms), Z_Construct_UFunction_UMyObjectPool_MovePooledObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyObjectPool_MovePooledObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyObjectPool_MovePooledObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyObjectPool_MovePooledObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyObjectPool_MovePooledObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyObjectPool_MovePooledObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyObjectPool_SpawnPooledObject_Statics
	{
		struct MyObjectPool_eventSpawnPooledObject_Parms
		{
			AMyEnemy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyObjectPool_SpawnPooledObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyObjectPool_eventSpawnPooledObject_Parms, ReturnValue), Z_Construct_UClass_AMyEnemy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyObjectPool_SpawnPooledObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyObjectPool_SpawnPooledObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyObjectPool_SpawnPooledObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Object Pool" },
		{ "Comment", "//Can be used as a node in blueprints\n" },
		{ "ModuleRelativePath", "MyObjectPool.h" },
		{ "ToolTip", "Can be used as a node in blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyObjectPool_SpawnPooledObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyObjectPool, nullptr, "SpawnPooledObject", nullptr, nullptr, sizeof(MyObjectPool_eventSpawnPooledObject_Parms), Z_Construct_UFunction_UMyObjectPool_SpawnPooledObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyObjectPool_SpawnPooledObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyObjectPool_SpawnPooledObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyObjectPool_SpawnPooledObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyObjectPool_SpawnPooledObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyObjectPool_SpawnPooledObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyObjectPool_NoRegister()
	{
		return UMyObjectPool::StaticClass();
	}
	struct Z_Construct_UClass_UMyObjectPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyObjectPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SEM2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyObjectPool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyObjectPool_MovePooledObject, "MovePooledObject" }, // 452767967
		{ &Z_Construct_UFunction_UMyObjectPool_SpawnPooledObject, "SpawnPooledObject" }, // 972970716
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyObjectPool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyObjectPool.h" },
		{ "ModuleRelativePath", "MyObjectPool.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyObjectPool_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "Enemy Movement" },
		{ "ModuleRelativePath", "MyObjectPool.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyObjectPool_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyObjectPool, speed), METADATA_PARAMS(Z_Construct_UClass_UMyObjectPool_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyObjectPool_Statics::NewProp_speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyObjectPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyObjectPool_Statics::NewProp_speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyObjectPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyObjectPool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyObjectPool_Statics::ClassParams = {
		&UMyObjectPool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyObjectPool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyObjectPool_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyObjectPool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyObjectPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyObjectPool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyObjectPool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyObjectPool, 2492157729);
	template<> SEM2_API UClass* StaticClass<UMyObjectPool>()
	{
		return UMyObjectPool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyObjectPool(Z_Construct_UClass_UMyObjectPool, &UMyObjectPool::StaticClass, TEXT("/Script/SEM2"), TEXT("UMyObjectPool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyObjectPool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
