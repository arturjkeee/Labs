#include <iostream>
#include "WeaponClass.h"
int main()
{
    //WeaponClass sword("Sword",10,2,ONEHANDED); 
    MagicWeaponClass staff ("FirstStaff" , 10,2,TWOHANDED,3);
    staff.Attack();
   
    cout << "\n\n";

    SingleUsedWeapon knife ("FirstKnife", 5, 1, ONEHANDED,false);
    knife.Attack();
    
    cout << "\n\n";
   
    knife.Attack();
    
    cout << "\n\n";

    WeaponHand<bool> someWeapon(0, 1);
    cout << someWeapon.getIsLeft() << " " << someWeapon.getIsRight() << endl;
    WeaponHand<string> anotherWeapon("Is lefthand", "Is righthand");
    cout << anotherWeapon.getIsLeft() << " " << anotherWeapon.getIsRight() << endl;
}
