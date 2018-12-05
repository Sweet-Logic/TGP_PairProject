// Fill out your copyright notice in the Description page of Project Settings.

#include "Areas.h"
#include "BasePlayer.h"
#include "Components/BoxComponent.h"
#include "Engine.h"


// Sets default values
AAreas::AAreas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxComponent->SetupAttachment(RootComponent);

	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AAreas::EnterRestictedArea);

	BoxComponent->OnComponentEndOverlap.AddDynamic(this, &AAreas::ExitRestictedArea);

	BoxComponent->SetGenerateOverlapEvents(true);


}

// Called when the game starts or when spawned
void AAreas::BeginPlay()
{
	Super::BeginPlay();


}


void AAreas::EnterRestictedArea(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult &SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		ABasePlayer* hitPawn = Cast<ABasePlayer>(OtherActor);
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("hit"));

		if (hitPawn != nullptr)
		{
			hitPawn->InRestictedArea = false;
		}
	}

}

void AAreas::ExitRestictedArea(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		ABasePlayer* hitPawn = Cast<ABasePlayer>(OtherActor);
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("help"));

		if (hitPawn != nullptr)
		{
			hitPawn->InRestictedArea = false;
		}
	}
	
}


// Called every frame
void AAreas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

