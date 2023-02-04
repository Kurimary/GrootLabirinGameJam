// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseCharacter::DealDamage(float Damage)
{

	SetHealth(FMath::Clamp(GetHealth() - Damage, 0.0f, GetMaxHealth()));
}

void ABaseCharacter::SetHealth(float InHealth)
{
	Health = InHealth;
}

float ABaseCharacter::GetHealth() const
{
	return Health;
}

void ABaseCharacter::SetMaxHealth(float InMaxHealth)
{
	MaxHealth = InMaxHealth;
}

float ABaseCharacter::GetMaxHealth() const
{
	return MaxHealth;
}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

