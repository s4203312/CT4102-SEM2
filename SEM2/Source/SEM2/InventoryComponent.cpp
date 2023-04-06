// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "Coin.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	Capacity = 20;
}

bool UInventoryComponent::AddItem(class ACoin* Coin) 
{
	if (Coins.Num() >= Capacity || !Coin) {
				return false;
	}
	
	Coins.Add(Coin);
	return true;
}



//bool UInventoryComponent::AddItem(class UItem* Item)
//{
//	if (Items.Num() >= Capacity || !Item) {
//		return false;
//	}
//
//	Item->OwningInventory = this;
//	Item->World = GetWorld();
//	Items.Add(Item);
//
//	//Update UI
//	OnInventoryUpdated.Broadcast();
//
//	return true;
//}



