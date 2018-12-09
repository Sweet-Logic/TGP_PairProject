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
class TGP_PROJECT_API ABasePlayer : public ABaseCharacter
{
	GENERATED_BODY()
	
public:
	ABasePlayer();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float deltaSeconds) override;

	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;


	//UPROPERTY(EditAnywhere)
		UCameraComponent* Camera;

	//UPROPERTY(EditAnywhere)
		USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float OrthoWidth = 512;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float OrthoWidthMax = 768;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float OrthoWidthMin = 256;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float ZoomSpeed = 2.0f;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float PanSpeed = 0.0f;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float PanSpeedMin = 0.0f;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float PanSpeedMax = 5.0f;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float PanResetSpeed = 5.0f;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float PanMaxDistance = 200.0f;

	FVector2D MousePosition = FVector2D();
	FVector MouseWorld = FVector();
	FVector MouseWorldDir = FVector();
	FVector2D ViewportSize = FVector2D();
	FVector2D MousePosinNormal = FVector2D();

	FVector PanInputVec = FVector();
	UPROPERTY(EditAnywhere, Category = "Stealth Settings", meta = (ClampMin = "0.0", ClampMax = "120.0", UIMin = "0.0", UIMax = "200.0"))
		float SneakSpeed = 50.0f;
	UPROPERTY(EditAnywhere, Category = "Stealth Settings")
		bool bSneaking = false;

	UPROPERTY(EditAnywhere, Category = "Movement Settings", meta = (ClampMin = "0.0", ClampMax = "120.0", UIMin = "0.0", UIMax = "200.0"))
		float SprintSpeed = 120.0f;
	UPROPERTY(EditAnywhere, Category = "Movement Settings")
		float SprintTimer = 3.0f; // time in seconds

	float HiddenMultiplier = 1.0f; // donno, higher the value the easier it is for enimies to detect the player.

	void HandleMovement(float DeltaTime);

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Areas")
		bool InRestictedArea = false;


	float Score = 10000;

	//Axis Mapping
	void HandlePanning(float DeltaTime);

	void ZoomCamera(float value);

	void PanCameraX(float value);

	void PanCameraY(float value);


	//Action Mapping
	void Interact();

	void Attack();

	void Sneak();

	void Sprint();

	void Pause();

	void Roll();

	void SprintRelease();
};