// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <string>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyAI.generated.h"

UCLASS()
class SEM2_API AMyAI : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyAI();

	//Functions
	void SetState(string state);

	void WalkState();
	void RunState();
	void ChaseState();
	void StopState();


	//Creating mesh for enemy 
	UStaticMeshComponent* Mesh;

	FVector CurrentLocation;

protected:
	virtual void BeginPlay() override;

	//Variables for use in the functions above
	string AIState;

public:
	virtual void Tick(float DeltaTime) override;
};