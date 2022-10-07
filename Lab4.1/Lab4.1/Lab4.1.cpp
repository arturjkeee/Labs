#include <iostream>
#include <Windows.h>
using namespace std;

class Weapon
{
public:
	string name;
	int damage;
	int weight;

	Weapon(string name, int damage, int weight) :
		name(name), damage(damage), weight(weight) {}

	Weapon()
	{
		name = "Default Name";
		damage = 1;
		weight = 1;
	}
};
int main()
{
	Weapon weapon;
	cout << "object weapon - " << " " << weapon.name << " " << weapon.damage << " " << weapon.weight << endl;
	Weapon sword("Sword", 5, 3);
	cout << "object sword - " << " " << sword.name << " " << sword.damage << " " << sword.weight << endl;
}

