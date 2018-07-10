// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Project_DelvePlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Project_DelveCharacter.h"
#include "Engine/World.h"

AProject_DelvePlayerController::AProject_DelvePlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void AProject_DelvePlayerController::BeginPlay()
{
	character = Cast<AProject_DelveCharacter>(GetCharacter());
}

void AProject_DelvePlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	
}

void AProject_DelvePlayerController::SetupInputComponent()
{
	// Set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAxis("YAxisStick", this, &AProject_DelvePlayerController::YAxisStick);
	InputComponent->BindAxis("XAxisStick", this, &AProject_DelvePlayerController::XAxisStick);
}

void AProject_DelvePlayerController::YAxisStick(float val) {
	character->YAxisMovement(val);
}

void AProject_DelvePlayerController::XAxisStick(float val)
{
	character->XAxisMovement(val);
}

