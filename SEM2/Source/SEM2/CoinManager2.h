// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CoinManager2.h"

#include "GameFramework/Actor.h"
#include "CoinManager2.generated.h"

UCLASS()
class SEM2_API ACoinManager2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoinManager2();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int NumberOfCoins;

	void UpdateCoins();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
