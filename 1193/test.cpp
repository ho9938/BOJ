#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int numer = 1, denom = 1;
    int dir = 1;
    int i = 0;
    while (++i < x)
    {
        numer -= dir;
        denom += dir;

        if (numer == 0)
        {
            numer = 1;
            dir *= -1;
        }
        else if (denom == 0)
        {
            denom = 1;
            dir *= -1;
        }
    }

    cout << numer << '/' << denom << endl;

    return 0;
}