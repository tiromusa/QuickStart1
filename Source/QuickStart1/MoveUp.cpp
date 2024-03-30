// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveUp.h"

// Sets default values
AMoveUp::AMoveUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMoveUp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoveUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    
    FVector NewLocation = GetActorLocation();
    NewLocation.X += 20.f * DeltaTime;
    SetActorLocation(NewLocation);
    
    FRotator NewRotation = GetActorRotation();
    NewRotation.Yaw += 20.f * DeltaTime;
    SetActorRotation(NewRotation);
    
        
  
   
}

