#include <iostream>
using namespace std;

int main()
{
    bool rem[42];
    for (int i = 0; i < 42; i++)
        rem[i] = false;

    for (int i = 0; i < 10; i++)
    {
        int x;
        cin >> x;
        rem[x % 42] = true;
    }

    int cnt = 0;
    for (int i = 0; i < 42; i++)
        if (rem[i])
            cnt += 1;

    cout << cnt << endl;

    return 0;
}