// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"

#include "BasePlayer.generated.h"

class USpringArmComponent;
class UCameraComponent;

/**
 * 
 */
UCLASS()
class TGP_PROJECT_API ABasePlayer : public ABaseCharacter//, public APawn
{
	GENERATED_BODY()
	
public:
	ABasePlayer();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float deltaSeconds) override;

	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

	USpringArmComponent* SpringArm;
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float OrthoWidth = 1024;
	
	
};
