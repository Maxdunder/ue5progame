#include "GameHUD.h"
#include "Components/ProgressBar.h"
#include "Kismet/KismetMathLibrary.h" // optional; FMath is available via CoreMinimal
#include "GameHUD.h"
#include "blueprint/userwidget.h"

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

void UGameHUD::SetPower(float CurrentPower, float MaxPower)
{
	if (!PowerBar) return;

	if (MaxPower <= 0.f)
	{
		PowerBar->SetPercent(0.f);
		UE_LOG(LogTemp, Warning, TEXT("UGameHUD::SetPower - MaxPower <= 0"));
		return;
	}

	const float Percent = FMath::Clamp(CurrentPower / MaxPower, 0.f, 1.f);
	PowerBar->SetPercent(Percent);
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