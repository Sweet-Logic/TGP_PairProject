// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Paper2D/Classes/PaperCharacter.h"
#include "WeaponBase.h"
#include "BaseCharacter.generated.h"

class UPaperFlipbook;

class UPaperFlipbookComponent;
class USceneComponent;
class UArrowComponent;
class UBoxComponent;

class AWeaponBase;

class UChildActorComponent;
/**
 * 
 */
UCLASS()
class TGP_PROJECT_API ABaseCharacter : public APaperCharacter
{
	GENERATED_BODY()

public:
	ABaseCharacter();

protected:
	virtual void BeginPlay() override;

	//Components
	UPROPERTY(VisibleAnywhere)
		UBoxComponent* _boxComponent;

	UPROPERTY(VisibleAnywhere)
		UArrowComponent* _direction;

	UPROPERTY(EditAnywhere, Category = "Weapon Component")
		AWeaponBase* _currentWeapon;

	UPROPERTY(EditAnywhere, Category = "Weapon")
		TArray<TSubclassOf<AWeaponBase>> _weaponInventory;

	UPROPERTY(EditAnywhere, Category = "Weapon")
		TSubclassOf<AWeaponBase> _defaultGun;

	UPROPERTY(EditAnywhere, Category = "Weapon")
		TSubclassOf<AWeaponBase> _defaultMelee;

	//Character Status
	bool _isAlive = true;

	//Weapon
	UPROPERTY(EditAnywhere, Category = "Weapon")
	bool _hasWeaponDrawn = false;

	float _weaponOffset = 20.0f;

	//UPROPERTY(EditAnywhere, Category = "Movement Settings")
	FVector2D _movementInput;

	//Sprite Settings
	UPROPERTY(EditAnywhere, Category = "Sprite Settings")
		UPaperFlipbook* _idleFlipbook;
	UPROPERTY(EditAnywhere, Category = "Sprite Settings")
		UPaperFlipbook* _walikingFlipBook;
	UPROPERTY(EditAnywhere, Category = "Sprite Settings")
		float _playRate;
	UPROPERTY(EditAnywhere, Category = "Sprite Settings")
		uint32 _loopFlipbook;

	//Movement Settings
	UPROPERTY(EditAnywhere, Category = "Movement Settings", meta = (ClampMin = "0.0", ClampMax = "200.0", UIMin = "0.0", UIMax = "200.0"))
		float _walkSpeed = 80.0f;

	float _currentMovementSpeed;
	bool _canMove = true;

	//Debug values
	UPROPERTY(EditAnywhere, Category = "Debug")
		float _x = 0.0f;
	UPROPERTY(EditAnywhere, Category = "Debug")
		float _y = 0.0f;
	UPROPERTY(EditAnywhere, Category = "Debug")
		float _z = 0.0f;
public:
	virtual void Tick(float deltaSeconds) override;
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

	UBoxComponent* GetBoxComponent() const { return _boxComponent; }

	void UpdateWeaponPosition(FVector2D dir);


	UFUNCTION(BlueprintCallable, Category = "FlippingFlipbooks")
		void SwitchFlipbook(UPaperFlipbook* newFlipbook);

	UFUNCTION(BlueprintCallable, Category = "FlippingFlipbooks")
		void FlipFlipbook();

	UFUNCTION()
		void Collision(UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult &SweepResult);


	void EnableMovement();

	void StopMovement();

	void MoveUp(float value);
	void MoveRight(float value);

	
	UFUNCTION(BlueprintCallable, Category = "CharacterState")
		bool IsCharacterAlive() const {	return _isAlive;}
	
	UFUNCTION(BlueprintCallable, Category = "WeaponVisibility")
		bool GetIsWeaponDrawn() { return _hasWeaponDrawn; }

	UFUNCTION(BlueprintCallable, Category = "WeaponVisibility")
		void SetIsWeaponDrawn(bool newHasWeaponDrawn) { _hasWeaponDrawn = newHasWeaponDrawn; }

	virtual void Shot();

};
