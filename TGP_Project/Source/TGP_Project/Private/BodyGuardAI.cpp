// Fill out your copyright notice in the Description page of Project Settings.

#include "BodyGuardAI.h"
#include "Engine/TargetPoint.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

ABodyGuardAI::ABodyGuardAI()
{
	_allAreasPass = true;
	_patrol = false;
}

// Called when the game starts or when spawned
void ABodyGuardAI::BeginPlay()
{
	Super::BeginPlay();

	if (_patrol)
	{
		NextWaypoint();
	}
}

void ABodyGuardAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//move back to guard post
	if (_state == AI_STATE::IDLE)
	{
		if (_patrol)
		{
			float distanceToWaypoint = (GetActorLocation() - _currentWaypoint->GetActorLocation()).Size();

			if (distanceToWaypoint < _minDistanceToTarget)
			{
				NextWaypoint();
			}

			MoveToActor(_currentWaypoint);
		}
		else
		{
			if (_post)
			{
				float distanceToWaypoint = (GetActorLocation() - _post->GetActorLocation()).Size();

				if (distanceToWaypoint > _minDistanceToTarget)
				{
					MoveToActor(_post);
				}
			}
		}
	}

	/*
	AFPSGameMode* GM = Cast<AFPSGameMode>(GetWorld()->GetAuthGameMode());
	if (GM && GM->GetGameFinished())
	{
		AController* controller = GetController();
		if (controller)
		{
			controller->StopMovement();
		}
	}
	*/
}

void ABodyGuardAI::NextWaypoint()
{
	if (_currentWaypoint != nullptr)
	{
		FVector delta = GetActorLocation() - _currentWaypoint->GetActorLocation();
		float distanceToWaypoint = delta.Size();

		if (_currentWaypointValue == (_waypoints.Num() - 1))
		{
			_currentWaypoint = _waypoints[0];
			_currentWaypointValue = 0;
		}
		else if (distanceToWaypoint < _minDistanceToTarget)
		{
			_currentWaypointValue++;
			_currentWaypoint = _waypoints[_currentWaypointValue];
		}
	}
	else
	{
		_currentWaypoint = _waypoints[0];
		_currentWaypointValue = 0;
	}
}

void ABodyGuardAI::OnPawnSeen(APawn * instigator)
{
	Super::OnPawnSeen(instigator);

	//AFPSGameMode* GM = Cast<AFPSGameMode>(GetWorld()->GetAuthGameMode());
	//if (GM)
	{
		//GM->CompleteMission(instigator, false);
	}

	DrawDebugSphere(GetWorld(), instigator->GetActorLocation(), 32.0f, 12, FColor::Red, false, 10.0f);

	SetAIState(AI_STATE::ALERTED);

	AController* controller = GetController();
	if (controller)
	{
		controller->StopMovement();
	}
}

void ABodyGuardAI::OnNoiseHeard(APawn * instigator, const FVector & location, float volume)
{
	Super::OnNoiseHeard(instigator, location, volume);

	DrawDebugSphere(GetWorld(), location, 32.0f, 12, FColor::Green, false, 10.0f);

	FVector Direction = location - GetActorLocation();
	Direction.Normalize();

	FRotator  NewLookAt = FRotationMatrix::MakeFromX(Direction).Rotator();
	NewLookAt.Pitch = 0.0f;
	NewLookAt.Roll = 0.0f;

	SetActorRotation(NewLookAt);

	//GetWorldTimerManager().ClearTimer(_timerResetRot);
	//GetWorldTimerManager().SetTimer(_timerResetRot, this, &ABodyGuardAI::ResetOrientation, 3.0f);

	SetAIState(AI_STATE::SUSPICIOUS);

	AController* controller = GetController();
	if (controller)
	{
		controller->StopMovement();
	}
}