// Copyright HeheKrazy

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HKEffectActor.generated.h"
class UGameplayEffect;

UCLASS()
class HORDESURVIVORS_API AHKEffectActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AHKEffectActor();

protected:
	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintCallable)
	void ApplyGameplayEffectToTarger(AActor* Target, TSubclassOf<UGameplayEffect> GameplayEffectClass);
	
	TSubclassOf<UGameplayEffect> InstantGameplayEffect;
	
private:

};
