// Fill out your copyright notice in the Description page of Project Settings.

#include "BasePlayer.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Components/InputComponent.h"




ABasePlayer::ABasePlayer()
{
	//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));
	SpringArm->SetupAttachment((USceneComponent*)Sprite);
	SpringArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(-90.0f,0.0f, 0.0f));
	SpringArm->TargetArmLength = 400.f;
	SpringArm->bEnableCameraLag = true;
	SpringArm->CameraLagSpeed = 3.0f;
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("GameCamera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->ProjectionMode = ECameraProjectionMode::Type::Orthographic;
	Camera->SetOrthoWidth(OrthoWidth);

}
// Called when the game starts or when spawned
void ABasePlayer::BeginPlay()
{
	Super::BeginPlay();
}
// Called every frame
void ABasePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ABaseCharacter::Tick(DeltaTime);
}
// Called to bind functionality to input
void ABasePlayer::SetupPlayerInputComponent(UInputComponent* InputComponent)
{
	// Respond every frame to the values of our two movement axes, "MoveX" and "MoveY".
	InputComponent->BindAxis("MoveUp", this,    &ABaseCharacter::MoveUp);
	InputComponent->BindAxis("MoveRight", this, &ABaseCharacter::MoveRight);
}