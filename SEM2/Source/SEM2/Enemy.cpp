// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"

// Sets default values
AEnemy::AEnemy()
{
}

//Function for setting active 
void AEnemy::SetActive(bool IsActive)
{
	Active = IsActive;
	SetActorHiddenInGame(!IsActive);
	//Sets a timer that is the length of lifespan and calls Deactivate when timer is finished
	GetWorldTimerManager().SetTimer(LifeSpanTimer, this, &AEnemy::Deactivate, LifeSpan, false);
}

//Function for setting the lifespan of an object
void AEnemy::SetLifeSpan(float LifeTime)
{
	LifeSpan = LifeTime;
}

//Function for setting the poolindex of an object
void AEnemy::SetPoolIndex(int Index)
{
	PoolIndex = Index;
}

void AEnemy::Deactivate()
{
	SetActive(false);
	//Clearing all timers and calling the despawn delegate for this object
	GetWorldTimerManager().ClearAllTimersForObject(this);
	OnPooledEnemyDespawn.Broadcast(this);
}

//Function for finding what Active is
bool AEnemy::IsActive()
{
	return Active;
}

//Function for finding what the poolindex is
int AEnemy::GetPoolIndex()
{
	return PoolIndex;
}