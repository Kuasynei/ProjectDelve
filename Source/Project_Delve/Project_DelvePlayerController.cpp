// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Project_DelvePlayerController.h"
#include "AI/Navigation/NavigationSystem.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Project_DelveCharacter.h"
#include "Project_DelveGameMode.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "Engine.h"

AProject_DelvePlayerController::AProject_DelvePlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;

	// Creating a camera boom.
	cameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	cameraBoom->SetupAttachment(RootComponent);
	cameraBoom->bAbsoluteRotation = true;
	cameraBoom->TargetArmLength = 3000.f;
	cameraBoom->RelativeRotation = FRotator(-30.f, -135.f, 0.f);
	cameraBoom->bDoCollisionTest = false;

	// Create a camera.
	mainCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCamera"));
	mainCamera->SetupAttachment(cameraBoom, USpringArmComponent::SocketName);
	mainCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
	mainCamera->SetFieldOfView(30);
}

void AProject_DelvePlayerController::BeginPlay()
{
	player = Cast<AProject_DelveCharacter>(GetCharacter());
	SetViewTarget((AProject_DelveGameMode*)GetWorld()->GetAuthGameMode()->GetOwner());
	
}

void AProject_DelvePlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
}

void AProject_DelvePlayerController::SetupInputComponent()
{
	// Set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAxis("YInput", this, &AProject_DelvePlayerController::YInput);
	InputComponent->BindAxis("XInput", this, &AProject_DelvePlayerController::XInput);
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, TEXT("Input setup successful."));
}

void AProject_DelvePlayerController::YInput(float val) {
	player->YMovement(val);
}

void AProject_DelvePlayerController::XInput(float val)
{
	player->XMovement(val);
}

