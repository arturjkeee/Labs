#include <iostream>
#include <Windows.h>
#include <array>
using namespace std;

int num(int i = 1);
void newfunc(int a, int b, int& c, int& d);

int main()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int m = 2;
	const int n = 3;

	int a[m][n] = { {2,4,8},{3,6,9} };
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0;j < n; j++)
		{
			sum += a[i][j];
		}
	}
	cout << "sum = " << sum << endl;

	int sum0 = 0;
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == 0)
			{
				sum0 += a[i][j];
			}
			if (j == 1)
			{
				sum1 += a[i][j];
			}
			if (j == 2)
			{
				sum2 += a[i][j];
			}
		}
	}
	int b[3] = { sum0 , sum1, sum2 };
	cout << "b[i] = ";
	for (int i = 0; i < 3; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;
	float f = 20.84f;
	cout << " f = " << f << endl;
	float& one = f;
	float& two = f;
	one = 21.84f;
	cout << " one = " << one << endl;
	cout << " two = " << two << endl;

	cout << "Введите число: ";
	int x;
	cin >> x;
	cout << num(x) << endl;
	cout << "Вызов функции без аргумента: " << endl;
	cout << num() << endl;

	x = 10;
	int y = 6;
	sum = 0;
	int mul = 0;
	newfunc(x, y, sum, mul);
	cout << "sum = " << sum << endl;
	cout << "mul = " << mul << endl;

	short k = 24;
	cout << "short k = " << k << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << " k = " << k << endl;
		short l = 6;
		cout << " l = " << l << endl;
	}
}

int num(int i)
{
	if (i <= 0)
	{
		return 0;
	}
	else
	{
		int sum = 0;
		for (int x = 1; x <= i; x++)
		{
			sum += x;
		}
		return sum;
	}
}
void newfunc(int a, int b, int& c, int& d)
{
	int sum = a + b;
	int mul = a * b;
	c = sum;
	d = mul;
}