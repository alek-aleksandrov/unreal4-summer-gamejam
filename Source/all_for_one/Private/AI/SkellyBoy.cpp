// Fill out your copyright notice in the Description page of Project Settings.


#include "SkellyBoy.h"

// Sets default values
ASkellyBoy::ASkellyBoy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASkellyBoy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASkellyBoy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASkellyBoy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

