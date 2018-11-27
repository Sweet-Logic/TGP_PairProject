// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseCharacter.h"
#include "Paper2D/Classes/PaperFlipbookComponent.h"
#include "Paper2D/Classes/PaperFlipbook.h"
#include "Components/InputComponent.h"

ABaseCharacter::ABaseCharacter()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	Sprite = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Sprite"));
	Sprite->SetupAttachment(RootComponent);
	Sprite->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0, 90, -90));
	//Sprite->CollisionSource
	//Sprite->SetFlipbook(DefaultFlipbook);
	CurrentMovementSpeed = WalkSpeed;
}
// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	Sprite->SetFlipbook(WalkingFlipBook);
	//Sprite->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(X, Y, Z));

	Sprite->Play();
}
// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	HandleMovement(DeltaTime);
}
// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* InputComponent)
{
}

void ABaseCharacter::MoveUp(float AxisValue)
{
	MovementInput.Y = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
}

void ABaseCharacter::MoveRight(float AxisValue)
{
	MovementInput.X = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
}

void ABaseCharacter::SwitchFlipbook(UPaperFlipbook * newFlipbook)
{
	Sprite->SetFlipbook(newFlipbook);
}

void ABaseCharacter::FlipFlipbook()
{
	Sprite->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0, 90, 90));
}

void ABaseCharacter::HandleMovement(float DeltaTime)
{
	if (!MovementInput.IsZero())
	{
		SwitchFlipbook(WalkingFlipBook);
		//Scale our movement input axis values by 100 units per second
		if (MovementInput.X < 0)
		{
			Sprite->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0, -90, 90));
		}
		else if(MovementInput.X > 0)
		{
			Sprite->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0, 90, -90));
		}

		MovementInput = MovementInput.GetSafeNormal() * CurrentMovementSpeed;
		FVector NewLocation = GetActorLocation();
		NewLocation += FVector(0.0f, 1.0f,0.0f) * (MovementInput.X) * DeltaTime;
		NewLocation += FVector(1.0f, 0.0f, 0.0f)   * (MovementInput.Y) * DeltaTime;
		SetActorLocation(NewLocation);
	}
	else
	{
		SwitchFlipbook(IdleFlipbook);
	}
}