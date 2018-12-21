// Fill out your copyright notice in the Description page of Project Settings.

#include "TGP_PlayerController.h"
void ATGP_PlayerController::BeginPlay()
{
	SetTickableWhenPaused(true);
}


void ATGP_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	FInputActionBinding& toggle = InputComponent->BindAction("PauseAction", IE_Pressed, this, &ATGP_PlayerController::TogglePause);
	toggle.bExecuteWhenPaused = true;

}


void ATGP_PlayerController::Pause()
{
	SetPause(true);
	SetInputMode(FInputModeGameAndUI());
}


void ATGP_PlayerController::Unpause()
{
	SetPause(false);
	SetInputMode(FInputModeGameOnly());
}

void ATGP_PlayerController::TogglePause()
{
	SetPause(!IsPaused());
	DisplayPauseMenu(IsPaused());
	SetInputMode(FInputModeGameAndUI());
}