#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    int tmp = n;

    while (true)
    {
        int left = tmp % 10;
        int right = ((tmp / 10) + (tmp % 10)) % 10;
        tmp = left * 10 + right;
        cnt += 1;

        if (tmp == n)
            break;
    }
    cout << cnt << endl;

    return 0;
}