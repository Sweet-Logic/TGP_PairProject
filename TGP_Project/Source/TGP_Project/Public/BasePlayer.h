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


	UPROPERTY(EditAnywhere)
		UCameraComponent* Camera;

	UPROPERTY(EditAnywhere)
		USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float OrthoWidth = 1024;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float OrthoWidthMax = 1024;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float OrthoWidthMin = 256;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float ZoomSpeed = 0.5f;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float PanSpeed = 1.0f;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float PanSpeedMin = 1.0f;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float PanSpeedMax = 2.5f;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float PanResetSpeed = 5.0f;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float PanMaxDistance = 100.0f;

	FVector2D MousePosition = FVector2D( 0,0 );
	FVector MouseWorld = FVector();
	FVector MouseWorldDir = FVector();
	FVector2D ViewportSize = FVector2D();
	FVector2D MousePosinNormal = FVector2D();



	void ZoomCamera(float value);

	void PanCameraX(float value);

	void PanCameraY(float value);

	void MouseX(float value);
	void MouseY(float value);

	void Interact();

	void Attack();

	void Sneak();

	void Sprint();

	void Pause();

	void Roll();
};
