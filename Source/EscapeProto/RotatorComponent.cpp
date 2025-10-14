// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatorComponent.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
URotatorComponent::URotatorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URotatorComponent::BeginPlay()
{
	Super::BeginPlay();

	StartRotation = GetOwner()->GetActorRotation();
	
}


// Called every frame
void URotatorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (ShouldMove)
	{
		TargetRotation = StartRotation + TargetRotationAngle;
	}
	else
	{
		TargetRotation = StartRotation;
	}

	FRotator CurrentRotation = GetOwner()->GetActorRotation();

	ReachedTarget = CurrentRotation.Equals(TargetRotation);

	if (!ReachedTarget) 
	{
		

		FRotator NewRotation = FMath::RInterpConstantTo(CurrentRotation, TargetRotation, DeltaTime, RotationInterpSpeed);

		GetOwner()->SetActorRotation(NewRotation);
	}
}

