// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Enemy.generated.h"

#include "Delegates/Delegate.h" 
#include "CoreMinimal.h" 
#include "GameFramework/Actor.h"

//Creates delegate that take one parameter
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPooledObjectDespawn, AEnemy*, EnemyActor);

UCLASS()
class SEM2_API AEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemy();

	//Created the variable for the delegate
	FOnPooledObjectDespawn OnPooledObjectDespawn;

	//Function that can be called in the blueprints for deactivating the object
	UFUNCTION(BlueprintCallable, Category = "Pooled Enemy")
		void Deactivate();

	//Functions for the enemy
	void SetActive(bool IsActive);
	void SetLifeSpan(float LifeTime);
	void SetPoolIndex(int Index);

	bool IsActive();
	int GetPoolIndex();

protected:

	//Variables for use in the functions above
	bool Active;
	float LifeSpan = 0.0f;
	int PoolIndex;

	//Timer for the lifetime
	FTimerHandle LifeSpanTimer;
};