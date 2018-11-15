// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "CharacterBase.generated.h"

/**
 * 
 */
UCLASS()
class TGP_PROJECT_API ACharacterBase : public APaperCharacter
{
	GENERATED_BODY()
	
protected:
	void Movement();
	
	
	
};
