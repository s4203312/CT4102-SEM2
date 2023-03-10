// Fill out your copyright notice in the Description page of Project Settings.


#include "First_Attempt.h"

// Sets default values
AFirst_Attempt::AFirst_Attempt()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//Gives object a transform  !!!Cant have a transform and a mesh component a the same time!!!
	//transform = CreateDefaultSubobject<USceneComponent>("Root Scene Component");
	//this -> SetRootComponent(transform);

	
	//Creates a mesh for actor
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	UStaticMesh* sphereMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'")).Object;

	Mesh->SetStaticMesh(sphereMesh);
	this->SetRootComponent(Mesh);


}

// Called when the game starts or when spawned
void AFirst_Attempt::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage( -1, 5.f, FColor::Red, input);
}

// Called every frame
void AFirst_Attempt::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

