// Fill out your copyright notice in the Description page of Project Settings.

#include <string>
#include "iostream"
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

void AMyAI::SetState(string state)
{
	AIState = state;
}
void AMyAI::WalkState()
{
	CurrentLocation = this->GetActorLocation();
	//if(CurrentLocation.Y < )

	CurrentLocation = FVector(CurrentLocation.X, CurrentLocation.Y + speed * deltaTime, CurrentLocation.Z);
	this->SetActorLocation(CurrentLocation);
}
void AMyAI::RunState()
{

}
void AMyAI::ChaseState()
{

}
void AMyAI::StopState()
{
	Sleep(5000);
	SetState("walk");
}

void AMyAI::BeginPlay() {
	SetState("walk")
}

// Called every frame
void AMyAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	switch (AIState)
	{
		case "walk":
			WalkState();
			break;
		case "run":
			RunState();
			break;
		case "chase":
			ChaseState();
			break;
		case "stop":
			StopState();
			break;
		default:
			break;
	}
}

