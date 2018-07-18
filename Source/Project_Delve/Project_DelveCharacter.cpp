// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Project_DelveCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraComponent.h"
#include "Project_DelveGameMode.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"

AProject_DelveCharacter::AProject_DelveCharacter()
{
	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	
	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

}

void AProject_DelveCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	mainCamera = Cast<AProject_DelveGameMode>(GetWorld()->GetAuthGameMode())->GetMainCamera();
}

void AProject_DelveCharacter::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

	
}

//Called from the Player Controller if needed.
void AProject_DelveCharacter::YAxisMovement(float val)
{
	if (val != 0.0f)
	{
		//Get the camera's forward vector. 
		//Project it onto the flat ground plane, 
		//that direction is now "Up" on the screen.
		FVector cameraForward = mainCamera->GetCameraComponent()->GetComponentRotation().RotateVector(FVector::ForwardVector);
		FVector newWorldForward = FVector::VectorPlaneProject(cameraForward, FVector::UpVector);
		AddMovementInput(newWorldForward, val);

	}
}

//Called from the Player Controller if needed.
void AProject_DelveCharacter::XAxisMovement(float val)
{
	if (val != 0.0f)
	{
		//Get the camera's forward vector. 
		//Project it onto the flat ground plane, 
		//that direction is now "Up" on the screen.
		FVector cameraRight = mainCamera->GetCameraComponent()->GetComponentRotation().RotateVector(FVector::RightVector);
		FVector newWorldRight = FVector::VectorPlaneProject(cameraRight, FVector::UpVector);
		AddMovementInput(newWorldRight, val);
	}
}