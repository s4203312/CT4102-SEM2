// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/BoxComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Coin.generated.h"

UCLASS()
class SEM2_API ACoin : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoin();
	
	UPROPERTY()
	USceneComponent* Root;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* Collider;

	UFUNCTION(BlueprintCallable)
	void OnComponentOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	
	
	//virtual class UWorld* GetWorld() const { return World; };

	//UPROPERTY(Transient)
	//	class UWorld* World;

	////The text for using the item. Etc (Equip, Eat)
	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	//	FText UseActionText;

	////The mesh to display for this item
	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	//	class UStaticMesh* MeshImage;

	////The thumbnail for this item
	//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item")
	//	class UTexture2D* Thumbnail;

	////The display name for this item in the inventory
	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	//	FText ItemDisplayName;

	////An optional description for the item
	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item", meta = (MultiLine = true))
	//	FText ItemDescription;

	////The inventory that owns this item
	//class UInventoryComponent* OwningInventory;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
