#pragma once
#include <vector>
#include "Item.h"

class FInventory
{
public:

	FInventory();
	virtual ~FInventory();

	void ItemIn(FItem* _Item);
	FItem* ItemOut(int index);
	void ItemAllOut();

private:
	std::vector<FItem*> Items;
};

