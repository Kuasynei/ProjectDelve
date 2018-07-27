// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectDelve_Player.h"

AProjectDelve_Player::AProjectDelve_Player()
{

}

//If we need to add specific movement functionality to the player only.
void AProjectDelve_Player::YAxisMovement(float val)
{
	Super::YAxisMovement(val);
}

//If we need to add specific movement functionality to the player only.
void AProjectDelve_Player::XAxisMovement(float val)
{
	Super::XAxisMovement(val);
}
