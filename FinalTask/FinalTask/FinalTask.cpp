#include "AVLNodeClass.h"

int main()
{
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Введите число элементов: " << endl;
    int n; cin >> n;
    AVLNode t;
    cout << "Введите числа: " << endl;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        t.insert(x);
    }
    cout << "\n=====================\n";
    t.print();
    cout << "Введите число для поиска: " << endl;
    int z;
    cin >> z;
    t.search(z);

    cin.get();
    cin.get();
}
 