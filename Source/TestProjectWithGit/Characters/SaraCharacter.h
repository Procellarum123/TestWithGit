// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SaraCharacter.generated.h"

UCLASS()
class TESTPROJECTWITHGIT_API ASaraCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASaraCharacter();


	// TOTO je na to a tamto


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



	// TOTO je na to a tamto

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
