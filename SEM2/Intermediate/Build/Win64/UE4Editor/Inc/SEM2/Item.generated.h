// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEM2_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define SEM2_Item_generated_h

#define SEM2_Source_SEM2_Item_h_15_SPARSE_DATA
#define SEM2_Source_SEM2_Item_h_15_RPC_WRAPPERS
#define SEM2_Source_SEM2_Item_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SEM2_Source_SEM2_Item_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItem(); \
	friend struct Z_Construct_UClass_UItem_Statics; \
public: \
	DECLARE_CLASS(UItem, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SEM2"), NO_API) \
	DECLARE_SERIALIZER(UItem)


#define SEM2_Source_SEM2_Item_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUItem(); \
	friend struct Z_Construct_UClass_UItem_Statics; \
public: \
	DECLARE_CLASS(UItem, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SEM2"), NO_API) \
	DECLARE_SERIALIZER(UItem)


#define SEM2_Source_SEM2_Item_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItem(UItem&&); \
	NO_API UItem(const UItem&); \
public:


#define SEM2_Source_SEM2_Item_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItem(UItem&&); \
	NO_API UItem(const UItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItem)


#define SEM2_Source_SEM2_Item_h_15_PRIVATE_PROPERTY_OFFSET
#define SEM2_Source_SEM2_Item_h_12_PROLOG
#define SEM2_Source_SEM2_Item_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SEM2_Source_SEM2_Item_h_15_PRIVATE_PROPERTY_OFFSET \
	SEM2_Source_SEM2_Item_h_15_SPARSE_DATA \
	SEM2_Source_SEM2_Item_h_15_RPC_WRAPPERS \
	SEM2_Source_SEM2_Item_h_15_INCLASS \
	SEM2_Source_SEM2_Item_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SEM2_Source_SEM2_Item_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SEM2_Source_SEM2_Item_h_15_PRIVATE_PROPERTY_OFFSET \
	SEM2_Source_SEM2_Item_h_15_SPARSE_DATA \
	SEM2_Source_SEM2_Item_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SEM2_Source_SEM2_Item_h_15_INCLASS_NO_PURE_DECLS \
	SEM2_Source_SEM2_Item_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEM2_API UClass* StaticClass<class UItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SEM2_Source_SEM2_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
