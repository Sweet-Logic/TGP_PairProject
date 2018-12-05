// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Paper2D/Classes/PaperCharacter.h"
#include "BaseCharacter.generated.h"

class UPaperFlipbook;

class UPaperFlipbookComponent;
class USceneComponent;
class UArrowComponent;
class UBoxComponent;

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

	//Components
	UPROPERTY(VisibleAnywhere)
		UBoxComponent* BoxComponent;
	UPROPERTY(VisibleAnywhere)
		UPaperFlipbookComponent* Sprite;
	UPROPERTY(VisibleAnywhere)
		UArrowComponent* direction;
	
	

	//Sprite Settings
	UPROPERTY(EditAnywhere, Category = "Sprite Settings")
		UPaperFlipbook* IdleFlipbook;
	UPROPERTY(EditAnywhere, Category = "Sprite Settings")
		UPaperFlipbook* WalikingFlipBook;
	UPROPERTY(EditAnywhere, Category = "Sprite Settings")
		float playRate;
	UPROPERTY(EditAnywhere, Category = "Sprite Settings")
		uint32 loopFlipbook;

	UFUNCTION(BlueprintCallable, Category = "FlippingFlipbooks")
		void SwitchFlipbook(UPaperFlipbook* newFlipbook);

	UFUNCTION(BlueprintCallable, Category = "FlippingFlipbooks")
		void FlipFlipbook();

	UFUNCTION()
		void Collision(UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult &SweepResult);

	//UPROPERTY(EditAnywhere, Category = "Movement Settings")
	FVector2D MovementInput;

	//Movement Settings
	UPROPERTY(EditAnywhere, Category = "Movement Settings", meta = (ClampMin = "0.0", ClampMax = "200.0", UIMin = "0.0", UIMax = "200.0"))
		float WalkSpeed = 80.0f;


	float CurrentMovementSpeed;

	UPROPERTY(EditAnywhere, Category = "Movement Settings")
		float X = 0.0f;
	UPROPERTY(EditAnywhere, Category = "Movement Settings")
		float Y = 0.0f;
	UPROPERTY(EditAnywhere, Category = "Movement Settings")
		float Z = 0.0f;

	
	void MoveUp(float value);
	void MoveRight(float value);

};
