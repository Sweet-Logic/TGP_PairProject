// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TGP_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TGP_PROJECT_API ATGP_PlayerController : public APlayerController
{
	GENERATED_BODY()
	



public:
	virtual void SetupInputComponent() override;
	virtual void BeginPlay() override;

	void Pause();
	void Unpause();
	void TogglePause();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void DisplayPauseMenu(bool Show);
	
};
