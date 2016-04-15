// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "IButton.h"
#include "GameFramework/Pawn.h"
#include "VRPawn.generated.h"

UCLASS()
class INTERIORDESIGN_API AVRPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AVRPawn();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AldenCategory")
	float customThing;

	UFUNCTION(BlueprintCallable, Category = "Kilograph")
	void setRightMotionController(UMotionControllerComponent *setThisController);

	UFUNCTION(BlueprintCallable, Category = "Kilograph")
	void setLeftMotionController(UMotionControllerComponent *setThisController);

private:
	TArray<IIButton *> buttons;

	UMotionControllerComponent* LeftHandComponent;
	UMotionControllerComponent* RightHandComponent;
};
