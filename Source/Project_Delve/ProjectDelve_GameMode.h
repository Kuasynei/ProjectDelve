// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/GameModeBase.h"
#include "ProjectDelve_GameMode.generated.h"

UCLASS(minimalapi)
class AProjectDelve_GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AProjectDelve_GameMode();
	virtual void BeginPlay() override;
};



