#include <iostream>
#include "WeaponClass.h"

int main()
{
    WeaponClass sword("Sword", 4, 5);
    std::cout << "object sword - " << sword.name << endl;
    std::cout << "object isHeavy - " << sword.isHeavy() << endl;
}

