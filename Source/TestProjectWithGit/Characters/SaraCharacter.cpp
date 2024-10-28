// Fill out your copyright notice in the Description page of Project Settings.


#include "SaraCharacter.h"

// Sets default values
ASaraCharacter::ASaraCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASaraCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASaraCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASaraCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

