// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyEnemy.generated.h"

UCLASS()
class SEM2_API AMyEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyEnemy();

	//Functions for the enemy
	void SetActive(bool IsActive);
	void SetPoolIndex(int Index);

	bool IsActive();
	int GetPoolIndex();

	//Creating mesh for enemy 
	UStaticMeshComponent* Mesh;

protected:

	//Variables for use in the functions above
	bool Active;
	int PoolIndex;
};
