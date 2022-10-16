#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введите 1-е число x\n";
    int x;
    cin >> x;
    cout << "Введите 2-е число y\n";
    int y;
    cin >> y;
    cout << "Среднее арифм. чисел x и y = " << (x + y) / 2 << "\n";
    cout << "Введите знак операции (цифру): +, -, * или /\n";
    cout << "1] + " << endl;
    cout << "2] - " << endl;
    cout << "3] * " << endl;
    cout << "4] / " << endl;
    int sign;
    cin >> sign;
    
    /*if (s == 1) {
        cout << "x + y = " << x + y << endl;
    }
    if (s == 2) {
        //cout << "x - y = " << x - y << endl;
    }
    if (s == 3) {
        cout << "x * y = " << x * y << endl;
    }
    if (s == 4) {
        cout << "x / y = " << x / y << endl;
    }
    if(s!="+" and s != "-" and s != "*" and s != "/") {
        cout << "Выбрана неверная операция";
    }*/
    switch (sign)
    {
        case 1:
            cout << "x + y = " << x + y << endl;
            break;
        case 2:
            cout << "x - y = " << x - y << endl;
            break;
        case 3:
            cout << "x * y = " << x * y << endl;
            break;
        case 4:
            cout << "x / y = " << x / y << endl;
            break;
    }
}
