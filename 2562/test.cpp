#include <iostream>
using namespace std;

int main()
{
    int max = -1;
    int x, idx;

    for (int i = 1; i <= 9; i++)
    {
        cin >> x;
        if (x > max)
        {
            max = x;
            idx = i;
        }
    }

    cout << max << endl
         << idx << endl;

    return 0;
}