#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, v;
    cin >> a >> b >> v;

    int day = 1;
    int dist = v - a;

    if (v > a)
        day += ceil(double(dist) / double(a - b));

    cout << day << endl;

    return 0;
}