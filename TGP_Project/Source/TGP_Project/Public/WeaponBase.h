// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponBase.generated.h"

class AProjectileBase;
class UPaperFlipbookComponent;

UCLASS()
class TGP_PROJECT_API AWeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponBase();

	UPROPERTY(VisibleAnywhere)
		UPaperFlipbookComponent* _sprite;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	int _ammo = 10;

	FVector2D _dir = {0,0};

	UPROPERTY(EditAnywhere)
		TSubclassOf<AProjectileBase> _projectile;

	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* _gunShot;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Use(FVector Dir);

};
