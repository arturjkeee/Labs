#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    int var1 = 3;
    int var2 = 6;
    int var3 = 11;
    cout << "sum\n";
    cout << var1 << " + "<< var2 << " = " << var1 + var2 << "\n";
    cout << "dif\n";
    cout << var3 << " - " << var2 << " = " << var2 + var3 << "\n";
    cout << "prod\n";
    cout << var1 << " * " << var3 << " = " << var1 * var3 << "\n";
    cout << "div\n";
    cout << var3 << " / " << var1 << " = " << var3 / var1 << "\n";
    cout << "mod\n";
    cout << var1 << "%" << var2 << " = " << var1 % var2 << "\n";
    cout << "(((145 - 100 / 20)/ 20) * 50) + 45 = " << (((145 - 100 / 20) / 20) * 50) + 45 << "\n";
    int x = 3;
    int y = 7;
    int ans1 = x & y;
    int ans2 = x | y;
    int ans3 = x ^ y;
    cout << x << " & " << y << " = " << ans1 << "\n";
    cout << x << " | " << y << " = " << ans2 << "\n";
    cout << x << " ^ " << y << " = " << ans3 << "\n";
    int ans4 = x >> 1;
    int ans5 = x << 1;
    cout << "ans4 = x >> 1 = " << ans4 << "\n";
    cout << "ans5 = x << 1 = " << ans5 << "\n";
    bool t = true;
    bool f = false;
    bool ans6 = t && (t && (t && t || f) && (f || t != f));
    cout << "ans6 =  " << ans6 << "\n";
    cout << "25 < 48 && (23 > (3+15) || (2 < 8 && (5 >= 2 && 15<5))) = " << (25 < 48 && (23 > (3 + 15) || (2 < 8 && (5 >= 2 && 15 < 5)))) << "\n";
}

