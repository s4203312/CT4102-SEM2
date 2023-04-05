// Fill out your copyright notice in the Description page of Project Settings.


#include "Coin.h"

// Sets default values
ACoin::ACoin()
{
	ItemDisplayName = FText::FromString("Item");
	UseActionText = FText::FromString("Use");

	//Creates a mesh for actor
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Coin"));
	UStaticMesh* sphereMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'")).Object;

	Mesh->SetStaticMesh(sphereMesh);
	this->SetRootComponent(Mesh);
}

// Called when the game starts or when spawned
void ACoin::BeginPlay()
{
	Super::BeginPlay();
	
}

