#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if (n1 == n2)
        if (n2 == n3)
            cout << 10000 + n1 * 1000;
        else
            cout << 1000 + n1 * 100;
    else if (n1 == n3)
        cout << 1000 + n1 * 100;
    else if (n2 == n3)
        cout << 1000 + n2 * 100;
    else
        cout << max(n1, max(n2, n3)) * 100;

    return 0;
}