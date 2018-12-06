// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseAI.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Perception/PawnSensingComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

// Sets default values
ABaseAI::ABaseAI()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_sensor = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensor"));
	_sensor->OnSeePawn.AddDynamic(this, &ABaseAI::OnPawnSeen);
	_sensor->OnHearNoise.AddDynamic(this, &ABaseAI::OnNoiseHeard);

	_state = AI_STATE::IDLE;

	_minDistanceToTarget = 10.0f;
}

// Called when the game starts or when spawned
void ABaseAI::BeginPlay()
{
	Super::BeginPlay();
	_originalRot = GetActorRotation();
}

// Called every frame
void ABaseAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseAI::OnPawnSeen(APawn * instigator)
{
	if (instigator == nullptr)
	{
		return;
	}
}

void ABaseAI::OnNoiseHeard(APawn * instigator, const FVector & location, float volume)
{
	if (_state == AI_STATE::ALERTED)
	{
		return;
	}
}

void ABaseAI::MoveToActor(AActor* target)
{
	AController* controller = GetController();
	if (controller && target)
	{
		UAIBlueprintHelperLibrary::SimpleMoveToActor(controller, target);
	}
}

void ABaseAI::MoveToLocation(FVector target)
{
	AController* controller = GetController();
	if (controller)
	{
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(controller, target);
	}
}

void ABaseAI::ResetOrientation()
{
	if (_state == AI_STATE::ALERTED)
	{
		return;
	}

	SetActorRotation(_originalRot);

	SetAIState(AI_STATE::IDLE);
}

void ABaseAI::SetAIState(AI_STATE newState)
{
	if (_state == newState)
	{
		return;
	}

	_state = newState;

	OnStateChanged(newState);
}