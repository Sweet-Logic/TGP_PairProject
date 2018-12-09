// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileBase.generated.h"

class UPaperFlipbookComponent;


UCLASS()
class TGP_PROJECT_API AProjectileBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectileBase();
	UPROPERTY(VisibleAnywhere)
		UPaperFlipbookComponent* Sprite;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	void Initialize(FVector Direction);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BulletProperties", meta = (ExposeOnSpawn = true))
		FVector _forwardVector = FVector{0.0f,1.0f,0.0f};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BulletProperties", meta = (ExposeOnSpawn = true))
		float _velocity = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BulletProperties", meta = (ExposeOnSpawn = true))
		float _lifeTime = 5.0f;
	
};
