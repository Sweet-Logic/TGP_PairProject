// Fill out your copyright notice in the Description page of Project Settings.

#include "RestrictedArea.h"
#include "Components/BoxComponent.h"
#include "Components/DecalComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ARestrictedArea::ARestrictedArea()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_overlapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapComp"));
	_overlapBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	_overlapBox->SetCollisionResponseToAllChannels(ECR_Ignore);
	_overlapBox->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	_overlapBox->SetBoxExtent(FVector(200.0f));
	RootComponent = _overlapBox;

	_overlapBox->SetHiddenInGame(true);

	_overlapBox->OnComponentBeginOverlap.AddDynamic(this, &ARestrictedArea::HandleOverlap);

	//_decal = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComp"));
	//_decal->DecalSize = FVector(200.0f, 200.0f, 200.0f);
	//_decal->SetupAttachment(RootComponent);
}

//handle overlap
void ARestrictedArea::HandleOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor,
	UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	/*
	AFPSCharacter* MyPawn = Cast<AFPSCharacter>(OtherActor);

	if (MyPawn == nullptr)
	{
		return;
	}

	if (MyPawn->bIsCarryingObjective)
	{
		AFPSGameMode* GM = Cast<AFPSGameMode>(GetWorld()->GetAuthGameMode());
		if (GM)
		{
			GM->SetObjectivesExtracted(1);
			GM->SetExtractingInstigator(MyPawn);
			MyPawn->bIsCarryingObjective = false;
		}
	}
	else
	{
		UGameplayStatics::PlaySound2D(this, ObjectiveMissingSound);
	}
	*/
	UE_LOG(LogTemp, Log, TEXT("Overlapped with restricted area!"));
}