// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAI.h"

// Sets default values
AMyAI::AMyAI()
{
	//Creates a mesh for actor
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	UStaticMesh* sphereMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'")).Object;

	Mesh->SetStaticMesh(sphereMesh);
	this->SetRootComponent(Mesh);
}

void AMyAI::SetState(int state)
{
	AIState = state;
}

void AMyAI::BeginPlay() {
	
}

// Called every frame
void AMyAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

