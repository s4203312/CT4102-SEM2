// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class SEM2_API CoinManager
{
public:
	CoinManager();
	
	UPROPERTY(EditAnywhere)
	int NumberCoins;

	UFUNCTION(BlueprintCallable)
	void UpdateCoins();
};
