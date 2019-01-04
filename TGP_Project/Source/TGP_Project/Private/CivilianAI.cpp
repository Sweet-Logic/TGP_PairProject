#include "CivilianAI.h"
#include "BasePlayer.h"
#include "BodyGuardAI.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "gm_TGPGAME.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"

// Sets default values
ACivilianAI::ACivilianAI()
{
	_allAreasPass = false;
	_maxMoveRadius = 500.0f;

	_moveDelay = 3.0f;
	_moveTimeCounter = 0;

	GetCharacterMovement()->MaxWalkSpeed = 100.0f;
}

// Called when the game starts or when spawned
void ACivilianAI::BeginPlay()
{
	Super::BeginPlay();

	//get a random target
	_randomTarget = GetRandomTarget(mapX, mapY, mapWidth, mapHeight);

	_hidingSpot = _civHidingSpots[0];
}

void ACivilianAI::Tick(float deltaTime)
{
	if (IsCharacterAlive())
	{
		if (_state == AI_STATE::IDLE)
		{
			float currentTime = deltaTime;
			if (_moveTimeCounter >= _moveDelay)
			{
				_moveTimeCounter = 0;

				_moveDelay = rand() % 3 + 2.0f;

				//get a random target
				_randomTarget = GetRandomTarget(mapX, mapY, mapWidth, mapHeight);
			}
			else
			{
				_moveTimeCounter += currentTime;
			}

			float distanceToWaypoint = (GetActorLocation() - _randomTarget).Size();
			if (distanceToWaypoint > _minDistanceToTarget)
			{
				AController* controller = GetController();
				if (controller)
				{
					MoveToLocation(_randomTarget);
				}
			}
		}
		else if (_state == AI_STATE::ALERTED)
		{
			MoveToLocation(_hidingSpot->GetActorLocation());
		}
		else if (_state == AI_STATE::SUSPICIOUS)
		{
			StopMovement();
		}

		Agm_TGPGAME* gameMode = (Agm_TGPGAME*)GetWorld()->GetAuthGameMode();
		if (gameMode && gameMode->IsGameOver())
		{
			StopMovement();
		}
	}
}

void ACivilianAI::Shot()
{
	Agm_TGPGAME* gameMode = (Agm_TGPGAME*)GetWorld()->GetAuthGameMode();
	gameMode->CivKilled();
}

void ACivilianAI::SetTarget()
{
	_target = true;
}

void ACivilianAI::OnPawnSeen(APawn * instigator)
{
	Super::OnPawnSeen(instigator);

	//player check
	ABasePlayer* player = Cast<ABasePlayer>(instigator);

	//bodyguard check
	ABodyGuardAI* bodyguard = Cast<ABodyGuardAI>(instigator);

	//if either has gun out. if statement not finished
	if (player)
	{
		//do similar thing for bodyguard
		if (player->GetIsWeaponDrawn())
		{
			_state = AI_STATE::ALERTED;
		}
	}
	if (bodyguard)
	{
		//bodyguards weapon is drawn
		if(bodyguard->GetIsWeaponDrawn())
		{
			_state = AI_STATE::SUSPICIOUS;
		}
	}

	if (_state == AI_STATE::ALERTED)
	{
		float currentClosest = 100000.0f;
		for (int i = 0; i < _civHidingSpots.Num(); i++)
		{
			float threatDistToWaypoint = (_civHidingSpots[i]->GetActorLocation() - instigator->GetActorLocation()).Size();
			float distanceToWaypoint = (_civHidingSpots[i]->GetActorLocation() - GetActorLocation()).Size();

			if (distanceToWaypoint < currentClosest &&
				threatDistToWaypoint > distanceToWaypoint)
			{
				currentClosest = distanceToWaypoint;
				_hidingSpot = _civHidingSpots[i];
			}
		}
	}
}

void ACivilianAI::OnNoiseHeard(APawn * instigator, const FVector & location, float volume)
{
	Super::OnNoiseHeard(instigator, location, volume);
	//if heard gunshot
	//if ()
	{
		//_state = AI_STATE::SUSPICIOUS;
	}

	Agm_TGPGAME* gameMode = (Agm_TGPGAME*)GetWorld()->GetAuthGameMode();
	if (gameMode->IsGameOver())
	{
		_state = AI_STATE::IDLE;
	}
}

FVector ACivilianAI::GetRandomTarget(float x, float y, float width, float height)
{
	float randX = rand() % _maxMoveRadius - (_maxMoveRadius / 2);
	float randY = rand() % _maxMoveRadius - (_maxMoveRadius / 2);
		
	FVector temp = FVector(GetActorLocation().X + randX, GetActorLocation().Y + randY, GetActorLocation().Z);

	if (temp.X > x && temp.X < x + width &&
		temp.Y > y && temp.Y < y + height)
	{
		return temp;
	}
	else
	{
		return GetRandomTarget(mapX, mapY, mapWidth, mapHeight);
	}
}