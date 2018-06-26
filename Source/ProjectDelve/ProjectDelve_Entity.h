// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ProjectDelve_Entity.generated.h"

UCLASS(Blueprintable)
class AProjectDelve_Entity : public ACharacter
{
	GENERATED_BODY()

public:
	AProjectDelve_Entity();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	virtual void YMovement(float val);
	virtual void XMovement(float val);
};

