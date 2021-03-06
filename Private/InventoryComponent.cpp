// Copyright © 2013 - 2016 Truing Co.,Ltd All Rights Reserved.

#include "UnrealRPGPrivatePCH.h"
#include "InventoryComponent.h"
#include "Net/UnrealNetwork.h"


// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryComponent::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

FItemBase UInventoryComponent::GetItemById(int32 index)
{
	TSharedPtr<FItemBase> itemPtr = Inventory.GetItemAt(index);
	if (itemPtr.IsValid())
	{
		return *itemPtr;
	}

	return FItemBase::None;
}

bool UInventoryComponent::IsItemExist(int32 index)
{
	return Inventory.GetItemAt(index).IsValid();
}

void UInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(UInventoryComponent, Inventory, COND_SimulatedOnly);
}

