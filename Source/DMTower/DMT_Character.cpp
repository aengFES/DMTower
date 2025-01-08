// Fill out your copyright notice in the Description page of Project Settings.


#include "DMT_Character.h"

// Sets default values
ADMT_Character::ADMT_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADMT_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADMT_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADMT_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

