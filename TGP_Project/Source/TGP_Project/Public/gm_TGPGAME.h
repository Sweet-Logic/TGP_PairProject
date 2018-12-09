// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include  "BaseCharacter.h"
#include "gm_TGPGAME.generated.h"


class ABaseCharacter;

/**
 * 
 */
UCLASS()
class TGP_PROJECT_API Agm_TGPGAME : public AGameModeBase
{
	GENERATED_BODY()

	float civilianCount = 10;

	TArray<AActor> CivilianSpawn;

	TArray<AActor> BodyGuardSpawn;

	TArray<AActor> TargetSpawn;

	UPROPERTY(EditAnywhere)
		ABaseCharacter* Civilian;
	UPROPERTY(EditAnywhere)
		ABaseCharacter* BodyGuard;
	UPROPERTY(EditAnywhere)
		ABaseCharacter* Target;
};
