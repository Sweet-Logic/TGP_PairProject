// Fill out your copyright notice in the Description page of Project Settings.

#include "gm_TGPGAME.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "EngineUtils.h"
#include "CivilianAI.h"
#include "Engine.h"
#include "TGP_PlayerController.h"

void Agm_TGPGAME::StartPlay()
{
	ChooseVIP();
	AGameModeBase::StartPlay();
}


void Agm_TGPGAME::ChooseVIP()
{
	ACivilianAI *currentCivil = nullptr;
	bool targetSelected = false;
	for (TActorIterator<ACivilianAI> ActorIt(GetWorld()); ActorIt; ++ActorIt)
	{
		currentCivil = *ActorIt;
		

		
		float chance = rand();
		if (currentCivil != nullptr)
		{
			if (!targetSelected)
			{
				targetSelected = true;
				Target = currentCivil;
			}

			_civilianCount++;
		}
	}

	if (targetSelected && Target != nullptr)
	{
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Could not find any Civilians!"));

	}
}

void Agm_TGPGAME::SetGameState()
{
}

void Agm_TGPGAME::PauseGame()
{
	ATGP_PlayerController* const MyPlayer = Cast<ATGP_PlayerController>(GEngine->GetFirstLocalPlayerController(GetWorld()));
	if (MyPlayer != NULL)
	{
		MyPlayer->Pause();
	}
}

void Agm_TGPGAME::UnpauseGame()
{
	
	ATGP_PlayerController* const MyPlayer = Cast<ATGP_PlayerController>(GEngine->GetFirstLocalPlayerController(GetWorld()));
	if (MyPlayer != NULL)
	{
		MyPlayer->Unpause();
	}
}

void Agm_TGPGAME::CivKilled()
{
	if (Target->IsCharacterAlive())
	{
		PlayerCompleteLevel();
		PauseGame();
	}
	else
	{
		_civilianKillCount++;
	}
}

void Agm_TGPGAME::BodyGaurdKilled()
{
	_bodyGuardKillCount++;
}

void Agm_TGPGAME::PlayerDetected()
{
	_timesPlayerDetected++;
}


void Agm_TGPGAME::TargetKilled()
{
	PlayerCompleteLevel();
	_gameOver = true;
}

bool Agm_TGPGAME::IsGameOver()
{
	return _gameOver;
}

void Agm_TGPGAME::PlayerKilled()
{
	PlayerFailedLevel();
	PauseGame();
	_gameOver = true;
}
