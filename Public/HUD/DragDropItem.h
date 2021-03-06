// Copyright © 2013 - 2016 Truing Co.,Ltd All Rights Reserved.

#pragma once

#include "ItemBase.h"
#include "Blueprint/DragDropOperation.h"
#include "DragDropItem.generated.h"

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class  EInvMenu : uint8
{
	IM_None 		UMETA(DisplayName = "None"),
	IM_Inventory 		UMETA(DisplayName = "Inventory"),
	IM_Equipment 	UMETA(DisplayName = "Equiptment"),
	IM_Hotbar		UMETA(DisplayName = "Hotbar"),
	IM_Container		UMETA(DisplayName = "Container"),
	IM_LootList		UMETA(DisplayName = "LootList")
};

/**
 * 
 */
UCLASS(BlueprintType)
class UNREALRPG_API UDragDropItem : public UDragDropOperation
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InventoryHUD", Meta=(ExposeOnSpawn = true))
	FItemBase DraggedItem;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InventoryHUD", Meta=(ExposeOnSpawn = true))
	int32 SlotIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InventoryHUD", Meta=(ExposeOnSpawn = true))
	EInvMenu DragFrom;
};
