// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor1.h"

// Sets default values
AMyActor1::AMyActor1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
    VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    VisualMesh->SetupAttachment(RootComponent);
    
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
    
    if (CubeVisualAsset.Succeeded())
    {
        
        VisualMesh-> SetStaticMesh(CubeVisualAsset.Object);
        VisualMesh-> SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
        
    }

}

// Called when the game starts or when spawned
void AMyActor1::BeginPlay()
{
	Super::BeginPlay();
    //ScaleActor();
    
	
}

// Called every frame
void AMyActor1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    
    FVector NewLocation = GetActorLocation();
    
    FRotator NewRotation = GetActorRotation();
    
    FVector NewScale = GetActorScale3D();
    
    float RunningTime = GetGameTimeSinceCreation();
    float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
    
    NewLocation.Z += DeltaHeight * FloatSpeed;
    
    float DeltaRotation = DeltaTime * RotationSpeed;
    
    NewRotation.Yaw += DeltaRotation;
    
    SetActorLocationAndRotation(NewLocation, NewRotation);
    
    NewScale.Z += 0.05f * DeltaTime;
    
    SetActorScale3D(NewScale);
    
    
    
    
}
//void AMyActor1::ScaleActor()
//{
    //FVector ScaleChange = GetActorScale3D();
    //ScaleChange.X += 3.0f;
    //SetActorScale3D(ScaleChange);
    
    
//}

