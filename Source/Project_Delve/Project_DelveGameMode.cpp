// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Project_DelveGameMode.h"
#include "Project_DelvePlayerController.h"
#include "Project_DelveCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"

AProject_DelveGameMode::AProject_DelveGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProject_DelvePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AProject_DelveGameMode::BeginPlay()
{
	GetWorld()->GetFirstPlayerController()->SetViewTarget(GetOwner());
}