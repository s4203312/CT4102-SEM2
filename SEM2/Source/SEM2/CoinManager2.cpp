// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinManager2.h"

// Sets default values
ACoinManager2::ACoinManager2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	NumberOfCoins = 0;
}

// Called when the game starts or when spawned
void ACoinManager2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACoinManager2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACoinManager2::UpdateCoins() {
	NumberOfCoins += 1;
}

