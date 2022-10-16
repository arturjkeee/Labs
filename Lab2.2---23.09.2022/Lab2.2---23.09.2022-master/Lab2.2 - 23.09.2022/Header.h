#pragma once
#include <iostream>
#include <Windows.h>
using std::cout;
using std::cin;
using std::endl;

namespace Head
{
    void f(int x)
    {
        static int k = 0;
        cout << k + x << endl;
        k = x;
    }
}
