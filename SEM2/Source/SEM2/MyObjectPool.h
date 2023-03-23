// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
//Includes the enemy header file so I can access their functions 
#include "MyEnemy.h"
#include "MyObjectPool.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SEM2_API UMyObjectPool : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UMyObjectPool();

	//Can be used as a node in blueprints
	UFUNCTION(BlueprintCallable, Category = "Object Pool")
		AMyEnemy* SpawnPooledObject();

	//Can be used as a node in blueprints
	UFUNCTION(BlueprintCallable, Category = "Object Pool")
		void MovePooledObject(float deltaTime);

	//Creates a subclass of enemies
	TSubclassOf<AMyEnemy> PooledObjectSubclass = AMyEnemy::StaticClass();

	int PoolSize = 5;

	//Enemy movement
	FVector CurrentLocation;

	UPROPERTY(EditAnywhere, Category = "Enemy Movement")
	float speed = 100;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	//Creates arrays for the pooled objects
	TArray<AMyEnemy*> MyObjectPool;
	TArray<int> SpawnedObjectIndexes;	
};
