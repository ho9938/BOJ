#include <iostream>
using namespace std;

int main()
{
    string ans;

    int n;
    cin >> n;

    bool prime[10001];

    prime[1] = false;
    for (int i = 2; i <= 10000; i++)
        prime[i] = true;

    for (int i = 2; i <= 10000; i++)
    {
        if (!prime[i])
            continue;

        // else
        for (int j = 2 * i; j <= 10000; j += i)
            prime[j] = false;
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        int p1 = x / 2;
        int p2 = x / 2;

        while (!prime[p1] || !prime[p2])
        {
            p1 -= 1;
            p2 += 1;
        }

        ans += to_string(p1) + " " + to_string(p2) + "\n";
    }

    cout << ans;

    return 0;
}