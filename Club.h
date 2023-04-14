#pragma once
#include "Item.h"
class FClub : public FItem
{
public:
	FClub();
	virtual ~FClub();

	virtual void GetUsed() override;

};

