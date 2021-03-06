// Copyright © 2013 - 2016 Truing Co.,Ltd All Rights Reserved.

#pragma once

#include "Role.h"
#include "InventoryComponent.h"
#include "EquipmentComponent.h"
#include "FightableInterface.generated.h"

/** Class needed to support InterfaceCast<IRoleInterface>(Object) */
UINTERFACE(Blueprintable)
class UFightableInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

/**  */
class IFightableInterface
{
	GENERATED_IINTERFACE_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Role Player")
	UInventoryComponent* GetInventoryComponent();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Role Player")
	UEquipmentComponent* GetEquipmentComponent();

	// Health
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Role Player")
	//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Role Player", meta = (CallInEditor = "true"))
	int32 GetCurrentHealth();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Role Player")
	int32 GetMaxHealth();

	// Mana
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Role Player")
	int32 GetCurrentMana();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Role Player")
	int32 GetMaxMana();

	// Diet
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Role Player")
	int32 GetCurrentDiet();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Role Player")
	int32 GetMaxDiet();

	// Strength
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Role Player")
	int32 GetStrength();

	// Dexterity
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Role Player")
	int32 GetDexterity();

	// Intelligence
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Role Player")
	int32 GetIntelligence();

	// Charisma
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Role Player")
	int32 GetCharisma();

	// Constitution
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Role Player")
	int32 GetConstitution();

	// Wisdom
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Role Player")
	int32 GetWisdom();
};

