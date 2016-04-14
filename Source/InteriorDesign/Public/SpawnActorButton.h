// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "IButton.h"
#include "GameFramework/Actor.h"
#include "SpawnActorButton.generated.h"

UCLASS()
class INTERIORDESIGN_API ASpawnActorButton : public AActor, public IIButton
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnActorButton();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	void hoverAction() override;

	void releaseAction() override;

	void pressAction() override;
};
