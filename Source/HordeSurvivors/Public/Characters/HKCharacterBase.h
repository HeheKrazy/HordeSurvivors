// Copyright HeheKrazy

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HKCharacterBase.generated.h"

UCLASS()
class HORDESURVIVORS_API AHKCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AHKCharacterBase();

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;


};
