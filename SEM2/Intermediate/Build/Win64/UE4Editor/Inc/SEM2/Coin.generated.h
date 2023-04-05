// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEM2_Coin_generated_h
#error "Coin.generated.h already included, missing '#pragma once' in Coin.h"
#endif
#define SEM2_Coin_generated_h

#define SEM2_Source_SEM2_Coin_h_12_SPARSE_DATA
#define SEM2_Source_SEM2_Coin_h_12_RPC_WRAPPERS
#define SEM2_Source_SEM2_Coin_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SEM2_Source_SEM2_Coin_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoin(); \
	friend struct Z_Construct_UClass_ACoin_Statics; \
public: \
	DECLARE_CLASS(ACoin, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SEM2"), NO_API) \
	DECLARE_SERIALIZER(ACoin)


#define SEM2_Source_SEM2_Coin_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACoin(); \
	friend struct Z_Construct_UClass_ACoin_Statics; \
public: \
	DECLARE_CLASS(ACoin, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SEM2"), NO_API) \
	DECLARE_SERIALIZER(ACoin)


#define SEM2_Source_SEM2_Coin_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACoin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoin(ACoin&&); \
	NO_API ACoin(const ACoin&); \
public:


#define SEM2_Source_SEM2_Coin_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoin(ACoin&&); \
	NO_API ACoin(const ACoin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACoin)


#define SEM2_Source_SEM2_Coin_h_12_PRIVATE_PROPERTY_OFFSET
#define SEM2_Source_SEM2_Coin_h_9_PROLOG
#define SEM2_Source_SEM2_Coin_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SEM2_Source_SEM2_Coin_h_12_PRIVATE_PROPERTY_OFFSET \
	SEM2_Source_SEM2_Coin_h_12_SPARSE_DATA \
	SEM2_Source_SEM2_Coin_h_12_RPC_WRAPPERS \
	SEM2_Source_SEM2_Coin_h_12_INCLASS \
	SEM2_Source_SEM2_Coin_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SEM2_Source_SEM2_Coin_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SEM2_Source_SEM2_Coin_h_12_PRIVATE_PROPERTY_OFFSET \
	SEM2_Source_SEM2_Coin_h_12_SPARSE_DATA \
	SEM2_Source_SEM2_Coin_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SEM2_Source_SEM2_Coin_h_12_INCLASS_NO_PURE_DECLS \
	SEM2_Source_SEM2_Coin_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEM2_API UClass* StaticClass<class ACoin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SEM2_Source_SEM2_Coin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
