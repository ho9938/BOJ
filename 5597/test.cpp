#include <iostream>
using namespace std;

int main()
{
    bool a[30];
    for (int i = 0; i < 30; i++)
        a[i] = false;

    for (int i = 0; i < 28; i++)
    {
        int x;
        cin >> x;
        a[x - 1] = true;
    }

    for (int i = 1; i <= 30; i++)
        if (!a[i - 1])
            cout << i << endl;

    return 0;
}