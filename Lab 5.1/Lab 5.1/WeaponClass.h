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

	WeaponClass(string name, int damage, int weight, WeaponType weaponType):
		name(name),damage(damage),weight(weight),weaponType(weaponType){}
	
	WeaponClass() { "DefaulName"; 10; 2; weaponType = ONEHANDED; }

	WeaponType getType()
	{
		return weaponType;
	}
};
struct Player
{
	int id;
	string login;
	string password;
};
void printPlayer(Player& Player)
{
	cout << Player.id << " " << Player.login << " " << Player.password << endl;
}

class MagicWeaponClass :public WeaponClass
{
	int additionalDamage;
public:
	MagicWeaponClass(string name, int damage, int weight, WeaponType weaponType, int additionalDamage) :
		WeaponClass(name, damage, weight,weaponType),additionalDamage(additionalDamage) {}
	
	MagicWeaponClass() { "DefaultName"; 10; 2; 0; 1; }

	int getAddDamage()
	{
		return additionalDamage;
	};

};