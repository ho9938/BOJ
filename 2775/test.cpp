#include <iostream>
using namespace std;

int residents(int a, int b)
{
    if (a == 0)
        return b;

    // else
    int sum = 0;
    for (int i = 1; i <= b; i++)
        sum += residents(a - 1, i);

    return sum;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int k, n;
        cin >> k >> n;
        cout << residents(k, n) << endl;
    }

    return 0;
}