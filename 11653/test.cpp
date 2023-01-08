#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n > 1)
    {
        int factor;
        for (factor = 2; factor <= n; factor++)
            if (n % factor == 0)
                break;

        cout << factor << endl;
        n /= factor;
    }
    return 0;
}