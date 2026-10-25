// Copyright HeheKrazy


#include "UI/WidgetController/OverlayWidgetController.h"
#include "AbilitySystem/HKAttributeSet.h"

void UOverlayWidgetController::BroadcastInitialValues()
{
	const UHKAttributeSet* HKAttributeSet = CastChecked<UHKAttributeSet>(AttributeSet);
	
	OnHealthChanged.Broadcast(HKAttributeSet->GetHealth());
	OnMaxHealthChanged.Broadcast(HKAttributeSet->GetMaxHealth());
}
