#include <iostream>
using namespace std;

int d(int n)
{
    int result = n;
    result += (n / 1000) % 10;
    result += (n / 100) % 10;
    result += (n / 10) % 10;
    result += n % 10;

    return result;
}

int main()
{
    bool self[10001];
    for (int i = 1; i <= 10000; i++)
        self[i] = true;

    for (int i = 1; i <= 10000; i++)
    {
        int x = d(i);
        if (x <= 10000)
            self[x] = false;
    }

    for (int i = 1; i <= 10000; i++)
        if (self[i])
            cout << i << endl;

    return 0;
}