// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyMovement.h"
#include "Engine/World.h"

enum Direction {
	North,
	South,
	East,
	West
};

Direction dir;

// Sets default values for this component's properties
UEnemyMovement::UEnemyMovement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEnemyMovement::BeginPlay()
{
	Super::BeginPlay();

	// ...
	timer = GetWorld()->TimeSeconds;
	dir = Direction.North;

	
}


// Called every frame
void UEnemyMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UEnemyMovement::Move()
{
	if (timer + 5 > GetWorld()->TimeSeconds) {

	}
}

