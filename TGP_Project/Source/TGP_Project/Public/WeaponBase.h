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

	// Current ammo count
	int32 _ammo = 10;

	// How much ammo this gun takes before reloading
	int32 _ammoCapacity = 10;
	
	//How much spare ammo the player has
	int32 _spareAmmo = 100;

	// How long it will take to reload the gun
	float _reloadTime = 2.0f;

	// How many shots per second
	float _fireRate = 1.0f;

	FVector2D _dir = {0,0};

	UPROPERTY(EditAnywhere)
		TSubclassOf<AProjectileBase> _projectile;

	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* _gunShot;

	bool _canFire = true;

	bool _reloading = false;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Use(FVector Dir);

	UFUNCTION()
		void Reload();

	UFUNCTION()
		void LoadNextShot();

	//Timers
	FTimerHandle _reloadTimer;
	FTimerHandle _fireRateTimer;

	FTimerDelegate _reloadDel;
	FTimerDelegate _fireRateDel;

	UFUNCTION(BlueprintPure, Category = "ShotsLeft")
		int32 GetShotsRemaining() { return _ammo; }

	UFUNCTION(BlueprintPure, Category = "ExtraAmmo")
		int32 GetSpareAmmoRemaining() { return _spareAmmo; }

	void CancelReload()
	{
		GetWorldTimerManager().ClearTimer(_reloadTimer);
		GetWorldTimerManager().ClearTimer(_fireRateTimer);
	}

};
