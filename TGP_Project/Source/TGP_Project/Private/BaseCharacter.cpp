// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseCharacter.h"

#include "Paper2D/Classes/PaperFlipbookComponent.h"
#include "Paper2D/Classes/PaperFlipbook.h"
#include "Components/InputComponent.h"
#include "Components/BoxComponent.h"




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

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxComponent->SetupAttachment(RootComponent);

	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ABaseCharacter::Collision);

}
// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	Sprite->SetFlipbook(WalikingFlipBook);
	//Sprite->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(X, Y, Z));


	Sprite->Play();



}
// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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

UFUNCTION()
void ABaseCharacter::Collision(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult &SweepResult)
{
	
}