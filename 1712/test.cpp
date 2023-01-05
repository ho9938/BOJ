#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (b >= c)
        cout << -1 << endl;
    else
        // assume b < c
        // a+b*x < c*x
        // (c-b)x > a
        // x > a/(c-b)
        cout << a / (c - b) + 1 << endl;

    return 0;
}