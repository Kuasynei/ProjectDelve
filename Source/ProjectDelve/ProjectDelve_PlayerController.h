// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ProjectDelve_Entity.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "ProjectDelve_PlayerController.generated.h"

UCLASS()
class AProjectDelve_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	AProjectDelve_PlayerController();

	//Creating a main camera.
	//Should camera require additional functionality, create a new class.
	USpringArmComponent* cameraBoom;
	UCameraComponent* mainCamera;

protected:

	AProjectDelve_Entity* player;

	// Begin PlayerController interface
	virtual void BeginPlay() override;
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;

	UFUNCTION()
	void YInput(float val);

	UFUNCTION()
	void XInput(float val);
};


