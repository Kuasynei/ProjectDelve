// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ProjectDelve_GameMode.h"
#include "ProjectDelve_PlayerController.h"
#include "ProjectDelve_Entity.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"

AProjectDelve_GameMode::AProjectDelve_GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProjectDelve_PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AProjectDelve_GameMode::BeginPlay()
{
	GetWorld()->GetFirstPlayerController()->SetViewTarget(GetOwner());
}