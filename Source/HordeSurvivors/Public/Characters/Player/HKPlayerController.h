// Copyright HeheKrazy

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HKPlayerController.generated.h"
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
/**
 * 
 */
UCLASS()
class HORDESURVIVORS_API AHKPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AHKPlayerController();	
	
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	
	
private:
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputMappingContext> HKContext;
	
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;
	
	void Move(const FInputActionValue& InputActionValue);
	
	
};

