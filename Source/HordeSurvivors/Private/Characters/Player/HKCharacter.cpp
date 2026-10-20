// Copyright HeheKrazy


#include "Characters/Player/HKCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"

AHKCharacter::AHKCharacter()
{
	//Default Character Movement Settings
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
}
