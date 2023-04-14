#pragma once
#include "Item.h"
class FBread :
    public FItem
{
public:
    FBread();
    virtual ~FBread();

    virtual void GetUsed() override;

};

