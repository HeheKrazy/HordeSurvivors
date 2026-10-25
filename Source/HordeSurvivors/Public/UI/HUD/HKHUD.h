// Copyright HeheKrazy

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "HKHUD.generated.h"

class UHKUserWidget;
/**
 * 
 */
UCLASS()
class HORDESURVIVORS_API AHKHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
	TObjectPtr<UHKUserWidget> OverlayWidget;
	
protected:
	virtual void BeginPlay() override;
	
private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UHKUserWidget> OverlayWidgetClass;
};
