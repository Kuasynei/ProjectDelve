// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Project_DelveCharacter.generated.h"

UCLASS(Blueprintable)
class AProject_DelveCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AProject_DelveCharacter();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	virtual void YMovement(float val);
	virtual void XMovement(float val);
};

