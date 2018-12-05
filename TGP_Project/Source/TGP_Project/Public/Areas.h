// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Areas.generated.h"

class UBoxComponent;

UENUM()
enum EAREAS
{
	A_AUTHORISED UMETA(DisplayName = "Authorised"),
	A_RESTRICTED UMETA(DisplayName = "Restricted")
};

UCLASS()
class TGP_PROJECT_API AAreas : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAreas();

	UPROPERTY(VisibleAnywhere)
		UBoxComponent* BoxComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
		void EnterRestictedArea(UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult &SweepResult);

	UFUNCTION()
		void ExitRestictedArea(AActor* Actor,
			AActor* OtherActor);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
