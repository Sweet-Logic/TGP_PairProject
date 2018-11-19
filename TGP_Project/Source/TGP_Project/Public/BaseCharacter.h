// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseCharacter.generated.h"

class UPaperFlipbookComponent;
class USceneComponent;
class UArrowComponent;

/**
 * 
 */
UCLASS()
class TGP_PROJECT_API ABaseCharacter : public APawn
{
	GENERATED_BODY()

public:
	ABaseCharacter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float deltaSeconds) override;
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

	UPaperFlipbookComponent* Sprite;
	UArrowComponent* direction;


	void MoveUp(float value);
	void MoveRight(float value);

	void HandleMovement(float DeltaTime);


	FVector2D MovementInput;
	UPROPERTY(EditAnywhere, Category = "Movement Settings")
		float MovementSpeed;


	
	
};
