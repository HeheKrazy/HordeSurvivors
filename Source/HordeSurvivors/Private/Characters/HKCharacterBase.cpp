// Copyright HeheKrazy


#include "Characters/HKCharacterBase.h"


AHKCharacterBase::AHKCharacterBase()
{
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponMeshSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

UAbilitySystemComponent* AHKCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UAttributeSet* AHKCharacterBase::GetAttributeSet() const
{
	return AttributeSet;
}

void AHKCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


