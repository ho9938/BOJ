#include <iostream>
using namespace std;

int main()
{
    bool prime[1000000];

    int m, n;
    cin >> m >> n;

    prime[1] = false;
    for (int i = 2; i <= n; i++)
        prime[i] = true;

    for (int i = 2; i <= n; i++)
    {
        if (!prime[i])
            continue;

        for (int j = 2; i * j <= n; j++)
            prime[i * j] = false;
    }

    string ans = "";
    for (int i = m; i <= n; i++)
        if (prime[i])
            ans += to_string(i) + '\n';

    cout << ans;

    return 0;
}