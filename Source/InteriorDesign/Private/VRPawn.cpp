// Fill out your copyright notice in the Description page of Project Settings.

#include "InteriorDesign.h"
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
		UE_LOG(LogTemp, Warning, TEXT("Component name: %s."), *childActors[childIndex]->GetName());
		
		IIButton *theButton = Cast<IIButton>(childActors[childIndex]);

		if (theButton)
		{
			buttons.Add(theButton);
			UE_LOG(LogTemp, Warning, TEXT("Component implements button"));
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("There are %u buttons"), buttons.Num());
}

// Called every frame
void AVRPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
}

// Called to bind functionality to input
void AVRPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);
}

