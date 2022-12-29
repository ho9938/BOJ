#include <iostream>
using namespace std;

bool han(int n)
{
    int factor = 1000;
    while ((n / factor) % 10 == 0)
        factor /= 10;

    int diff = 10;
    while (factor >= 10)
    {
        int cur = (n / factor) % 10;
        int next = (n / (factor / 10)) % 10;

        if (diff == 10)
            diff = cur - next;
        else if (diff != cur - next)
            return false;

        factor /= 10;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (han(i))
            cnt += 1;

    cout << cnt << endl;

    return 0;
}