// Fill out your copyright notice in the Description page of Project Settings.

#include "AI_Bot_Character.h"
#include "GameFramework/CharacterMovementComponent.h"


// Sets default values
AAI_Bot_Character::AAI_Bot_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 600.0f, 0.0f);
}

// Called when the game starts or when spawned
void AAI_Bot_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAI_Bot_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAI_Bot_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

