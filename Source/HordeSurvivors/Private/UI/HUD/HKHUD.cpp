// Copyright HeheKrazy


#include "UI/HUD/HKHUD.h"
#include "UI/Widget/HKUserWidget.h"

void AHKHUD::BeginPlay()
{
	Super::BeginPlay();
	
	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverlayWidgetClass);
	Widget->AddToViewport();
}
