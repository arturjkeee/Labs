#include "WeaponClass.h"

int main()
{
	WeaponClass sword("Sword 1", 10, 2, ONEHANDED);
	cout << "Sword 1 damage: " << sword.getDamage() << endl;
	
	MagicWeaponClass magicStaff("MagicStaff", 10, 2, ONEHANDED, 2);
	cout << "MagicStaff damage: " << magicStaff.getDamage() << endl;

	cout << (magicStaff > sword) << endl;
	cout << (magicStaff < sword) << endl;
}

