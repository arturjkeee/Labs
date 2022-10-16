#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    int a = 35;
    int* pointer_a = &a;
    cout << "pointer_a = " << pointer_a << endl;
    cout << "*pointer_a = " << *pointer_a << endl;
    *pointer_a = 45;
    cout << "a = " << a << endl;
    
    cout << "\n-------\n";
    
    int array[] = { 3,6,9,12 };
    cout << "array[]" << endl;
    for (int* p = &array[0]; p <= &array[3]; p++)
    {
        cout << *p << " ";
    }
    
    cout << "\n-------\n";

    int b = 5;
    int* const pointer_b = &b;
    cout << "pointer_b = " << pointer_b << endl;
    cout << "*pointer_b = " << *pointer_b << endl;
    //pointer_b = &a; <ошибка>
    *pointer_b = 15;
    cout << "*pointer_b = " << *pointer_b << endl;
}

