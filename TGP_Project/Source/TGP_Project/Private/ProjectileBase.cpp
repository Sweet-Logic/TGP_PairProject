// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectileBase.h"
#include "Paper2D/Classes/PaperFlipbookComponent.h"


// Sets default values
AProjectileBase::AProjectileBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	Sprite = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Sprite"));
	Sprite->SetupAttachment(RootComponent);
	Sprite->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0, 90, -90));
}

// Called when the game starts or when spawned
void AProjectileBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectileBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (_lifeTime <= 0.0f)
	{
		Destroy();
	}
	else
	{
		SetActorLocation(GetActorLocation() + (_forwardVector * _velocity));
		_lifeTime -= DeltaTime;
	}

}

void AProjectileBase::Initialize(FVector Direction)
{
	_forwardVector = Direction;
}

