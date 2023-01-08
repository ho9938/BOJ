#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    for (; n % 5 != 0; cnt++)
        n -= 3;

    if (n < 0)
        cnt = -1;
    else
        cnt += n / 5;

    cout << cnt << endl;

    return 0;
}