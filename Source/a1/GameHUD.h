#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameHUD.generated.h"

class UProgressBar;

UCLASS(Abstract)
class A1_API UGameHUD : public UUserWidget
{
	GENERATED_BODY()

public:
	/** Update HUD with current health. */
	UFUNCTION(BlueprintCallable)
	void SetHealth(float CurrentHealth, float MaxHealth);

	/** Update HUD with current stamina. */
	UFUNCTION(BlueprintCallable)
	void SetStamina(float CurrentStamina, float MaxStamina);

	/** Update HUD with current power. */
	UFUNCTION(BlueprintCallable)
	void SetPo(float CurrentPower, float MaxPower);

	/** Widget to use to display current health. */
	UPROPERTY(meta = (BindWidget))
	UProgressBar* HealthBar;

	/** Widget to use to display current power. */
	UPROPERTY(meta = (BindWidget))
	UProgressBar* PowerBar;

	/** Widget to use to display current stamina. */
	UPROPERTY(meta = (BindWidget))
	UProgressBar* StaminaBar;
};