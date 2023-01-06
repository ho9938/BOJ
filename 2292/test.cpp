#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int peel = 1;
    int max = 1;
    while (true)
    {
        if (n <= max)
            break;

        max += peel * 6;
        peel += 1;
    }

    cout << peel << endl;

    return 0;
}