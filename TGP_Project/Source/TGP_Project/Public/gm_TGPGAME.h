// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include  "BaseCharacter.h"
#include "gm_TGPGAME.generated.h"

enum GameState
{
	GS_PAUSED = 0,
	GS_END,
	GS_PLAYING,
};

class ABaseCharacter;

/**
 * 
 */
UCLASS()
class TGP_PROJECT_API Agm_TGPGAME : public AGameModeBase
{
	GENERATED_BODY()


	TArray<AActor> CivilianSpawn;

	TArray<AActor> BodyGuardSpawn;

	TArray<AActor> TargetSpawn;

	UPROPERTY(EditAnywhere)
		ABaseCharacter* Civilian;
	UPROPERTY(EditAnywhere)
		ABaseCharacter* BodyGuard;
	UPROPERTY(EditAnywhere)
		ABaseCharacter* Target;

	bool _gameOver = false;
	bool _vipKilled = false;
	bool _playerDied = false;
	bool _playerNeverDetected = true;

	int32 _civilianKillCount = 0;
	int32 _bodyGuardKillCount = 0;
	int32 _timesPlayerDetected = 0;
	int32 _civilianCount = 0;


	//Start of the game, then calls Event begin play in all actors in the world.
	void StartPlay() override;

	//When the game ends. not when going back to main menu.
	void GameEnd();

	//Donno if needed, could just have a spawn point for target and build the levels witht them.
	void ChooseVIP();

	//Sets the current state of the game. might move in to GameState class
	void SetGameState(GameState newState);

	//Called everytime a Cilivian is killed by the player.
	void CivKilled();

	//Called everytime a Bodyguard is killed by the player.
	void BodyGaurdKilled();

	//Called everytime the player is detected.
	void PlayerDetected();

	//For going to the main menu from pause or end of game.
	void SwitchToMainMenu();
};
