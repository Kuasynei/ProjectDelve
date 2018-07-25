// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Project_DelveCharacter.h"
#include "Project_DelvePlayer.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTDELVE_API AProject_DelvePlayer : public AProject_DelveCharacter
{
	GENERATED_BODY()
	
public:
	
	AProject_DelvePlayer();

	virtual void YAxisMovement(float val) override;
	virtual void XAxisMovement(float val) override;
	
	
};
