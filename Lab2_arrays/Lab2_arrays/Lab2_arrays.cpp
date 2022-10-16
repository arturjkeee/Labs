#include <iostream>
#include <Windows.h>
#include <array>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введите целое положительное число: ";
    int x;
    cin >> x;
    while (x < 0)
    {
        cout << "Введенное число неверно, повторите ещё раз: ";
        cin >> x;
    }
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum += i;
    }
    cout << "Сумма чисел от 1 до " << x << " равна = " << sum << endl;
    array<int, 10> a{ 3,6,9,12,15,18,21,24,27,30 };
    cout << "Вывод всех 10 чисел массива" << endl;
    for (auto element : a)
    {
        cout << element << " ";
    }
    cout << endl;
    cout << "Вывод элементов массива с четными индексами" << endl;
    for (int i = 0; i < a.size(); i++)
    {
        if (i % 2 == 0)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    cout << "Вывод суммы элементов массива с нечетными индексами" << endl;
    int elementSum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (i % 2 == 1)
        {
            cout << a[i] << " ";
            elementSum += a[i];
        }
    }
    cout << endl;
    cout << "Сумма равна = " << elementSum;
}
