// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Including the enemy header file
#include "Enemy.h"
#include "ObjectPool.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SEM2_API UObjectPool : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UObjectPool();

	//Can be used as a node in blueprints
	UFUNCTION(BlueprintCallable, Category = "Object Pool")
		AEnemy* SpawnPooledObject();

	//Creates a subclass of enemies
	UPROPERTY(EditAnywhere, Category = "Object Pool")
		TSubclassOf<class AEnemy> PooledObjectSubclass;

	//Creates a size of the pool
	UPROPERTY(EditAnywhere, Category = "Object Pool")
		int PoolSize = 20;

	//Creates a lifespan of the enemy
	UPROPERTY(EditAnywhere, Category = "Object Pool")
		float PooledObjectLifeSpan = 0.0f;

	//Function that is linked to the delegate
	UFUNCTION()
		void OnPooledObjectDespawn(AEnemy * EnemyActor);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	//Creates arrays for the pooled objects
	TArray<AEnemy*> ObjectPool;
	TArray<int> SpawnedObjectIndexes;
};