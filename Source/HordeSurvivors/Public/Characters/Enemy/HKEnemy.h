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
	AHKEnemy();
	
	/* Enemy Interface */
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	/* End Enemy Interface */
	
	virtual void BeginPlay() override;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	bool isHighlighted = false;
	
};
