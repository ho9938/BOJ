#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        sum += x;
        if (x > max)
            max = x;
    }

    cout << ((double)sum / n) * (100.0 / max) << endl;

    return 0;
}