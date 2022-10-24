#pragma once
#include <iostream>
using namespace std;
enum WeaponType                 
{
	ONEHANDED,
	TWOHANDED,
	BOW,
	CROSSBOW
};

class WeaponClass               
{
public:
	string name;
	int damage;
	int weight;
	WeaponType weaponType;

	WeaponClass(string name, int damage, int weight, WeaponType weaponType) :
		name(name), damage(damage), weight(weight), weaponType(weaponType) {}

	//WeaponClass() { "DefaulName"; 10; 2; weaponType = ONEHANDED; }

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
	bool operator < (WeaponClass& otherWeapon)
	{
		return this->getDamage() < otherWeapon.getDamage();
	}

	virtual void Attack() = 0;
};



class MagicWeaponClass :public WeaponClass     
{
	int additionalDamage;
public:
	MagicWeaponClass(string name, int damage, int weight, WeaponType weaponType, int additionalDamage) :
		WeaponClass(name, damage, weight, weaponType), additionalDamage(additionalDamage) {}

	//MagicWeaponClass() { "DefaultName"; 10; 2; 0; 1; }

	int getAddDamage()
	{
		return additionalDamage;
	};
	int getDamage() override
	{
		return WeaponClass::getDamage() + getAddDamage();
	}

	void Attack() override
	{
		cout << "Magic weapon attacks";
	}

};
class SingleUsedWeapon :public WeaponClass
{
	bool isUsed;
public:
	SingleUsedWeapon(string name,int damage,int weight, WeaponType weaponType,bool isUsed):
		WeaponClass(name,damage,weight,weaponType),isUsed(isUsed){}
	void Attack() override
	{
		if (!isUsed)
		{
			cout << "Weapon attacks";
			isUsed = true;
		}
		else
		{
			cout << "Weapon already used";
		}

	}
};

template <typename T>
class WeaponHand
{
	T isLeft;
	T isRight;
public:
	WeaponHand(T isLeft, T isRight) :isLeft(isLeft), isRight(isRight) {};
	T getIsLeft()
	{
		return this->isLeft;
	}
	T getIsRight()
	{
		return this->isRight;
	}
	void setIsLeft(T a)
	{
		this->isLeft = a;
	}
	void setIsRight(T a)
	{
		this->isRight = a;
	}
};

