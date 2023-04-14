#pragma once
#include "Inventory.h"
#include "Item.h"

class FCharacter
{
public:
	FCharacter();
	virtual ~FCharacter();
	FInventory GetInventory();
	FItem* UseItemFromInventory(int index);
	void AddItem2Inventory(FItem* NewItem);

private:
	FInventory Inventory;
};

