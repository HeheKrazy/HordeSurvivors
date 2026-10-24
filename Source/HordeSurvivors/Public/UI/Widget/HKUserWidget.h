// Copyright HeheKrazy

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HKUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class HORDESURVIVORS_API UHKUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION(BlueprintCallable)
	void SetWidgetController(UObject* NewWidgetController);
	
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UObject> WidgetController;
	
protected:
	
	UFUNCTION(BlueprintImplementableEvent)
	void WidgetControllerSet();
private:
};
