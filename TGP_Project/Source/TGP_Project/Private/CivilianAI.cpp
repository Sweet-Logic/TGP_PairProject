#include "CivilianAI.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"

// Sets default values
ACivilianAI::ACivilianAI()
{
	_allAreasPass = false;
	_maxMoveRadius = 50.0f;

	_moveDelay = 3.0f;
	_moveTimeCounter = 0;
}

// Called when the game starts or when spawned
void ACivilianAI::BeginPlay()
{
	Super::BeginPlay();

	//get a random target
	_randomTarget = GetRandomTarget(mapX, mapY, mapWidth, mapHeight);
}

void ACivilianAI::Tick(float deltaTime)
{
	if (_state == AI_STATE::IDLE)
	{
		float currentTime = deltaTime;
		if (_moveTimeCounter >= _moveDelay)
		{
			_moveTimeCounter = 0;

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
		else
		{
			//_randomTarget = GetActorLocation();
		}
	}
	else if (_state == AI_STATE::ALERTED)
	{
		MoveToLocation(_hidingSpot->GetActorLocation());
	}
	else if (_state == AI_STATE::SUSPICIOUS)
	{
		this->Controller->StopMovement();
	}
}

void ACivilianAI::OnPawnSeen(APawn * instigator)
{
	Super::OnPawnSeen(instigator);
	//if gun on display
	if (instigator)
	{
		_state = AI_STATE::ALERTED;
		
		float currentClosest;
		for (int i = 0; i < _civHidingSpots.Num(); i++)
		{
			FVector delta = _hidingSpot->GetActorLocation() - _civHidingSpots[i]->GetActorLocation();
			float distanceToWaypoint = delta.Size();

			if (distanceToWaypoint < currentClosest)
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
		_state = AI_STATE::SUSPICIOUS;
	}
}

FVector ACivilianAI::GetRandomTarget(float x, float y, float width, float height)
{
	float randX = rand() % _maxMoveRadius - (_maxMoveRadius / 2);
	float randY = rand() % _maxMoveRadius - (_maxMoveRadius / 2);
		
	FVector temp = FVector(randX, randY, GetActorLocation().Z);

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