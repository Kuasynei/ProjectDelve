// Fill out your copyright notice in the Description page of Project Settings.

#include "Project_DelvePlayer.h"

AProject_DelvePlayer::AProject_DelvePlayer()
{

}

//If we need to add specific movement functionality to the player only.
void AProject_DelvePlayer::YAxisMovement(float val)
{
	Super::YAxisMovement(val);
}

//If we need to add specific movement functionality to the player only.
void AProject_DelvePlayer::XAxisMovement(float val)
{
	Super::XAxisMovement(val);
}
