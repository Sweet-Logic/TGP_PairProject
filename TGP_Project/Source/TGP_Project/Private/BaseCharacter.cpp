// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseCharacter.h"

#include "Paper2D/Classes/PaperFlipbookComponent.h"
#include "Paper2D/Classes/PaperFlipbook.h"
#include "Paper2D/Classes/PaperSprite.h"
#include "Components/InputComponent.h"
#include "Components/BoxComponent.h"
#include "ProjectileBase.h"
#include "WeaponBase.h"
#include "Engine.h"

ABaseCharacter::ABaseCharacter()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	//GetSprite() = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Sprite"));
	//Sprite->SetupAttachment(RootComponent);

	//GetSprite()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(-90, 0, 90));

	//Sprite->CollisionSource
	//Sprite->SetFlipbook(DefaultFlipbook);

	_currentMovementSpeed = _walkSpeed;

	_boxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	_boxComponent->SetupAttachment(RootComponent);

	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Overlap);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_PhysicsBody, ECollisionResponse::ECR_Overlap);

	GetCapsuleComponent()->SetCanEverAffectNavigation(false);


	_boxComponent->OnComponentBeginOverlap.AddDynamic(this, &ABaseCharacter::Collision);

}
// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	GetSprite()->SetFlipbook(_walikingFlipBook);
	//Sprite->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(X, Y, Z));


	GetSprite()->Play();

	FVector2D size = FVector2D(5, 15);

	_boxComponent->SetBoxExtent(FVector(size.X, size.Y, 1.0f));
	GetSprite()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0, 0, 90));
}
// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//GetSprite()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 90.0f));
}
// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* InputComponent)
{
	
}

void ABaseCharacter::EnableMovement()
{
	_canMove = true;
}

void ABaseCharacter::StopMovement()
{
	_canMove = false;

}

void ABaseCharacter::MoveUp(float AxisValue)
{
	_canMove = true;
	if (_canMove)
	{
		_movementInput.Y = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
	}
}

void ABaseCharacter::MoveRight(float AxisValue)
{
	if (_canMove)
	{
		_movementInput.X = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
	}
}

void ABaseCharacter::Shot()
{
}

void ABaseCharacter::SwitchFlipbook(UPaperFlipbook * newFlipbook)
{
	GetSprite()->SetFlipbook(newFlipbook);
}

void ABaseCharacter::FlipFlipbook()
{
	GetSprite()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0, 90, 90));
}

UFUNCTION()
void ABaseCharacter::Collision(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult &SweepResult)
{
	if (OtherActor != nullptr)
	{
		AProjectileBase* projectile = Cast<AProjectileBase>(OtherActor);
		if (projectile != nullptr)
		{
			if (OverlappedComponent == _boxComponent)
			{
				_isAlive = false;
				Shot();
			}
		}
	}
}

void ABaseCharacter::UpdateWeaponPosition(FVector2D dir)
{
	FVector temp = FVector(dir.X, dir.Y, 0.0f);
	if (temp != FVector(0.0f, 0.0f, 0.0f))
	{
		_currentWeapon->SetActorRelativeLocation(temp * _weaponOffset);
	}
}