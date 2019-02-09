// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PaintShooterGameMode.h"
#include "PaintShooterHUD.h"
#include "PaintShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

APaintShooterGameMode::APaintShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APaintShooterHUD::StaticClass();
}
