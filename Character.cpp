#include "Character.h"

FCharacter::FCharacter()
{
}

FCharacter::~FCharacter()
{
}

FInventory FCharacter::GetInventory()
{
	return Inventory;
}

FItem* FCharacter::UseItemFromInventory(int index)
{
	return nullptr;
}

void FCharacter::AddItem2Inventory(FItem* NewItem)
{
}




