// Fill out your copyright notice in the Description page of Project Settings.

#include "InteriorDesign.h"
//#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplay.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "VRPawn.h"

// Sets default values
AVRPawn::AVRPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AVRPawn::BeginPlay()
{
	Super::BeginPlay();

	// Find all of the buttons attached to the player
	TArray<AActor *> childActors;
	GetAttachedActors(childActors);
	for (int childIndex = 0; childIndex < childActors.Num(); childIndex++)
	{		
		IIButton *theButton = Cast<IIButton>(childActors[childIndex]);
		if (theButton)
		{
			buttons.Add(theButton);
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("There are %u buttons"), buttons.Num());
}

// Called every frame
void AVRPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	FVector position;
	FRotator orientation;

	for (auto MotionController : GEngine->MotionControllerDevices)
	{
		MotionController->GetControllerOrientationAndPosition(0, EControllerHand::Left, orientation, position);
	}
	UE_LOG(LogTemp, Warning, TEXT("Controller position, x: %f, y: %f, z: %f"), position.X, position.Y, position.Z);
}

// Called to bind functionality to input
void AVRPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);
}


