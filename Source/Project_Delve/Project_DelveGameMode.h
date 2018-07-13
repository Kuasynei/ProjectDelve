// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Project_DelveGameMode.generated.h"

UCLASS(minimalapi)
class AProject_DelveGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AProject_DelveGameMode();

	virtual void BeginPlay() override;
	virtual ACameraActor* GetMainCamera();

private:

	ACameraActor* mainCamera;
};



