// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEM2_MyEnemy_generated_h
#error "MyEnemy.generated.h already included, missing '#pragma once' in MyEnemy.h"
#endif
#define SEM2_MyEnemy_generated_h

#define SEM2_Source_SEM2_MyEnemy_h_12_SPARSE_DATA
#define SEM2_Source_SEM2_MyEnemy_h_12_RPC_WRAPPERS
#define SEM2_Source_SEM2_MyEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SEM2_Source_SEM2_MyEnemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyEnemy(); \
	friend struct Z_Construct_UClass_AMyEnemy_Statics; \
public: \
	DECLARE_CLASS(AMyEnemy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SEM2"), NO_API) \
	DECLARE_SERIALIZER(AMyEnemy)


#define SEM2_Source_SEM2_MyEnemy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyEnemy(); \
	friend struct Z_Construct_UClass_AMyEnemy_Statics; \
public: \
	DECLARE_CLASS(AMyEnemy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SEM2"), NO_API) \
	DECLARE_SERIALIZER(AMyEnemy)


#define SEM2_Source_SEM2_MyEnemy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyEnemy(AMyEnemy&&); \
	NO_API AMyEnemy(const AMyEnemy&); \
public:


#define SEM2_Source_SEM2_MyEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyEnemy(AMyEnemy&&); \
	NO_API AMyEnemy(const AMyEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyEnemy)


#define SEM2_Source_SEM2_MyEnemy_h_12_PRIVATE_PROPERTY_OFFSET
#define SEM2_Source_SEM2_MyEnemy_h_9_PROLOG
#define SEM2_Source_SEM2_MyEnemy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SEM2_Source_SEM2_MyEnemy_h_12_PRIVATE_PROPERTY_OFFSET \
	SEM2_Source_SEM2_MyEnemy_h_12_SPARSE_DATA \
	SEM2_Source_SEM2_MyEnemy_h_12_RPC_WRAPPERS \
	SEM2_Source_SEM2_MyEnemy_h_12_INCLASS \
	SEM2_Source_SEM2_MyEnemy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SEM2_Source_SEM2_MyEnemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SEM2_Source_SEM2_MyEnemy_h_12_PRIVATE_PROPERTY_OFFSET \
	SEM2_Source_SEM2_MyEnemy_h_12_SPARSE_DATA \
	SEM2_Source_SEM2_MyEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SEM2_Source_SEM2_MyEnemy_h_12_INCLASS_NO_PURE_DECLS \
	SEM2_Source_SEM2_MyEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEM2_API UClass* StaticClass<class AMyEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SEM2_Source_SEM2_MyEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
