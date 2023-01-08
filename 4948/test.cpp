#include <iostream>
#include <list>
using namespace std;

int main()
{
    bool prime[250000];
    list<int> input;

    int n;
    int max = -1;

    cin >> n;
    while (n != 0)
    {
        input.push_back(n);
        max = (n > max) ? n : max;
        cin >> n;
    }
    max *= 2;

    prime[1] = false;
    for (int i = 2; i <= 250000; i++)
        prime[i] = true;

    for (int i = 2; i <= max; i++)
    {
        if (!prime[i])
            continue;

        // else
        for (int j = i * 2; j <= max; j += i)
            prime[j] = false;
    }

    string ans = "";
    list<int>::iterator it = input.begin();
    for (; it != input.end(); it++)
    {
        int n = *it;
        int cnt = 0;
        for (int i = n + 1; i <= 2 * n; i++)
            cnt += prime[i];
        ans += to_string(cnt) + '\n';
    }
    cout << ans;

    return 0;
}