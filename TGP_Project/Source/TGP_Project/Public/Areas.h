// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Areas.generated.h"

UENUM()
enum EAREAS : uint8
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



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
