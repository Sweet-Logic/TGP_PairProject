// Fill out your copyright notice in the Description page of Project Settings.

#include "Areas.h"
#include "BasePlayer.h"
#include "Components/BoxComponent.h"


// Sets default values
AAreas::AAreas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxComponent->SetupAttachment(RootComponent);

	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AAreas::EnterRestictedArea);

}

// Called when the game starts or when spawned
void AAreas::BeginPlay()
{
	Super::BeginPlay();


}

UFUNCTION()
void AAreas::EnterRestictedArea(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult &SweepResult)
{
	ABasePlayer* hitPawn = Cast<ABasePlayer>(OtherActor);
	if (hitPawn != nullptr)
	{
		hitPawn->InRestictedArea = true;
	}
}

void AAreas::ExitRestictedArea(const FOverlapInfo & OtherOverlap, bool bDoNotifies, bool bSkipNotifySelf)
{
	ABasePlayer* hitPawn = Cast<ABasePlayer>(OtherOverlap.OverlapInfo.Actor);
	if (hitPawn != nullptr)
	{
		hitPawn->InRestictedArea = true;
	}
}


// Called every frame
void AAreas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

