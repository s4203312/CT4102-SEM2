// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEM2_ObjectPool_generated_h
#error "ObjectPool.generated.h already included, missing '#pragma once' in ObjectPool.h"
#endif
#define SEM2_ObjectPool_generated_h

#define SEM2_Source_SEM2_ObjectPool_h_13_SPARSE_DATA
#define SEM2_Source_SEM2_ObjectPool_h_13_RPC_WRAPPERS
#define SEM2_Source_SEM2_ObjectPool_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define SEM2_Source_SEM2_ObjectPool_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectPool(); \
	friend struct Z_Construct_UClass_UObjectPool_Statics; \
public: \
	DECLARE_CLASS(UObjectPool, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SEM2"), NO_API) \
	DECLARE_SERIALIZER(UObjectPool)


#define SEM2_Source_SEM2_ObjectPool_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUObjectPool(); \
	friend struct Z_Construct_UClass_UObjectPool_Statics; \
public: \
	DECLARE_CLASS(UObjectPool, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SEM2"), NO_API) \
	DECLARE_SERIALIZER(UObjectPool)


#define SEM2_Source_SEM2_ObjectPool_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectPool(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectPool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPool); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectPool(UObjectPool&&); \
	NO_API UObjectPool(const UObjectPool&); \
public:


#define SEM2_Source_SEM2_ObjectPool_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectPool(UObjectPool&&); \
	NO_API UObjectPool(const UObjectPool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPool); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UObjectPool)


#define SEM2_Source_SEM2_ObjectPool_h_13_PRIVATE_PROPERTY_OFFSET
#define SEM2_Source_SEM2_ObjectPool_h_10_PROLOG
#define SEM2_Source_SEM2_ObjectPool_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SEM2_Source_SEM2_ObjectPool_h_13_PRIVATE_PROPERTY_OFFSET \
	SEM2_Source_SEM2_ObjectPool_h_13_SPARSE_DATA \
	SEM2_Source_SEM2_ObjectPool_h_13_RPC_WRAPPERS \
	SEM2_Source_SEM2_ObjectPool_h_13_INCLASS \
	SEM2_Source_SEM2_ObjectPool_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SEM2_Source_SEM2_ObjectPool_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SEM2_Source_SEM2_ObjectPool_h_13_PRIVATE_PROPERTY_OFFSET \
	SEM2_Source_SEM2_ObjectPool_h_13_SPARSE_DATA \
	SEM2_Source_SEM2_ObjectPool_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SEM2_Source_SEM2_ObjectPool_h_13_INCLASS_NO_PURE_DECLS \
	SEM2_Source_SEM2_ObjectPool_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEM2_API UClass* StaticClass<class UObjectPool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SEM2_Source_SEM2_ObjectPool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
