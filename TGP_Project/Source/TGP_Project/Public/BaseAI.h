// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "BaseAI.generated.h"

UENUM(BlueprintType)
enum class AI_STATE : uint8
{
	IDLE = 0,
	SUSPICIOUS,
	ALERTED,
};

class UPawnSensingComponent;

UCLASS()
class TGP_PROJECT_API ABaseAI : public ABaseCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseAI();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void StopMovement() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void OnPawnSeen(APawn* SeenPawn);

	UFUNCTION()
	virtual void OnNoiseHeard(APawn* NoiseInstigator, const FVector& location, float volume);

	void MoveToActor(AActor* target);
	void MoveToLocation(FVector target);

	void RotateTowards(FVector location);

	UFUNCTION()
		void ResetOrientation();

	UFUNCTION(BlueprintImplementableEvent, Category = "AI")
		 void OnStateChanged(AI_STATE newState);

	void SetAIState(AI_STATE newState);

	UPROPERTY(VisibleAnywhere, Category = "PawnSensing")
		UPawnSensingComponent* _sensor;

	FRotator _originalRot;
	FTimerHandle _timerResetRot;

	AI_STATE _state;

	FVector _target;

	UPROPERTY(EditInstanceOnly, Category = "AI")
		float _minDistanceToTarget;

	UPROPERTY(EditInstanceOnly, Category = "AI")
		float _minDistanceToHostile;

	UPROPERTY(EditAnywhere, Category = "MapBoundries")
		float mapX;

	UPROPERTY(EditAnywhere, Category = "MapBoundries")
		float mapY;

	UPROPERTY(EditAnywhere, Category = "MapBoundries")
		float mapWidth;

	UPROPERTY(EditAnywhere, Category = "MapBoundries")
		float mapHeight;
};