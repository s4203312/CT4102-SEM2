// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"


//Blueprints will bind to this to update the UI
//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryUpdated);


UCLASS( /*ClassGroup = (Custom), meta = (BlueprintSpawnableComponent)*/ )
class SEM2_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	bool AddItem(class ACoin* Coin);
	
	UPROPERTY(VisibleAnywhere, Category = "Items")
	TArray<class ACoin*> Coins;
	
	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	int32 Capacity;
	




	/*bool AddItem(class UItem* UItem);

	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
		int32 Capacity;

	UPROPERTY(BlueprintAssignable, Category = "Inventory")
		FOnInventoryUpdated OnInventoryUpdated;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Items")
		TArray<class UItem*> Items;*/
};
