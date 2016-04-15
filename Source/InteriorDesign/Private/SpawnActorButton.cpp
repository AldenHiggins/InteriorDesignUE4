// Fill out your copyright notice in the Description page of Project Settings.

#include "InteriorDesign.h"
#include "SpawnActorButton.h"

// Sets default values
ASpawnActorButton::ASpawnActorButton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASpawnActorButton::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASpawnActorButton::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
}

void ASpawnActorButton::hoverAction()
{
	UE_LOG(LogTemp, Warning, TEXT("Called the spawn actor hover action, nice job young man :)"));
}

void ASpawnActorButton::releaseAction()
{
	//UE_LOG(LogTemp, Warning, TEXT("Release action"));
}

void ASpawnActorButton::pressAction()
{
	UE_LOG(LogTemp, Warning, TEXT("Looks like you pressed a button you cool dude ;)"));
}
