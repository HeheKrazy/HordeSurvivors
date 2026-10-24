// Copyright HeheKrazy


#include "UI/Widget/HKUserWidget.h"

void UHKUserWidget::SetWidgetController(UObject* NewWidgetController)
{
	WidgetController = NewWidgetController;
	WidgetControllerSet();
}
