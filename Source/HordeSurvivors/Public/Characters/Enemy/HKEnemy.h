// Copyright HeheKrazy

#pragma once

#include "CoreMinimal.h"
#include "Characters/HKCharacterBase.h"
#include "Interaction/HighlightInterface.h"
#include "HKEnemy.generated.h"

/**
 * 
 */
UCLASS()
class HORDESURVIVORS_API AHKEnemy : public AHKCharacterBase, public IHighlightInterface
{
	GENERATED_BODY()
	
public:
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	bool isHighlighted = false;
	
};
