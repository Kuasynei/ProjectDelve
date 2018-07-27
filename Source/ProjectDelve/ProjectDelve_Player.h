// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectDelve_Character.h"
#include "ProjectDelve_Player.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTDELVE_API AProjectDelve_Player : public AProjectDelve_Character
{
	GENERATED_BODY()
	
public:
	
	AProjectDelve_Player();

	virtual void YAxisMovement(float val) override;
	virtual void XAxisMovement(float val) override;
	
	
};
