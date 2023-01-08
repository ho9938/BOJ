#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 1)
        {
            cnt += 1;
            continue;
        }

        for (int j = 2; j < x; j++)
            if (x % j == 0)
            {
                cnt += 1;
                break;
            }
    }

    cout << n - cnt << endl;

    return 0;
}