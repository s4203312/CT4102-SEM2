// Fill out your copyright notice in the Description page of Project Settings.


#include "MyEnemy.h"

// Sets default values
AMyEnemy::AMyEnemy()
{
	//Creates a mesh for actor
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	UStaticMesh* sphereMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'")).Object;

	Mesh->SetStaticMesh(sphereMesh);
	this->SetRootComponent(Mesh);
}

//Value to set if object can be seen in game
void AMyEnemy::SetActive(bool IsActive) 
{
	Active = IsActive;
	SetActorHiddenInGame(!Active);
}

//Value of the index of object in pool
void AMyEnemy::SetPoolIndex(int Index)
{
	PoolIndex = Index;
}

//Returns if object is active or not
bool AMyEnemy::IsActive() 
{
	return Active;
}

//Returns the index of the object in the pool
int AMyEnemy::GetPoolIndex() 
{
	return PoolIndex;
}



