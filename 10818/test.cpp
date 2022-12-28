#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a;
    int max = -1000000;
    int min = 1000000;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > max)
            max = a;
        if (a < min)
            min = a;
    }

    cout << min << ' ' << max << endl;

    return 0;
}