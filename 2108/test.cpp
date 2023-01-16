#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#define MAX 500000
int arr[MAX + 1];

int setMode(int x, int cnt)
{
    static int maxcnt = -1;
    static int modecnt;
    static int mode;

    if (cnt > maxcnt)
    {
        maxcnt = cnt;
        modecnt = 1;
        mode = x;
    }
    else if (cnt == maxcnt)
    {
        modecnt += 1;
        if (modecnt == 2)
        {
            maxcnt = cnt;
            mode = x;
        }
    }

    return mode;
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    int sum = 0;
    int min = 4000, max = -4000;
    int mode, prev = arr[0], cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int cur = arr[i];

        sum += cur;

        min = (cur < min) ? cur : min;
        max = (cur > max) ? cur : max;

        if (cur != prev)
        {
            setMode(prev, cnt);
            cnt = 1;
        }
        else
        {
            cnt += 1;
        }

        prev = cur;
    }

    cout << int(round(double(sum) / double(n))) << '\n';
    cout << arr[n / 2] << '\n';
    cout << setMode(prev, cnt) << '\n';
    cout << max - min << '\n';

    return 0;
}