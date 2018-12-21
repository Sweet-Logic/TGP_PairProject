// Fill out your copyright notice in the Description page of Project Settings.

#include "RestrictedEntrance.h"
#include "BaseCharacter.h"
#include "BaseAI.h"
#include "Components/BoxComponent.h"

// Sets default values
ARestrictedEntrance::ARestrictedEntrance()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxComponent->SetupAttachment(RootComponent);

	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ARestrictedEntrance::Enter);

	OnActorEndOverlap.AddDynamic(this, &ARestrictedEntrance::Exit);

	BoxComponent->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void ARestrictedEntrance::BeginPlay()
{
	Super::BeginPlay();
}

void ARestrictedEntrance::Enter(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult &SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		ABaseCharacter* hitPawn = Cast<ABaseCharacter>(OtherActor);

		if (hitPawn != nullptr)
		{
			if (OtherComp == hitPawn->GetBoxComponent())
			{
				for (int i = 0; i < Guards.Max(); i++)
				{
					if (Guards[i]->IsCharacterAlive())
					{
						hitPawn->StopMovement();
					}
				}
			}

			ABaseAI* hitAI = Cast<ABaseAI>(OtherActor);
			if (!hitAI->GetAreaPass())
			{
				hitAI->StopMovement();
			}
		}
	}
}

void ARestrictedEntrance::Exit(AActor* Actor,
	AActor* OtherActor)
{
	if (OtherActor && (OtherActor != this))
	{
		ABaseCharacter* hitPawn = Cast<ABaseCharacter>(OtherActor);

		if (hitPawn != nullptr)
		{
		}
	}
}

// Called every frame
void ARestrictedEntrance::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TSet<AActor*> tActor;
	GetOverlappingActors(tActor);

	TArray<AActor*> aActor = tActor.Array();

	int count = aActor.Max();
}