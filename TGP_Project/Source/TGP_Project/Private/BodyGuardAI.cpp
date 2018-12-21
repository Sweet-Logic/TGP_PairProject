// Fill out your copyright notice in the Description page of Project Settings.

#include "BodyGuardAI.h"
#include "BasePlayer.h"
#include "RestrictedEntrance.h"
#include "Engine/TargetPoint.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "WeaponBase.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "gm_TGPGAME.h"

ABodyGuardAI::ABodyGuardAI()
{
	_allAreasPass = true;
	_patrol = false;

	_minDistanceToHostile = 200.0f;
	_warningTimeLimit = 5.0f;

	GetCharacterMovement()->MaxWalkSpeed = 100.0f;
}

// Called when the game starts or when spawned
void ABodyGuardAI::BeginPlay()
{
	Super::BeginPlay();
	
	FVector Location = GetActorLocation();
	FRotator Rotation = FRotator(-90.0f, 0.0f, 90.0f);

	_currentWeapon = GetWorld()->SpawnActor<AWeaponBase>(_defaultGun, Location, Rotation);

	_currentWeapon->AttachToComponent(RootComponent, FAttachmentTransformRules::SnapToTargetIncludingScale, FName(TEXT("EquipedWeapon")));

	if (_patrol)
	{
		NextWaypoint();
	}
}

void ABodyGuardAI::Tick(float DeltaTime)
{
	Super ::Tick(DeltaTime);

	if (IsCharacterAlive())
	{
		//move back to guard post
		if (_state == AI_STATE::IDLE)
		{
			_sawSuspicious = false;
			_heardSuspicious = false;

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
					else
					{
						ARestrictedEntrance* post = Cast<ARestrictedEntrance>(_post);
						if (post)
						{
							SetActorRotation(post->GetActorRotation());
						}
						
					}
				}
			}
		}

		if (_state == AI_STATE::SUSPICIOUS)
		{
			MoveToLocation(_target);
			if (_sawSuspicious)
			{
				_warningTimeCount += DeltaTime;

				if (_warningTimeCount >= _warningTimeLimit)
				{
					_warningTimeCount = 0;
					SetIsWeaponDrawn(true);
					_state = AI_STATE::ALERTED;
					_sawSuspicious = false;
				}
				else if (_warningTimeCount <= 0.0f)
				{
					_warningTimeCount = 0;
					_state = AI_STATE::IDLE;
				}
			}
			else if (_heardSuspicious)
			{
				_warningTimeCount -= DeltaTime;

				if (_warningTimeCount <= 0.0f)
				{
					_warningTimeCount = 0;
					_state = AI_STATE::IDLE;
				}
			}
		}

		if (_state == AI_STATE::ALERTED)
		{
			float distanceToWaypoint = (GetActorLocation() - _hostileTarget->GetActorLocation()).Size();

			if (distanceToWaypoint > _minDistanceToHostile)
			{
				MoveToActor(_hostileTarget);
			}
			else
			{
				StopMovement();

				FVector tempDir = FVector(FVector2D((_hostileTarget->GetActorLocation() - GetActorLocation()).X,
					(_hostileTarget->GetActorLocation() - GetActorLocation()).Y), 0.0f);
				tempDir.Normalize();
				UpdateWeaponPosition(FVector2D(tempDir.X, tempDir.Y));


				AWeaponBase* WeaponRef = Cast<AWeaponBase>(_currentWeapon);
				WeaponRef->Use(tempDir);

				//fire the weapon
			}
		}

		
		Agm_TGPGAME* gameMode = (Agm_TGPGAME*)GetWorld()->GetAuthGameMode();
		if (gameMode && gameMode->IsGameOver())
		{
			StopMovement();
		}
	}
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

	//player check
	ABasePlayer* player = Cast<ABasePlayer>(instigator);
	if (player)
	{
		if (!player->IsCharacterAlive())
		{
			//end game
			SetIsWeaponDrawn(false);

		}

		//if player holding gun or if player in restricted area or entrance
		if (player->GetIsWeaponDrawn())
		{
			SetIsWeaponDrawn(true);

			DrawDebugSphere(GetWorld(), instigator->GetActorLocation(), 32.0f, 12, FColor::Red, false, 10.0f);
			SetAIState(AI_STATE::ALERTED);
			_hostileTarget = player;
		}

		if (player->GetIsPlayerInRestrictedArea())
		{
			SetAIState(AI_STATE::SUSPICIOUS);
			SetIsWeaponDrawn(false);
			_target = player->GetActorLocation();
			_hostileTarget = player;
			_sawSuspicious = true;
		}
	}

	//bodyguard check
	ABodyGuardAI* bodyguard = Cast<ABodyGuardAI>(instigator);
	if (bodyguard)
	{
		if (!bodyguard->IsCharacterAlive())
		{
			//end game
			SetIsWeaponDrawn(true);

			//alert other bodyguards nearby
		}
	}
}

void ABodyGuardAI::OnNoiseHeard(APawn * instigator, const FVector & location, float volume)
{
	Super::OnNoiseHeard(instigator, location, volume);

	DrawDebugSphere(GetWorld(), location, 32.0f, 12, FColor::Green, false, 10.0f);

	RotateTowards(location);

	//GetWorldTimerManager().ClearTimer(_timerResetRot);
	//GetWorldTimerManager().SetTimer(_timerResetRot, this, &ABodyGuardAI::ResetOrientation, 3.0f);

	SetAIState(AI_STATE::SUSPICIOUS);
	_target = location;
	_heardSuspicious = true;
	_warningTimeCount = _warningTimeLimit * 0.7f;
}

void ABodyGuardAI::AlertOthers()
{
	UGameplayStatics::PlaySound2D(this, _alertingOthers);
}

void ABodyGuardAI::Shot()
{
	Agm_TGPGAME* gameMode = (Agm_TGPGAME*)GetWorld()->GetAuthGameMode();

	gameMode->BodyGaurdKilled();
}