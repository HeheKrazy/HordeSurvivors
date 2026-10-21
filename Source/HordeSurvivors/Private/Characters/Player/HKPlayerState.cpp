// Copyright HeheKrazy


#include "Characters/Player/HKPlayerState.h"
#include "AbilitySystem/HKAbilitySystemComponent.h"
#include "AbilitySystem/HKAttributeSet.h"


AHKPlayerState::AHKPlayerState()
{
	//Init the Ability System Component and Attribute Set
	AbilitySystemComponent = CreateDefaultSubobject<UHKAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	
	AttributeSet = CreateDefaultSubobject<UHKAttributeSet>(TEXT("AttributeSet"));
	
	SetNetUpdateFrequency(100.f);
}

UAbilitySystemComponent* AHKPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UAttributeSet* AHKPlayerState::GetAttributeSet() const
{
	return AttributeSet;
}
