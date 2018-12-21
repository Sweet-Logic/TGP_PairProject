// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponBase.h"
#include "ProjectileBase.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Paper2D/Classes/PaperFlipbookComponent.h"
#include "Runtime/Engine/Public/TimerManager.h"
#include "Engine.h"


// Sets default values
AWeaponBase::AWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	_sprite = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Sprite"));
	_sprite->SetupAttachment(RootComponent);
	_sprite->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0, 90, -90));

}

// Called when the game starts or when spawned
void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	
	_fireRateDel.BindUFunction(this, FName("LoadNextShot"));
	_reloadDel.BindUFunction(this, FName("Reload"));
}

// Called every frame
void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWeaponBase::Use(FVector Dir)
{
	if (_ammo > 0 && _canFire)
	{
		FVector Location = GetActorLocation() + (Dir * 5.0f);

		FRotator Rotation = FRotator(0.0f, 0.0f, 0.0f);


		AProjectileBase* bullet = GetWorld()->SpawnActor<AProjectileBase>(_projectile, Location, Rotation);
		bullet->Initialize(Dir);

		UGameplayStatics::PlaySound2D(this, _gunShot);
		_ammo--;
		_canFire = false;
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("fire"));

		if (_ammo > 0)
		{
			GetWorld()->GetTimerManager().SetTimer(_fireRateTimer, _fireRateDel, 1 / _fireRate, false);
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("LoadingNexTBullet"));

		}
		else
		{
			if (!_reloading)
			{
				_reloading = true;
				GetWorld()->GetTimerManager().SetTimer(_reloadTimer, _reloadDel, _reloadTime, false);
				GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("Reloading"));

			}
			else if (_spareAmmo <= 0)
			{
				//Play Empty Mag Sound
			}
			else
			{

			}
		}
	}
	else if (_ammo > 0)
	{

	}
	else if(_ammo <= 0)
	{
		if(!_reloading)
		{
			_reloading = true;
			GetWorld()->GetTimerManager().SetTimer(_reloadTimer, _reloadDel, _reloadTime, false);
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("Reloading2"));

		}
		else if (_spareAmmo <= 0)
		{
			//Play Empty Mag Sound
		}
		else
		{

		}
	}
}

void AWeaponBase::Reload()
{
	GetWorldTimerManager().PauseTimer(_reloadTimer);
	if ((_spareAmmo - _ammoCapacity) < 0)
	{
		_ammo = _spareAmmo % _ammoCapacity;
	}
	else
	{
		_ammo = _ammoCapacity;
	}
	_spareAmmo -= _ammo;
	_canFire = true;
	_reloading = false;
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("Reloaded"));

}

void AWeaponBase::LoadNextShot()
{
	_canFire = true;
	GetWorldTimerManager().PauseTimer(_fireRateTimer);
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("ReadyToFire"));

}