#pragma once

#include "CoreMinimal.h"
#include "BaseAI.h"
#include "CivilianAI.generated.h"

UCLASS()
class TGP_PROJECT_API ACivilianAI : public ABaseAI
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACivilianAI();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Shot() override;

	void SetTarget();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay();

	virtual void OnPawnSeen(APawn* SeenPawn) override;

	virtual void OnNoiseHeard(APawn* NoiseInstigator, const FVector& location, float volume) override;

	FVector GetRandomTarget(float x, float y, float width, float height);

	UPROPERTY(VisibleAnywhere, Category = "AI")
		FVector _randomTarget;

	UPROPERTY(EditInstanceOnly, Category = "AI")
		float _moveDelay;
	float _moveTimeCounter;

	UPROPERTY(EditInstanceOnly, Category = "AI")
		int _maxMoveRadius;

	UPROPERTY(EditInstanceOnly, Category = "AI", meta = (EditCondition = "_patrol"))
		TArray<AActor*> _civHidingSpots;

	AActor* _hidingSpot;

	bool _target;
};