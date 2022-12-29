#include "AVLNodeClass.h"

int main()
{
    cout << "Enter the number of elements: " << endl;
    int n; cin >> n;
    AVLNode t;
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        t.insert(x);
    }
    t.print();
    cin.get();
    cin.get();

}
 