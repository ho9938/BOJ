#include <iostream>
#include <list>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int factor = 1000000000;
    while (n / factor == 0)
        factor /= 10;

    list<int> digits;
    while (factor >= 1)
    {
        digits.push_back(n / factor);
        n = n % factor;
        factor /= 10;
    }

    digits.sort();
    digits.reverse();

    list<int>::iterator it = digits.begin();
    for (; it != digits.end(); it++)
        cout << *it;
    cout << endl;

    return 0;
}