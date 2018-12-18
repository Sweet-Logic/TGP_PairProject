// Fill out your copyright notice in the Description page of Project Settings.

#include "gm_TGPGAME.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "EngineUtils.h"
#include "CivilianAI.h"
#include "Engine.h"


void Agm_TGPGAME::StartPlay()
{
	ChooseVIP();
	AGameModeBase::StartPlay();
}

void Agm_TGPGAME::GameEnd()
{

}

void Agm_TGPGAME::ChooseVIP()
{
	ACivilianAI *currentCivil = nullptr;
	bool targetSelected = false;
	for (TActorIterator<ACivilianAI> ActorIt(GetWorld()); ActorIt; ++ActorIt)
	{
		currentCivil = *ActorIt;
		if (currentCivil != nullptr)
		{
			_civilianCount++;
		}
	}

	if (!targetSelected && currentCivil != nullptr)
	{
		Target = currentCivil;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Could not find any Civilians!"));

	}
}

void Agm_TGPGAME::SetGameState(GameState GameEnd)
{
}