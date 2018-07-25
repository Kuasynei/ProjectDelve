// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Project_DelvePlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Project_DelveCharacter.h"
#include "Engine/World.h"

AProject_DelvePlayerController::AProject_DelvePlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
	bAutoManageActiveCameraTarget = false;
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

//Calling movement on the character this controller is attached to.
void AProject_DelvePlayerController::YAxisStick(float val) {
	character->YAxisMovement(val);
}

//Calling movement on the character this controller is attached to.
void AProject_DelvePlayerController::XAxisStick(float val)
{
	character->XAxisMovement(val);
}

