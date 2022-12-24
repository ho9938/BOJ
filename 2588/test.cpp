#include <iostream>
using namespace std;

int main()
{
    int a, b, b1, b2, b3;
    cin >> a >> b;
    b1 = b % 10;
    b2 = b % 100 / 10;
    b3 = b / 100;

    cout << a * b1 << endl;
    cout << a * b2 << endl;
    cout << a * b3 << endl;
    cout << a * b;

    return 0;
}