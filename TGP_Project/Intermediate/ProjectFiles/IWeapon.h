#pragma once

#include "ReactToTriggerInterface.generated.h"

UINTERFACE(Blueprintable)
class UWeapon : public UInterface
{
	GENERATED_BODY()
};

class IWeapon
{
	GENERATED_BODY()

public:
	/** React to a trigger volume activating this object. Return true if the reaction succeeds. */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Weapon")
		void FireWeapon();
};