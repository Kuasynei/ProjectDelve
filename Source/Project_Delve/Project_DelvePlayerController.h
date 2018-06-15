// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Project_DelvePlayerController.generated.h"

UCLASS()
class AProject_DelvePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AProject_DelvePlayerController();

protected:

	ACharacter* character;

	// Begin PlayerController interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;

	UFUNCTION()
	void YAxisStick(float val);

	UFUNCTION()
	void XAxisStick(float val);
};


