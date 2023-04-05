// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "Item.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	Capacity = 20;
}

bool UInventoryComponent::AddItem(class UItem* Item)
{
	if (Items.Num() >= Capacity || !Item) {
		return false;
	}

	Item->OwningInventory = this;
	Item->World = GetWorld();
	Items.Add(Item);

	//Update UI
	OnInventoryUpdated.Broadcast();

	return true;
}



