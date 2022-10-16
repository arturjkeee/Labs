#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a = 150;
    float b = 15.933f;
    short c = 250;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    short d = 12;
    string m = " мая ";
    short y = 2003;
    cout << "Моя дата рождения: " << d << m << y << " года" << endl;
    const float c1 = 2.3f;
    const string c2 = "WINDOWS";
    cout << c1 << endl << c2 << endl;
}


