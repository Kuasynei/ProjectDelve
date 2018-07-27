// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ProjectDelve_GameMode.h"
#include "UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "ProjectDelve_PlayerController.h"
#include "ProjectDelve_Character.h"
#include "Engine/World.h"

AProjectDelve_GameMode::AProjectDelve_GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProjectDelve_PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/ProjectDelve_CharacterBP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AProjectDelve_GameMode::BeginPlay()
{
	Super::BeginPlay();

	//Creating the main game's camera, storing it in a variable.
	//Access this camera from other scripts using "GetMainCamera()."
	FActorSpawnParameters spawnInfo;
	spawnInfo.Instigator = Instigator;
	spawnInfo.bNoFail = true;
	mainCamera = GetWorld()->SpawnActor<ACameraActor>(FVector::ZeroVector, FRotator::ZeroRotator, spawnInfo);
	mainCamera->SetActorLabel(TEXT("Main Camera"));

	// Create a camera boom...
	USpringArmComponent* cameraBoom = NewObject<USpringArmComponent>(mainCamera);
	cameraBoom->bAbsoluteRotation = true; // Don't want arm to rotate when character does
	cameraBoom->RelativeRotation = FRotator(-30.f, -135.f, 0.f);
	cameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	UCameraComponent* mainCameraComponent = mainCamera->GetCameraComponent();
	mainCameraComponent->RelativeLocation = FVector(-10000, 0, 0);
	mainCameraComponent->AttachTo(cameraBoom, USpringArmComponent::SocketName);
	mainCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
	mainCameraComponent->SetFieldOfView(10);

	UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetViewTarget(mainCamera);
	
}

ACameraActor* AProjectDelve_GameMode::GetMainCamera()
{
	return mainCamera;
}