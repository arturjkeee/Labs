#include <iostream>
#include <Windows.h>
using namespace std;

int arr_sum(int* begin, int* end) {
	int sum = 0;
	for (int* p = begin; p < end; p++) {
		sum += *p;
	}
	return sum;
}

int sum(int a, int b) {
	return a + b;
}
int dif(int a, int b) {
	return a - b;
}
int (*operationType(char sType))(int,int) {
	if (sType == '+') return sum;
	if (sType == '-') return dif;
	else cout << "wrong symbol (+/-)";
}

int main()
{
	int m[] = { 2,4,8,12 };
	cout << arr_sum(begin(m),end(m));
	
	cout << "\n---------------------\n";

	int (*test)(int, int);
	test = operationType('+');
	cout << test(25, 15) << endl;
	test = operationType('-');
	cout << test(25, 15);
	
	cout << "\n---------------------\n";

	float* pntr = new float(24.6f);
	cout << *pntr << endl;
	delete pntr;
}
