// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ProjectDelve_PlayerController.h"
#include "AI/Navigation/NavigationSystem.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "ProjectDelve_Entity.h"
#include "ProjectDelve_GameMode.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "Engine.h"

AProjectDelve_PlayerController::AProjectDelve_PlayerController()
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

void AProjectDelve_PlayerController::BeginPlay()
{
	player = Cast<AProjectDelve_Entity>(GetCharacter());
	SetViewTarget((AProjectDelve_GameMode*)GetWorld()->GetAuthGameMode()->GetOwner());
	
}

void AProjectDelve_PlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
}

void AProjectDelve_PlayerController::SetupInputComponent()
{
	// Set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAxis("YInput", this, &AProjectDelve_PlayerController::YInput);
	InputComponent->BindAxis("XInput", this, &AProjectDelve_PlayerController::XInput);
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, TEXT("Input setup successful."));
}

void AProjectDelve_PlayerController::YInput(float val) {
	player->YMovement(val);
}

void AProjectDelve_PlayerController::XInput(float val)
{
	player->XMovement(val);
}

