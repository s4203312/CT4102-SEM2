// Fill out your copyright notice in the Description page of Project Settings.

#include "MyObjectPool.h"

// Sets default values for this component's properties
UMyObjectPool::UMyObjectPool()
{
}

// Called when the game starts
void UMyObjectPool::BeginPlay()
{
	Super::BeginPlay();

	//Checking if the subclass has been assigned
	if (PooledObjectSubclass != nullptr)
	{
		//Getting the world
		UWorld* const World = GetWorld();

		if (World != nullptr)
		{
			//Looping the pool
			for (int i = 0; i < PoolSize; i++)
			{
				//Creating a poolable actor for every position of memory in the pool size
				AMyEnemy* PoolableEnemy = World->SpawnActor<AMyEnemy>(PooledObjectSubclass, FVector().ZeroVector, FRotator().ZeroRotator);

				if (PoolableEnemy != nullptr)
				{
					//Setting actor be active, giving a index, binding the delegate to this object and adding it to the object pool
					PoolableEnemy->SetActive(false);
					PoolableEnemy->SetPoolIndex(i);
					MyObjectPool.Add(PoolableEnemy);
				}
			}
		}
	}
}

AMyEnemy* UMyObjectPool::SpawnPooledObject()
{
	//Looping for every poolable actor in the object pool
	for (AMyEnemy* PoolableEnemy : MyObjectPool)
	{
		//If the poolable actor is active
		if (PoolableEnemy != nullptr && !PoolableEnemy->IsActive()) {

			//Teleport actor into the scene, setting its lifespan, setting the actor as active(visable), add its index to the array
			PoolableEnemy->TeleportTo(FVector(0, 0, 0), FRotator(0, 0, 0));
			PoolableEnemy->SetActive(true);
			SpawnedObjectIndexes.Add(PoolableEnemy->GetPoolIndex());

			return PoolableEnemy;
		}
	}

	//What happens if all actors are currently active
	if (SpawnedObjectIndexes.Num() > 0)
	{
		//Gets the first object spawned in the scene, removing the object from the array, create temporary object 
		int PooledObjectIndex = SpawnedObjectIndexes[0];
		SpawnedObjectIndexes.Remove(PooledObjectIndex);
		AMyEnemy* PoolableEnemy = MyObjectPool[PooledObjectIndex];

		if (PoolableEnemy != nullptr)
		{
			//Setting the object to inactive
			PoolableEnemy->SetActive(false);

			//Teleporting it back to a new spot, restarting the lifespan, making visable again and adding it to the array
			PoolableEnemy->TeleportTo(FVector(0, 0, 0), FRotator(0, 0, 0));
			PoolableEnemy->SetActive(true);
			SpawnedObjectIndexes.Add(PoolableEnemy->GetPoolIndex());

			return PoolableEnemy;
		}
	}

	return nullptr;
}

void UMyObjectPool::MovePooledObject(float deltaTime)
{
	//Looping for every poolable actor in the object pool
	for (AMyEnemy* PoolableEnemy : MyObjectPool)
	{
		//If the poolable actor is active
		if (PoolableEnemy != nullptr && PoolableEnemy->IsActive()) {
			CurrentLocation = PoolableEnemy->GetActorLocation();
			CurrentLocation = FVector(CurrentLocation.X, CurrentLocation.Y + speed * deltaTime, CurrentLocation.Z);
			PoolableEnemy->SetActorLocation(CurrentLocation);
		}
	}
}

