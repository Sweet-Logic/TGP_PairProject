// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"

#include "BasePlayer.generated.h"

class USpringArmComponent;
class UCameraComponent;
class AWeaponBase;

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


	float _score = 10000;

	
	UCameraComponent* _camera;
	USpringArmComponent* _springArm;

	// Camera Settings
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float _orthoWidth = 512;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float _orthoWidthMax = 768;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float _orthoWidthMin = 256;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float _zoomSpeed = 2.0f;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float _panSpeed = 0.0f;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float _panSpeedMin = 0.0f;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float _panSpeedMax = 5.0f;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float _panResetSpeed = 5.0f;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
		float _panMaxDistance = 200.0f;
	
	// Mouse Variables
	FVector2D _mousePosition = FVector2D();
	FVector _mouseWorld = FVector();
	FVector _mouseWorldDir = FVector();
	FVector2D _viewportSize = FVector2D();
	FVector _playerToMouseDirection = FVector();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMusicSkill)
		FVector2D _mousePosinNormal = FVector2D();

	// Panning Variables
	FVector _panInputVec = FVector();

	//Stealth Variables
	UPROPERTY(EditAnywhere, Category = "Stealth Settings", meta = (ClampMin = "0.0", ClampMax = "120.0", UIMin = "0.0", UIMax = "200.0"))
		float _sneakSpeed = 50.0f;

	UPROPERTY(EditAnywhere, Category = "Stealth Settings")
		bool _isSneaking = false;


	// Movement Variables
	UPROPERTY(EditAnywhere, Category = "Movement Settings", meta = (ClampMin = "0.0", ClampMax = "120.0", UIMin = "0.0", UIMax = "200.0"))
		float _sprintSpeed = 120.0f;

	UPROPERTY(EditAnywhere, Category = "Movement Settings")
		float _sprintTimer = 3.0f; // time in seconds

	// Score Variables
	float _hiddenMultiplier = 1.0f; // donno, higher the value the easier it is for enimies to detect the player.
	
	//Stealth Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Areas")
		bool _inRestictedArea = false;

public:
	virtual void Tick(float deltaSeconds) override;

	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

	//Weapon
	void UpdateWeaponPosition();

	//Movement
	void HandleMovement(float DeltaTime);

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

	void PutAwayWeapon();

	void PullOutWeapon();

	void SprintRelease();

	UFUNCTION(BlueprintCallable, Category = "RestictedAreas")
		bool GetIsPlayerInRestrictedArea() { return _inRestictedArea; }
	
	UFUNCTION(BlueprintCallable, Category = "RestictedAreas")
		void SetIsPlayerInRestrictedArea(bool newIsInRestrictedArea) { _inRestictedArea = newIsInRestrictedArea; }
};