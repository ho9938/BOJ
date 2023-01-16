#include <iostream>
using namespace std;

#define MAX 10000

int cnt[MAX + 1];

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 0; i <= MAX; i++)
        cnt[i] = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        cnt[x] += 1;
    }

    for (int i = 0; i <= MAX; i++)
        for (int j = 0; j < cnt[i]; j++)
            cout << i << '\n';

    return 0;
}