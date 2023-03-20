// Fill out your copyright notice in the Description page of Project Settings.

#include "ObjectPool.h"

// Sets default values for this component's properties
UObjectPool::UObjectPool()
{
}

// Called when the game starts
void UObjectPool::BeginPlay()
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
				AEnemy* PoolableEnemy = World->SpawnActor<AEnemy>(PooledObjectSubclass, FVector().ZeroVector, FRotator().ZeroRotator);

				if(PoolableEnemy != nullptr) 
				{
					//Setting actor be active, giving a index, binding the delegate to this object and adding it to the object pool
					PoolableEnemy->SetActive(false);
					PoolableEnemy->SetPoolIndex(i);
					PoolableEnemy->OnPooledEnemyDespawn.AddDynamic(this, &UObjectPool::OnPooledEnemyDespawn);
					ObjectPool.Add(PoolableEnemy);
				}
			}
		}
	}
}

AEnemy* UObjectPool::SpawnPooledObject()
{
	//Looping for every poolable actor in the object pool
	for (AEnemy* PoolableEnemy : ObjectPool) 
	{
		//If the poolable actor is active
		if (PoolableEnemy != nullptr && !PoolableEnemy->IsActive()) {

			//Teleport actor into the scene, setting its lifespan, setting the actor as active(visable), add its index to the array
			PoolableEnemy->TeleportTo(FVector(0, 0, 0), FRotator(0, 0, 0));
			PoolableEnemy->SetLifeSpan(PooledObjectLifeSpan);
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
		AEnemy* PoolableEnemy = ObjectPool[PooledObjectIndex];

		if (PoolableEnemy != nullptr) 
		{
			//Setting the object to inactive
			PoolableEnemy->SetActive(false);
			
			//Teleporting it back to a new spot, restarting the lifespan, making visable again and adding it to the array
			PoolableEnemy->TeleportTo(FVector(0, 0, 0), FRotator(0, 0, 0));
			PoolableEnemy->SetLifeSpan(PooledObjectLifeSpan);
			PoolableEnemy->SetActive(true);
			SpawnedObjectIndexes.Add(PoolableEnemy->GetPoolIndex());

			return PoolableEnemy;
		}
	}
	
	return nullptr;
}

//Assigned to the delegate
void UObjectPool::OnPooledEnemyDespawn(AEnemy* EnemyActor)
{
	//Removes actor from the array
	SpawnedObjectIndexes.Remove(EnemyActor-> GetPoolIndex());
}