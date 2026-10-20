// Copyright HeheKrazy


#include "Characters/HKCharacterBase.h"


AHKCharacterBase::AHKCharacterBase()
{
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponMeshSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

void AHKCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


