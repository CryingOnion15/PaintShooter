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
FVector* north = new FVector(1.f, 0.f, 0.f);
FVector* south = new FVector(-1.f, 0.f, 0.f);
FVector* east = new FVector(0.f, 1.f, 0.f);
FVector* west = new FVector(0.f, -1.f, 0.f);

void goNorth();
void goSouth();
void goEast();
void goWest();

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
	//Move();
	//UE_LOG(LogTemp, Warning, TEXT("HI"))
}

/*void UEnemyMovement::Move()
{
	//UE_LOG(LogTemp,Warning, TEXT("hello"))
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
			dir = North;
			timer = GetWorld()->TimeSeconds;

		}
	}
}*/

/*void goNorth() {
	player->;
}

void goEast() {
	player->SetActorLocation(player->GetActorLocation() + *east);
}

void goSouth() {
	player->SetActorLocation(player->GetActorLocation() + *south);
}

void goWest(){
	player->SetActorLocation(player->GetActorLocation() + *west);
}*/

