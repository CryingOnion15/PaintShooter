// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyMovement.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

enum Direction {
	North,
	South,
	East,
	West
};

Direction dir;
AActor* player;

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
	dir = North;

	
}


// Called every frame
void UEnemyMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	Move();
}

void UEnemyMovement::Move()
{
	if (timer + 5 > GetWorld()->TimeSeconds) {
		switch (dir) {
		case North:
			goNorth();
		case East:
			goEast();
		case South:
			goSouth();
		case West:
			goWest();
		}
	}
	else {
		switch (dir) {
		case North:
			dir = East;
			timer = GetWorld()->TimeSeconds;
		case East:
			dir = South;
			timer = GetWorld()->TimeSeconds;
		case South:
			dir = West;
			timer = GetWorld()->TimeSeconds;
		case West:
			dir = North();
			timer = GetWorld()->TimeSeconds;

		}
	}
}

void goNorth() {
	player->SetActorLocation(FVector(.2f, 0.f, 0.f));
}

void goEast() {
	player->SetActorLocation(FVector(0.f, .2f, 0.f));
}

void goSouth() {
	player->SetActorLocation(FVector(-.2f, 0.f, 0.f));
}

void goWest(){
	player->SetActorLocation(FVector(0.f, -.2f, 0.f));
}

