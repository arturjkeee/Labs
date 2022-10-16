#pragma once
#include <iostream>
using namespace std;
enum WeaponType                 //Класс перечисления
{
	ONEHANDED,
	TWOHANDED,
	BOW,
	CROSSBOW
};

class WeaponClass               //Класс оружия
{
public:
	string name;
	int damage;
	int weight;
	WeaponType weaponType;

	WeaponClass(string name, int damage, int weight, WeaponType weaponType) :
		name(name), damage(damage), weight(weight), weaponType(weaponType) {}

	WeaponClass() { "DefaulName"; 10; 2; weaponType = ONEHANDED; }

	WeaponType getType()
	{
		return weaponType;
	}
	
	
	virtual int getDamage()
	{
		return this->damage;
	}
	
	
	bool operator > (WeaponClass& otherWeapon)
	{
		return this->getDamage() > otherWeapon.getDamage();
	}
	bool operator < (WeaponClass &otherWeapon)
	{
		return this->getDamage() < otherWeapon.getDamage();
	}
};



class MagicWeaponClass :public WeaponClass     //Дочерний класс магич.оружия
{
	int additionalDamage;
public:
	MagicWeaponClass(string name, int damage, int weight, WeaponType weaponType, int additionalDamage) :
		WeaponClass(name, damage, weight, weaponType), additionalDamage(additionalDamage) {}

	MagicWeaponClass() { "DefaultName"; 10; 2; 0; 1; }

	int getAddDamage()
	{
		return additionalDamage;
	};
	int getDamage() override
	{
		return WeaponClass::getDamage() + getAddDamage();
	}

};
