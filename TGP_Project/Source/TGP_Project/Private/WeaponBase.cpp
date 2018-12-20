// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponBase.h"
#include "ProjectileBase.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Paper2D/Classes/PaperFlipbookComponent.h"

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
	
}

// Called every frame
void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWeaponBase::Use(FVector Dir)
{
	FVector Location = GetActorLocation() + (Dir*50);

	FRotator Rotation = FRotator(0.0f, 0.0f, 0.0f);

	AProjectileBase* bullet = GetWorld()->SpawnActor<AProjectileBase>(_projectile, Location, Rotation);
	bullet->Initialize(Dir);

	UGameplayStatics::PlaySound2D(this, _gunShot);
}
