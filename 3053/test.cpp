#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double r;
    cin >> r;

    cout.precision(6);
    cout << fixed;
    cout << M_PI * r * r << '\n';
    cout << 2 * r * r << '\n';

    return 0;
}