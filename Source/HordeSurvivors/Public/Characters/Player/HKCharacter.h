// Copyright HeheKrazy

#pragma once

#include "CoreMinimal.h"
#include "Characters/HKCharacterBase.h"
#include "HKCharacter.generated.h"

/**
 * 
 */
UCLASS()
class HORDESURVIVORS_API AHKCharacter : public AHKCharacterBase
{
	GENERATED_BODY()
	
public:
	AHKCharacter();
	
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	
private:
	void InitAbilityActorInfo();
};
