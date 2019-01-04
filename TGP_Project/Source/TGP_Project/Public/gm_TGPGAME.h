// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "gm_TGPGAME.generated.h"

class UPaperFlipbookComponent;

enum CurrentGameState
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

	int32 _civilianCount = 0;


	//Start of the game, then calls Event begin play in all actors in the world.
	void StartPlay() override;



	//void OnGameEnd_Implementation();
	//Donno if needed, could just have a spawn point for target and build the levels witht them.
	void ChooseVIP();

	//Sets the current state of the game. might move in to GameState class
	void SetGameState();


	

public:
	void PauseGame();
	void UnpauseGame();

	//Called everytime a Cilivian is killed by the player.
	void CivKilled();

	//Called everytime a Bodyguard is killed by the player.
	void BodyGaurdKilled();

	//Called everytime the player is detected.
	void PlayerDetected();

	void TargetKilled();

	bool IsGameOver();

	//When the game ends. Show Score? or Go to MainMenu
	void PlayerKilled();

	UFUNCTION(BlueprintPure)
		ABaseCharacter* GetLevelTarget() { return Target; };

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void PlayerFailedLevel();

	//When the game ends. Show Score? or Go to MainMenu
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void PlayerCompleteLevel();

	//For going to the main menu from pause or end of game.
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void SwitchToMainMenu();

	UPROPERTY(BlueprintReadOnly)
		bool _vipKilled = false;
	UPROPERTY(BlueprintReadOnly)
		bool _playerDied = false;
	UPROPERTY(BlueprintReadOnly)
		bool _playerNeverDetected = true;


	UPROPERTY(BlueprintReadOnly)
		UPaperFlipbookComponent* _targetTexture = nullptr;

	UPROPERTY(BlueprintReadOnly)
		int32 _civilianKillCount = 0;
	UPROPERTY(BlueprintReadOnly)
		int32 _bodyGuardKillCount = 0;
	UPROPERTY(BlueprintReadOnly)
		int32 _timesPlayerDetected = 0;
};
