// Fill out your copyright notice in the Description page of Project Settings.


#include "Finder.h"


// Sets default values for this component's properties
UFinder::UFinder()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	FindSomeOne = "FindWhat";
	FindCar = "FindCar";
	FindCoffee = "DrinkCoffee";

		// ...
}


// Called when the game starts
void UFinder::BeginPlay()
{
	Super::BeginPlay();
	
	// ...
}


// Called every frame
void UFinder::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	

}


void UFinder::Find()
{
	UWorld *World = GetWorld(); 
	FVector Start = GetComponentLocation();
	FVector End = Start + GetForwardVector() * 400;
	DrawDebugLine(World, Start, End, FColor::Red);

	t1=false;
	t2=false;
	t3=false;

	
	// Definition of a collision sphere with radius 100
	FCollisionShape Sphere = FCollisionShape::MakeSphere(100);

	// result of the sweep (out param)
	FHitResult HitResult;

	// Do geometry sweep with no rotation (FQuat::Identity).
	bool HasHit = GetWorld()->SweepSingleByChannel(
		HitResult, 
		Start, 
		End, 
		FQuat::Identity, 
		ECC_GameTraceChannel1,
		Sphere
	);

	if(HasHit) 
	{
		// Get the actor that was hit. 
		// We need to use a pointer because GetActor() returns one.
		AActor* HitActor = HitResult.GetActor();

		// Print the actor's name

		if(*HitActor->GetActorNameOrLabel()==FindSomeOne)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Find Correct!"));
			t1=true;
			
		}
		else if(*HitActor->GetActorNameOrLabel()==FindCar)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Find Car!"));
			t2=true;
			
		}
		else if(*HitActor->GetActorNameOrLabel()==FindCoffee)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Find Coffee!"));
			t3=true;
			
		}
	} 
	else 
	{
		UE_LOG(LogTemp, Display, TEXT("No Actor hit"));
	}

}

bool UFinder::Find_Car()
{
	return t2;
}

bool UFinder::Find_Coffee()
{
	return t3;
}
bool UFinder::Find_People()
{
	return t1;
}





