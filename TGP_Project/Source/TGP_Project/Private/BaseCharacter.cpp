// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseCharacter.h"
#include "Paper2D/Classes/PaperFlipbookComponent.h"
#include "Components/InputComponent.h"




ABaseCharacter::ABaseCharacter()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	Sprite = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Sprite"));
	Sprite->SetupAttachment(RootComponent);

}
// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
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

void ABaseCharacter::HandleMovement(float DeltaTime)
{
	if (!MovementInput.IsZero())
	{
		//Scale our movement input axis values by 100 units per second
		MovementInput = MovementInput.GetSafeNormal() * 100.0f;
		FVector NewLocation = GetActorLocation();
		NewLocation += FVector(0.0f, 1.0f,0.0f) * MovementInput.X * DeltaTime;
		NewLocation += FVector(1.0f, 0.0f, 0.0f)   * MovementInput.Y * DeltaTime;
		SetActorLocation(NewLocation);
	}
}
