// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyEnemy;
#ifdef SEM2_MyObjectPool_generated_h
#error "MyObjectPool.generated.h already included, missing '#pragma once' in MyObjectPool.h"
#endif
#define SEM2_MyObjectPool_generated_h

#define SEM2_Source_SEM2_MyObjectPool_h_16_SPARSE_DATA
#define SEM2_Source_SEM2_MyObjectPool_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMovePooledObject); \
	DECLARE_FUNCTION(execSpawnPooledObject);


#define SEM2_Source_SEM2_MyObjectPool_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMovePooledObject); \
	DECLARE_FUNCTION(execSpawnPooledObject);


#define SEM2_Source_SEM2_MyObjectPool_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyObjectPool(); \
	friend struct Z_Construct_UClass_UMyObjectPool_Statics; \
public: \
	DECLARE_CLASS(UMyObjectPool, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SEM2"), NO_API) \
	DECLARE_SERIALIZER(UMyObjectPool)


#define SEM2_Source_SEM2_MyObjectPool_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMyObjectPool(); \
	friend struct Z_Construct_UClass_UMyObjectPool_Statics; \
public: \
	DECLARE_CLASS(UMyObjectPool, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SEM2"), NO_API) \
	DECLARE_SERIALIZER(UMyObjectPool)


#define SEM2_Source_SEM2_MyObjectPool_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyObjectPool(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyObjectPool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyObjectPool); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyObjectPool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyObjectPool(UMyObjectPool&&); \
	NO_API UMyObjectPool(const UMyObjectPool&); \
public:


#define SEM2_Source_SEM2_MyObjectPool_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyObjectPool(UMyObjectPool&&); \
	NO_API UMyObjectPool(const UMyObjectPool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyObjectPool); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyObjectPool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyObjectPool)


#define SEM2_Source_SEM2_MyObjectPool_h_16_PRIVATE_PROPERTY_OFFSET
#define SEM2_Source_SEM2_MyObjectPool_h_13_PROLOG
#define SEM2_Source_SEM2_MyObjectPool_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SEM2_Source_SEM2_MyObjectPool_h_16_PRIVATE_PROPERTY_OFFSET \
	SEM2_Source_SEM2_MyObjectPool_h_16_SPARSE_DATA \
	SEM2_Source_SEM2_MyObjectPool_h_16_RPC_WRAPPERS \
	SEM2_Source_SEM2_MyObjectPool_h_16_INCLASS \
	SEM2_Source_SEM2_MyObjectPool_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SEM2_Source_SEM2_MyObjectPool_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SEM2_Source_SEM2_MyObjectPool_h_16_PRIVATE_PROPERTY_OFFSET \
	SEM2_Source_SEM2_MyObjectPool_h_16_SPARSE_DATA \
	SEM2_Source_SEM2_MyObjectPool_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SEM2_Source_SEM2_MyObjectPool_h_16_INCLASS_NO_PURE_DECLS \
	SEM2_Source_SEM2_MyObjectPool_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEM2_API UClass* StaticClass<class UMyObjectPool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SEM2_Source_SEM2_MyObjectPool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
