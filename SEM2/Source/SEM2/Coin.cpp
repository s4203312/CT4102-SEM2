// Fill out your copyright notice in the Description page of Project Settings.


#include "Coin.h"

#include "Components/StaticMeshComponent.h"
#include "InventoryComponent.h"

// Sets default values
ACoin::ACoin()
{
	//ItemDisplayName = FText::FromString("Item");
	//UseActionText = FText::FromString("Use");

	//Creates root for object
	Root = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));
	RootComponent = Root;

	//Creates a editable mesh for actor
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->AttachTo(Root);

	//Creates collison box
	PrimaryActorTick.bCanEverTick = false;
	Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	Collider->SetupAttachment(RootComponent, NAME_None);
	Collider->SetGenerateOverlapEvents(true);
	Collider->SetBoxExtent(FVector(75.f, 75.f, 75.f), false);
	Collider->SetCollisionProfileName(TEXT("Trigger"), false);
}

// Called when the game starts or when spawned
void ACoin::BeginPlay()
{
	Super::BeginPlay();

	//Calling the collider when an overlap occurs
	Collider->OnComponentBeginOverlap.AddDynamic(this, &ACoin::OnComponentOverlap);


	/*if (MyCoinClass != nullptr)
	{
		UWorld* World = GetWorld();
		if (World != nullptr)
		{
			FTransform SpawnTransform = GetActorTransform();

			ACoin* SpawnedActor = World->SpawnActor<ACoin>(MyCoinClass, SpawnTransform);

			if (SpawnedActor != nullptr)
			{
				UE_LOG(LogTemp, Log, TEXT("Spawned successfully! New Actor: %s"), *SpawnedActor->GetName());
			}
		}
	}*/
}

//Checking if anthing has collided with it
void ACoin::OnComponentOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) 
{ 
	ACoin::Destroy();
	//UInventoryComponent::AddItem(this);
}
