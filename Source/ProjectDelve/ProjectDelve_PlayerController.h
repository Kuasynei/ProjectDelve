// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "ProjectDelve_Character.h"
#include "ProjectDelve_PlayerController.generated.h"

UCLASS()
class AProjectDelve_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AProjectDelve_PlayerController();

protected:

	AProjectDelve_Character* character;

	// Begin PlayerController interface
	virtual void BeginPlay() override;
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;

	UFUNCTION()
	void YAxisStick(float val);

	UFUNCTION()
	void XAxisStick(float val);
};
