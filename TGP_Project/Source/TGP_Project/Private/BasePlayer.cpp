// Fill out your copyright notice in the Description page of Project Settings.

#include "BasePlayer.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Paper2D/Classes/PaperFlipbookComponent.h"

#include "Components/InputComponent.h"

#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Engine.h"
#include "../Public/BasePlayer.h"
#include "Components/BoxComponent.h"

#include "ProjectileBase.h"
#include "WeaponBase.h"
//#include "UnrealString.h"

ABasePlayer::ABasePlayer()
{
	//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	_springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));
	_springArm->SetupAttachment(RootComponent);
	_springArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(-90, 0, 90));
	_springArm->TargetArmLength = 400.f;
	_springArm->bEnableCameraLag = true;
	_springArm->CameraLagSpeed = 3.0f;
	_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("GameCamera"));
	_camera->SetupAttachment(_springArm, USpringArmComponent::SocketName);
	_camera->ProjectionMode = ECameraProjectionMode::Type::Orthographic;
	_camera->PostProcessSettings.AutoExposureMaxBrightness = 1.0f;
	_camera->PostProcessSettings.AutoExposureMinBrightness = 1.0f;
	_camera->PostProcessSettings.AutoExposureBias = 0;


}
// Called when the game starts or when spawned
void ABasePlayer::BeginPlay()
{
	Super::BeginPlay();

	_camera->SetOrthoWidth(_orthoWidth);

	_viewportSize = FVector2D(GEngine->GameViewport->Viewport->GetSizeXY());

	UGameplayStatics::GetPlayerController(GetWorld(), 0)->bShowMouseCursor = true;

	FVector Location = GetActorLocation();
	FRotator Rotation = FRotator(-90.0f, 0.0f, 90.0f);

	_currentWeapon = GetWorld()->SpawnActor<AWeaponBase>(_defaultGun, Location, Rotation);

	_currentWeapon->AttachToComponent(RootComponent, FAttachmentTransformRules::SnapToTargetIncludingScale, FName(TEXT("EquipedWeapon")));

	PutAwayWeapon();
}
// Called every frame
void ABasePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	HandleMovement(DeltaTime);

	ABaseCharacter::Tick(DeltaTime);

	_score -= DeltaTime;

	UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetMousePosition(_mousePosition.X, _mousePosition.Y);
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->DeprojectMousePositionToWorld(_mouseWorld, _mouseWorldDir);
	_mouseWorld.Z = 0.0f;
	FVector actorLocationWithZ0 = GetActorLocation();
	actorLocationWithZ0.Z = 0.0f;
	_playerToMouseDirection = (_mouseWorld - actorLocationWithZ0);
	_playerToMouseDirection.Normalize();

	//_springArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(-90, 0, 90));

	if (_hasWeaponDrawn)
	{
		UpdateWeaponPosition(FVector2D(_playerToMouseDirection.X, _playerToMouseDirection.Y));
	}
	else
	{
		HandlePanning(DeltaTime);
	}
	
	


	if (GEngine)
	{
	}
}
// Called to bind functionality to input
void ABasePlayer::SetupPlayerInputComponent(UInputComponent* InputComponent)
{
	// Respond every frame to the values of our two movement axes, "MoveX" and "MoveY".
	InputComponent->BindAxis("MoveUp", this,    &ABaseCharacter::MoveUp);
	InputComponent->BindAxis("MoveRight", this, &ABaseCharacter::MoveRight);

	InputComponent->BindAxis("ZoomOut", this, &ABasePlayer::ZoomCamera);
	InputComponent->BindAxis("PanCameraX", this, &ABasePlayer::PanCameraX);
	InputComponent->BindAxis("PanCameraY", this, &ABasePlayer::PanCameraY);

	InputComponent->BindAction("SprintAction", IE_Pressed, this, &ABasePlayer::Sprint);
	InputComponent->BindAction("SprintAction", IE_Released, this, &ABasePlayer::SprintRelease);


	InputComponent->BindAction("SneakAction", IE_Pressed, this, &ABasePlayer::Sneak);
	InputComponent->BindAction("AttackAction", IE_Pressed, this, &ABasePlayer::Attack);
	InputComponent->BindAction("InteractAction", IE_Pressed, this, &ABasePlayer::Interact);



}

void ABasePlayer::ZoomCamera(float value)
{
	_orthoWidth = FMath::Clamp<float>((value * _zoomSpeed)+ _orthoWidth, _orthoWidthMin, _orthoWidthMax);
	_camera->SetOrthoWidth(_orthoWidth);
}

void ABasePlayer::PanCameraX(float value)
{
	_panInputVec.X = value;
}

void ABasePlayer::PanCameraY(float value)
{
	_panInputVec.Y = value;
}

void ABasePlayer::Interact()
{
	//Checks if a selected actor inherits the interact interface and exicutes its function.
	if (_hasWeaponDrawn)
	{
		PutAwayWeapon();
	}
}

void ABasePlayer::Attack()
{
	//Switches animation
	//Uses the attack function in the current weapon? or checks collision and calls damaged in the opponent actor?
	if (_currentWeapon != nullptr)
	{
		if (_hasWeaponDrawn)
		{		UGameplayStatics::GetPlayerController(GetWorld(), 0)->DeprojectMousePositionToWorld(_mouseWorld, _mouseWorldDir);
				FVector temp = FVector(FVector2D((_mouseWorld - GetActorLocation()).X, (_mouseWorld - GetActorLocation()).Y), 0.0f);
				temp.Normalize();

				AWeaponBase* WeaponRef = Cast<AWeaponBase>(_currentWeapon);

				WeaponRef->Use(temp);
		}
		else
		{
			PullOutWeapon();
		}
	}

	


	

}

void ABasePlayer::PutAwayWeapon()
{
	_currentWeapon->SetActorHiddenInGame(true);
	_hasWeaponDrawn = false;
}

void ABasePlayer::PullOutWeapon()
{
	_currentWeapon->SetActorHiddenInGame(false);
	_hasWeaponDrawn = true;
}



void ABasePlayer::Sneak()
{
	if (!_isSneaking)
	{
		SprintRelease();
		//Changes movement speed to sneak speed.
		_currentMovementSpeed = _sneakSpeed;

		//Changes animation.
		//makes it harder for enimies to detect player.
		_isSneaking = true;
	}
	else
	{
		_currentMovementSpeed = _walkSpeed;

		//Changes animation.
		//makes it easier for enimies to detect player.

		_isSneaking = false;
	}
}

void ABasePlayer::Sprint()
{
	if (_isSneaking)
	{
		Sneak();
	}
	//Changes movement speed to sprint speed.
	_currentMovementSpeed = _sprintSpeed;
	//Changes animation.
	//Triggers the sprint timer.
	//Makes it easier for enimies to detect the player.
}

void ABasePlayer::Pause()
{
	//triggers event in game mode or game state to pause the game but allow the controller to recieve input
}

void ABasePlayer::Roll() // not sure if it will be implemented!
{
	//Switches animation to Roll animation.
	//Moves the player faster to a location then stops for a second.
}


void ABasePlayer::SprintRelease()
{
	//Resets the Movement speed back to normal
	_currentMovementSpeed = _walkSpeed;
	//Makes it harder for enimies to detect the player
	//Reverts the animation
	//Pauses Timer
}



void ABasePlayer::HandlePanning(float DeltaTime)
{
	_mousePosinNormal = (_mousePosition - (_viewportSize / 2)) / (_viewportSize / 2)*-1;

	float dist = sqrt(pow(_mousePosinNormal.GetAbs().X, 2) + pow(_mousePosinNormal.GetAbs().Y, 2));
	if (abs(dist) > 0.7f)
	{
		FVector OffsetDir;
		float mag = sqrt(pow(_springArm->TargetOffset.X, 2) + pow(_springArm->TargetOffset.Y, 2) + pow(_springArm->TargetOffset.Z, 2));
		OffsetDir.X = _mousePosinNormal.X;
		OffsetDir.Y = _mousePosinNormal.Y;
		OffsetDir.Z = 0.0f;

		_panSpeed = FMath::Clamp<float>(_panSpeed + (DeltaTime / 2), _panSpeedMin, _panSpeedMax);
		_springArm->TargetOffset = OffsetDir * _panMaxDistance;



		if (sqrt(pow(_springArm->TargetOffset.GetAbs().X, 2) + pow(_springArm->TargetOffset.GetAbs().Y, 2) + pow(_springArm->TargetOffset.GetAbs().Z, 2)) < _panMaxDistance)
		{

			_springArm->TargetOffset += OffsetDir * _panSpeed;
		}
		else
		{
			_springArm->TargetOffset = OffsetDir * _panMaxDistance;
		}
	}
	else if (_panInputVec.GetAbs().X > 0 || _panInputVec.GetAbs().Y > 0)
	{
		_panSpeed = FMath::Clamp<float>(_panSpeed + (DeltaTime / 2), _panSpeedMin, _panSpeedMax);
		_springArm->TargetOffset = _panInputVec * _panMaxDistance;




		if (sqrt(pow(_springArm->TargetOffset.GetAbs().X, 2) + pow(_springArm->TargetOffset.GetAbs().Y, 2) + pow(_springArm->TargetOffset.GetAbs().Z, 2)) < _panMaxDistance)
		{
			_springArm->TargetOffset += _panInputVec * _panSpeed;
		}
		else
		{
			_springArm->TargetOffset = _panInputVec * _panMaxDistance;
		}
	}
	else if (_springArm->TargetOffset.GetAbs().X > 0.0f || _springArm->TargetOffset.GetAbs().Y > 0.0f || _springArm->TargetOffset.GetAbs().Z > 0.0f)
	{
		FVector OffsetDir;
		float mag = sqrt(pow(_springArm->TargetOffset.X, 2) + pow(_springArm->TargetOffset.Y, 2) + pow(_springArm->TargetOffset.Z, 2));
		OffsetDir.X = _springArm->TargetOffset.X / mag;
		OffsetDir.Y = _springArm->TargetOffset.Y / mag;
		OffsetDir.Z = 0;

		_panSpeed = _panSpeedMin;

		_springArm->TargetOffset -= OffsetDir * _panResetSpeed;
	}
}


void ABasePlayer::HandleMovement(float DeltaTime)
{
	if (!_movementInput.IsZero())
	{
		SwitchFlipbook(_walikingFlipBook);
		//Scale our movement input axis values by 100 units per second
		if (_movementInput.X < 0)
		{
			GetSprite()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0, 0, 90));
		}
		else if (_movementInput.X > 0)
		{
			GetSprite()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0, 180, -90));
		}

		_movementInput = _movementInput.GetSafeNormal() * _currentMovementSpeed;
		FVector NewLocation = GetActorLocation();
		NewLocation += FVector(0.0f, 1.0f, 0.0f) * (_movementInput.Y) * DeltaTime;
		NewLocation += FVector(-1.0f, 0.0f, 0.0f)   * (_movementInput.X) * DeltaTime;
		SetActorLocation(NewLocation);
	}
	else
	{
		SwitchFlipbook(_idleFlipbook);
	}
}