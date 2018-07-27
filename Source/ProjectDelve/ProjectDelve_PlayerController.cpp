// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ProjectDelve_PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "ProjectDelve_Character.h"
#include "Engine/World.h"

AProjectDelve_PlayerController::AProjectDelve_PlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
	bAutoManageActiveCameraTarget = false;
}

void AProjectDelve_PlayerController::BeginPlay()
{
	character = Cast<AProjectDelve_Character>(GetCharacter());
}

void AProjectDelve_PlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	
}

void AProjectDelve_PlayerController::SetupInputComponent()
{
	// Set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAxis("YAxisStick", this, &AProjectDelve_PlayerController::YAxisStick);
	InputComponent->BindAxis("XAxisStick", this, &AProjectDelve_PlayerController::XAxisStick);
}

//Calling movement on the character this controller is attached to.
void AProjectDelve_PlayerController::YAxisStick(float val) {
	character->YAxisMovement(val);
}

//Calling movement on the character this controller is attached to.
void AProjectDelve_PlayerController::XAxisStick(float val)
{
	character->XAxisMovement(val);
}

