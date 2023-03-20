// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AEnemy;
#ifdef SEM2_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define SEM2_Enemy_generated_h

#define SEM2_Source_SEM2_Enemy_h_8_DELEGATE \
struct _Script_SEM2_eventOnPooledEnemyDespawn_Parms \
{ \
	AEnemy* EnemyActor; \
}; \
static inline void FOnPooledEnemyDespawn_DelegateWrapper(const FMulticastScriptDelegate& OnPooledEnemyDespawn, AEnemy* EnemyActor) \
{ \
	_Script_SEM2_eventOnPooledEnemyDespawn_Parms Parms; \
	Parms.EnemyActor=EnemyActor; \
	OnPooledEnemyDespawn.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SEM2_Source_SEM2_Enemy_h_13_SPARSE_DATA
#define SEM2_Source_SEM2_Enemy_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeactivate);


#define SEM2_Source_SEM2_Enemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeactivate);


#define SEM2_Source_SEM2_Enemy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SEM2"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define SEM2_Source_SEM2_Enemy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SEM2"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define SEM2_Source_SEM2_Enemy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define SEM2_Source_SEM2_Enemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define SEM2_Source_SEM2_Enemy_h_13_PRIVATE_PROPERTY_OFFSET
#define SEM2_Source_SEM2_Enemy_h_10_PROLOG
#define SEM2_Source_SEM2_Enemy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SEM2_Source_SEM2_Enemy_h_13_PRIVATE_PROPERTY_OFFSET \
	SEM2_Source_SEM2_Enemy_h_13_SPARSE_DATA \
	SEM2_Source_SEM2_Enemy_h_13_RPC_WRAPPERS \
	SEM2_Source_SEM2_Enemy_h_13_INCLASS \
	SEM2_Source_SEM2_Enemy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SEM2_Source_SEM2_Enemy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SEM2_Source_SEM2_Enemy_h_13_PRIVATE_PROPERTY_OFFSET \
	SEM2_Source_SEM2_Enemy_h_13_SPARSE_DATA \
	SEM2_Source_SEM2_Enemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SEM2_Source_SEM2_Enemy_h_13_INCLASS_NO_PURE_DECLS \
	SEM2_Source_SEM2_Enemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEM2_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SEM2_Source_SEM2_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
