// Copyright HeheKrazy


#include "Characters/Player/HKCharacter.h"

#include "AbilitySystemComponent.h"
#include "Characters/Player/HKPlayerController.h"
#include "Characters/Player/HKPlayerState.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UI/HUD/HKHUD.h"


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

void AHKCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	
	// Initialize the Ability System Component on the server
	InitAbilityActorInfo();
}

void AHKCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	
	// Initialize the Ability System Component on the client
	InitAbilityActorInfo();
}

void AHKCharacter::InitAbilityActorInfo()
{
	AHKPlayerState* HKPlayerState = GetPlayerState<AHKPlayerState>();
	check(HKPlayerState);
	HKPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(HKPlayerState, this);
	AbilitySystemComponent = HKPlayerState->GetAbilitySystemComponent();
	AttributeSet = HKPlayerState->GetAttributeSet();
	
	if (AHKPlayerController* HKPlayerController = Cast<AHKPlayerController>(GetController()))
	{
		if (AHKHUD* HKHUD = Cast<AHKHUD>(HKPlayerController->GetHUD()))
		{
			HKHUD->InitOverlay(HKPlayerController, HKPlayerState, AbilitySystemComponent, AttributeSet);
		}
	}
}
