#include <iostream>
#include "Character.h"
#include "Sword.h"
#include "Beverage.h"
#include "Bread.h"
#include "Gun.h"

using namespace std;

int main()
{
	FCharacter* player0 = new FCharacter();
	
	player0->AddItem2Inventory(new FBeverage());

	return 0;
}

