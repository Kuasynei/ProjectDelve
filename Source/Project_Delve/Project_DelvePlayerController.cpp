// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Project_DelvePlayerController.h"
#include "AI/Navigation/NavigationSystem.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Project_DelveCharacter.h"
#include "Engine/World.h"

AProject_DelvePlayerController::AProject_DelvePlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
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
	if (character != NULL && val != 0.0f)
	{
		// find out which way is forward
		FRotator Rotation = GetControlRotation();

		// Limit pitch when walking or falling
		if (character->GetCharacterMovement()->IsMovingOnGround() || character->GetCharacterMovement()->IsFalling())
		{
			Rotation.Pitch = 0.0f;
		}

		// add movement in that direction
		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::X);
		character->AddMovementInput(Direction, val);

		DrawDebugLine(
			GetWorld(),
			character->GetTransform().GetTranslation(),
			Direction * val,
			FColor(255, 0, 0),
			false, -1, 0,
			15
		);
	}
}

void AProject_DelvePlayerController::XAxisStick(float val)
{
	if ((character != NULL) && (val != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = GetControlRotation();
		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Y);
		// add movement in that direction
		character->AddMovementInput(Direction, val);
	}
}

