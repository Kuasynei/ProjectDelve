// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ProjectDelve_Character.generated.h"

UCLASS(Blueprintable)
class AProjectDelve_Character : public ACharacter
{
	GENERATED_BODY()

public:
	AProjectDelve_Character();

	// Called every frame.
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	virtual void YAxisMovement(float val);
	virtual void XAxisMovement(float val);

private:

	//A reference to the main game camera, created and stored in the main GameMode script.
	ACameraActor* mainCamera;
};