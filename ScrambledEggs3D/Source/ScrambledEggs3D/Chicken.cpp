// Fill out your copyright notice in the Description page of Project Settings.


#include "Chicken.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
AChicken::AChicken()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collider"));
	RootComponent = CapsuleCollider;

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	SkeletalMesh->SetupAttachment(RootComponent);

	GunSlot = CreateDefaultSubobject<USceneComponent>(TEXT("GunSlot"));
	GunSlot->SetupAttachment(SkeletalMesh);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Sprig Arm"));
	SpringArm->SetupAttachment(RootComponent);
	

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void AChicken::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChicken::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AChicken::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

