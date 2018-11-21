// Fill out your copyright notice in the Description page of Project Settings.

#include "BasePlayer.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Components/InputComponent.h"

#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Engine.h"
#include "../Public/BasePlayer.h"
//#include "UnrealString.h"



ABasePlayer::ABasePlayer()
{
	//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(-90.0f, 0.0f, 0.0f));
	SpringArm->TargetArmLength = 400.f;
	SpringArm->bEnableCameraLag = true;
	SpringArm->CameraLagSpeed = 3.0f;
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("GameCamera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->ProjectionMode = ECameraProjectionMode::Type::Orthographic;
	Camera->PostProcessSettings.AutoExposureMaxBrightness = 1.0f;
	Camera->PostProcessSettings.AutoExposureMinBrightness = 1.0f;
	Camera->PostProcessSettings.AutoExposureBias = 0;


}
// Called when the game starts or when spawned
void ABasePlayer::BeginPlay()
{
	Super::BeginPlay();

	Camera->SetOrthoWidth(OrthoWidth);

	ViewportSize = FVector2D(GEngine->GameViewport->Viewport->GetSizeXY());

	UGameplayStatics::GetPlayerController(GetWorld(), 0)->bShowMouseCursor = true;
}
// Called every frame
void ABasePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ABaseCharacter::Tick(DeltaTime);


	UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetMousePosition(MousePosition.X, MousePosition.Y);
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->DeprojectMousePositionToWorld(MouseWorld, MouseWorldDir);

	HandlePanning(DeltaTime);
	

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
}

void ABasePlayer::ZoomCamera(float value)
{
	OrthoWidth = FMath::Clamp<float>((value * ZoomSpeed)+ OrthoWidth, OrthoWidthMin, OrthoWidthMax);
	Camera->SetOrthoWidth(OrthoWidth);
}

void ABasePlayer::PanCameraX(float value)
{
	PanInputVec.Y = value;
}

void ABasePlayer::PanCameraY(float value)
{
	PanInputVec.X = value;
}

void ABasePlayer::Interact()
{
	//Checks if a selected actor inherits the interact interface and exicutes its function.
}

void ABasePlayer::Attack()
{
	//Switches animation
	//Uses the attack function in the current weapon? or checks collision and calls damaged in the opponent actor?
}

void ABasePlayer::Sneak()
{
	if (!bSneaking)
	{
		SprintRelease();
		//Changes movement speed to sneak speed.
		CurrentMovementSpeed = SneakSpeed;

		//Changes animation.
		//makes it harder for enimies to detect player.
		bSneaking = true;
	}
	else
	{
		CurrentMovementSpeed = WalkSpeed;

		//Changes animation.
		//makes it easier for enimies to detect player.

		bSneaking = false;
	}
}

void ABasePlayer::Sprint()
{
	if (bSneaking)
	{
		Sneak();
	}
	//Changes movement speed to sprint speed.
	CurrentMovementSpeed = SprintSpeed;
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
	CurrentMovementSpeed = WalkSpeed;
	//Makes it harder for enimies to detect the player
	//Reverts the animation
	//Pauses Timer
}



void ABasePlayer::HandlePanning(float DeltaTime)
{
	MousePosinNormal = (MousePosition - (ViewportSize / 2)) / (ViewportSize / 2);

	float dist = sqrt(pow(MousePosinNormal.GetAbs().X, 2) + pow(MousePosinNormal.GetAbs().Y, 2));
	if (abs(dist) > 0.7f)
	{
		FVector OffsetDir;
		float mag = sqrt(pow(SpringArm->TargetOffset.X, 2) + pow(SpringArm->TargetOffset.Y, 2) + pow(SpringArm->TargetOffset.Z, 2));
		OffsetDir.X = MousePosinNormal.Y*-1;
		OffsetDir.Y = MousePosinNormal.X;
		OffsetDir.Z = 0.0f;

		PanSpeed = FMath::Clamp<float>(PanSpeed + (DeltaTime / 2), PanSpeedMin, PanSpeedMax);
		SpringArm->TargetOffset = OffsetDir * PanMaxDistance;



		if (sqrt(pow(SpringArm->TargetOffset.GetAbs().X, 2) + pow(SpringArm->TargetOffset.GetAbs().Y, 2) + pow(SpringArm->TargetOffset.GetAbs().Z, 2)) < PanMaxDistance)
		{

			SpringArm->TargetOffset += OffsetDir * PanSpeed;
		}
		else
		{
			SpringArm->TargetOffset = OffsetDir * PanMaxDistance;
		}
	}
	else if (PanInputVec.GetAbs().X > 0 || PanInputVec.GetAbs().Y > 0)
	{
		PanSpeed = FMath::Clamp<float>(PanSpeed + (DeltaTime / 2), PanSpeedMin, PanSpeedMax);
		SpringArm->TargetOffset = PanInputVec * PanMaxDistance;




		if (sqrt(pow(SpringArm->TargetOffset.GetAbs().X, 2) + pow(SpringArm->TargetOffset.GetAbs().Y, 2) + pow(SpringArm->TargetOffset.GetAbs().Z, 2)) < PanMaxDistance)
		{
			SpringArm->TargetOffset += PanInputVec * PanSpeed;
		}
		else
		{
			SpringArm->TargetOffset = PanInputVec * PanMaxDistance;
		}
	}
	else if (SpringArm->TargetOffset.GetAbs().X > 0.0f || SpringArm->TargetOffset.GetAbs().Y > 0.0f || SpringArm->TargetOffset.GetAbs().Z > 0.0f)
	{
		FVector OffsetDir;
		float mag = sqrt(pow(SpringArm->TargetOffset.X, 2) + pow(SpringArm->TargetOffset.Y, 2) + pow(SpringArm->TargetOffset.Z, 2));
		OffsetDir.X = SpringArm->TargetOffset.X / mag;
		OffsetDir.Y = SpringArm->TargetOffset.Y / mag;
		OffsetDir.Z = 0;

		PanSpeed = PanSpeedMin;

		SpringArm->TargetOffset -= OffsetDir * PanResetSpeed;
	}
}