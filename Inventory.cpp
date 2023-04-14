#include "Inventory.h"

FInventory::FInventory()
{
}

FInventory::~FInventory()
{
}

void FInventory::ItemIn(FItem* _Item)
{
	Items.push_back(_Item);
}

FItem* FInventory::ItemOut(int index)
{
	return Items[index];
}

void FInventory::ItemAllOut()
{
	Items.clear();
}
