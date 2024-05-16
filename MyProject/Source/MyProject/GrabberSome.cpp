// Fill out your copyright notice in the Description page of Project Settings.


#include "GrabberSome.h"

// Sets default values for this component's properties
UGrabberSome::UGrabberSome()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// get the PhysicsHandle
	

	// ...
}


// Called when the game starts
void UGrabberSome::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGrabberSome::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	// get the PhysicsHandle
	UPhysicsHandleComponent* PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
  
	// grab only if there is a physics handle and the player is not grabbing anything.
	if(PhysicsHandle && PhysicsHandle->GetGrabbedComponent() != nullptr) {
		// the grabbed object will be placed a little in front of the user.
		FVector TargetLocation = GetComponentLocation() + GetForwardVector()  * 200;
		PhysicsHandle->SetTargetLocationAndRotation(TargetLocation, GetComponentRotation());
	}
}
	// ...
void UGrabberSome::Grab()
{
	// get the PhysicsHandle
	UPhysicsHandleComponent* PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();

	// early return if null
	if(PhysicsHandle == nullptr) {
		return;
	}

	// Do the sweep
	FVector Start = GetComponentLocation();
	FVector End = Start + GetForwardVector() * 200;    
	FCollisionShape Sphere = FCollisionShape::MakeSphere(140);
	FHitResult HitResult;

	bool HasHit = GetWorld()->SweepSingleByChannel(HitResult, Start, End, 
		FQuat::Identity, ECC_GameTraceChannel1, Sphere);
	DrawDebugSphere(GetWorld(), End, 10, 10, FColor::Blue, false, 5);
	if(HasHit) 
	{
		// grab the hit component, no bone defined (NAME_None), 
		// with ImpactPoint as the Location and the Grabber’s rotation as the Rotation. 
		PhysicsHandle->GrabComponentAtLocationWithRotation(
			HitResult.GetComponent(),
			NAME_None,
			HitResult.ImpactPoint,
			GetComponentRotation()           
		);    
	} 

}

void UGrabberSome::Release()
{
	UPhysicsHandleComponent* PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();

	// release the component if there is a physics handle and if something has been grabbed
	if(PhysicsHandle && PhysicsHandle->GetGrabbedComponent() != nullptr) 
	{
		// first, wake up RBs and then release to ensure that the grabbed
		// object will be woken up if it is sleeping.
		PhysicsHandle->GetGrabbedComponent()->WakeAllRigidBodies(); // 사용자가 잡고 있던 컴포넌트의 rg 를 깨운다
		PhysicsHandle->ReleaseComponent(); // 놓아준다.
	}

}



