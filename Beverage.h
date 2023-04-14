#pragma once
#include "Item.h"
class FBeverage :
    public FItem
{
public:
    FBeverage();
    virtual ~FBeverage();

    virtual void GetUsed() override;

};

