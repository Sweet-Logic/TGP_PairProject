// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RestrictedEntrance.generated.h"

class ABaseCharacter;
class UBoxComponent;

UCLASS()
class TGP_PROJECT_API ARestrictedEntrance : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARestrictedEntrance();

	UPROPERTY(VisibleAnywhere)
		UBoxComponent* BoxComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void Enter(UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult &SweepResult);

	UFUNCTION()
		void Exit(AActor* Actor,
			AActor* OtherActor);


	UPROPERTY(EditAnywhere, Category = "GuardsOnDoor")
		TArray<ABaseCharacter*> Guards;
};
