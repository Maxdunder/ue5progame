#include "GameHUD.h"
#include "Components/ProgressBar.h"
#include "Kismet/KismetMathLibrary.h" // or include CoreMinimal.h for FMath

void UGameHUD::SetHealth(float CurrentHealth, float MaxHealth)
{
	if (!HealthBar) return;

	if (MaxHealth <= 0.f)
	{
		HealthBar->SetPercent(0.f);
		UE_LOG(LogTemp, Warning, TEXT("UGameHUD::SetHealth - MaxHealth <= 0"));
		return;
	}

	const float Percent = FMath::Clamp(CurrentHealth / MaxHealth, 0.f, 1.f);
	HealthBar->SetPercent(Percent);
}

void UGameHUD::SetPo(float CurrentPower, float MaxPower)
{
	if (PowerBar)
	{
		PowerBar->SetPercent(CurrentPower / MaxPower);
	}
}

void UGameHUD::SetStamina(float CurrentStamina, float MaxStamina)
{
	if (!StaminaBar) return;

	if (MaxStamina <= 0.f)
	{
		StaminaBar->SetPercent(0.f);
		UE_LOG(LogTemp, Warning, TEXT("UGameHUD::SetStamina - MaxStamina <= 0"));
		return;
	}

	const float Percent = FMath::Clamp(CurrentStamina / MaxStamina, 0.f, 1.f);
	StaminaBar->SetPercent(Percent);
}