// Copyright HeheKrazy


#include "UI/WidgetController/OverlayWidgetController.h"
#include "AbilitySystem/HKAttributeSet.h"

void UOverlayWidgetController::BroadcastInitialValues()
{
	const UHKAttributeSet* HKAttributeSet = CastChecked<UHKAttributeSet>(AttributeSet);
	
	OnHealthChanged.Broadcast(HKAttributeSet->GetHealth());
	OnMaxHealthChanged.Broadcast(HKAttributeSet->GetMaxHealth());
	
	//Listen for changes in health and max health
	
}

void UOverlayWidgetController::BindCallbackToDependencies()
{
	//Bind Callbacks to Attributes
	const UHKAttributeSet* HKAttributeSet = CastChecked<UHKAttributeSet>(AttributeSet);
	
	//Health Change Delegate
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		HKAttributeSet->GetHealthAttribute()).AddUObject(this, &UOverlayWidgetController::HealthChanged);
	
	//Max Health Change Delegate
	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		HKAttributeSet->GetMaxHealthAttribute()).AddUObject(this, &UOverlayWidgetController::MaxHealthChanged);
}

void UOverlayWidgetController::HealthChanged(const FOnAttributeChangeData& Data)
{
	OnHealthChanged.Broadcast(Data.NewValue);
}

void UOverlayWidgetController::MaxHealthChanged(const FOnAttributeChangeData& Data)
{
	OnMaxHealthChanged.Broadcast(Data.NewValue);
}
