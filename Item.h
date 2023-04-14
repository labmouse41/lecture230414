#pragma once
class FItem
{
public:
	FItem();
	virtual ~FItem();
protected:
	virtual void GetUsed()=0;

};

