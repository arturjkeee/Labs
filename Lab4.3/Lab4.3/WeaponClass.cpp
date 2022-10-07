#include "WeaponClass.h"

WeaponClass::WeaponClass(string name, int damage, int weight) :
	name(name), damage(damage), weight(weight) {}

bool WeaponClass::isHeavy()
{
	if (this->weight <= 7)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int WeaponClass::sumWeights(WeaponClass* someWeapon)
{
	return this->weight + someWeapon->weight;
}

int WeaponClass::sumWeights(int someWeight)
{
	return this->weight + someWeight;
}
