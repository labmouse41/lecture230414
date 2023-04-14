#pragma once
#include "Item.h"
class FGun : public FItem
{
public:

	FGun();
	virtual ~FGun();

	virtual void GetUsed() override;

};

