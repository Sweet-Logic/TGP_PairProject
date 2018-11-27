// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RestrictedArea.generated.h"

class UBoxComponent;

UCLASS()
class TGP_PROJECT_API ARestrictedArea : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARestrictedArea();

protected:
	UFUNCTION()
	void HandleOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor,
		UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UPROPERTY(VisibleAnywhere, Category = "Components")
		UBoxComponent* _overlapBox;

	//UPROPERTY(VisibleAnywhere, Category = "Components")
		//UDecalComponent* _decal;

	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* _sound;
};