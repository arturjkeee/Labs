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
	/*
	~Weapon()
	{
		cout << endl;
		cout << this->name << " delete!" << " ; " << this->damage << " delete!" << " ; " << this->weight << " delete!" << endl;
	}
	*/
	bool isHeavy()
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
	int sumWeights(Weapon* someWeapon)
	{
		return this->weight + someWeapon->weight;
	}
	int sumWeights(int someWeight)
	{
		return this->weight + someWeight;
	}
};
int main()
{
	Weapon secondSword("SecondSword", 10, 6);
	cout << "object secondSword - " << " " << secondSword.name << " " << secondSword.damage << " " << secondSword.weight << endl;
	Weapon* newSword = new Weapon("NewSword", 15, 8);
	cout << "object newsword - " << " " << newSword->name << " " << newSword->damage << " " << newSword->weight << endl;
	delete newSword;

	cout << endl;
	
	if (secondSword.isHeavy())
	{
		cout << "secondSword has allowable weight " << endl;
	}
	else
	{
		cout << "secondSword hasnt allowable weight " << endl;
	}

	cout << endl;

	Weapon axe("Axe", 15, 30);

	cout << "sum weitghs - " << axe.sumWeights(&secondSword) << endl;
	cout << "sum weitghs - " << axe.sumWeights(17) << endl;
}