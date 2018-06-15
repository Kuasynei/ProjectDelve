// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Project_DelveCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Project_DelvePlayerController.generated.h"

UCLASS()
class AProject_DelvePlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	AProject_DelvePlayerController();

	//Creating a main camera.
	//Should camera require additional functionality, create a new class.
	USpringArmComponent* cameraBoom;
	UCameraComponent* mainCamera;

protected:

	AProject_DelveCharacter* player;

	// Begin PlayerController interface
	virtual void BeginPlay() override;
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;

	UFUNCTION()
	void YInput(float val);

	UFUNCTION()
	void XInput(float val);
};


