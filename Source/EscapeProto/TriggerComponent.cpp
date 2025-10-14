// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"

UTriggerComponent::UTriggerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();

	if (TargetActor)
	{
		Mover = TargetActor->FindComponentByClass<UMover>();
		if (Mover)
		{
			Mover->ShouldMove = true;
		}
		
		RotatorComponent = TargetActor->FindComponentByClass<URotatorComponent>();
		if (RotatorComponent)
		{
			RotatorComponent->ShouldMove = true;
		}
		
	}
	

}

void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
