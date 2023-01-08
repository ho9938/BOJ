#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int sum = 0, min = n;
    for (int i = m; i <= n; i++)
    {
        bool prime = true;
        if (i < 2)
            continue;

        for (int j = 2; j < i; j++)
            if (i % j == 0)
            {
                prime = false;
                break;
            }

        if (prime)
        {
            sum += i;
            min = (i < min) ? i : min;
        }
    }

    if (sum == 0)
        cout << -1 << endl;
    else
        cout << sum << endl
             << min << endl;

    return 0;
}