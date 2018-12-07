// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseAI.h"
#include "BodyGuardAI.generated.h"

UCLASS()
class TGP_PROJECT_API ABodyGuardAI : public ABaseAI
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABodyGuardAI();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void NextWaypoint();

	virtual void OnPawnSeen(APawn* SeenPawn) override;

	virtual void OnNoiseHeard(APawn* NoiseInstigator, const FVector& location, float volume) override;

	UPROPERTY(EditInstanceOnly, Category = "AI")
		bool _patrol;

	UPROPERTY(EditInstanceOnly, Category = "AI", meta = (EditCondition = "_patrol"))
		TArray<AActor*> _waypoints;

	UPROPERTY(EditInstanceOnly, Category = "AI")
		AActor* _post;

	AActor* _currentWaypoint;
	int _currentWaypointValue;
};