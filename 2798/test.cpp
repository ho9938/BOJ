#include <iostream>
using namespace std;

int cards[100];

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> cards[i];

    int fittest = 1000000;  // arbitrary large number
    int leastErr = 1000000; // arbitrary large number

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++)
            {
                int curSum = cards[i] + cards[j] + cards[k];
                int curErr = m - curSum;
                if (curErr >= 0 && curErr < leastErr)
                {
                    fittest = curSum;
                    leastErr = curErr;
                }
            }

    cout << fittest << '\n';

    return 0;
}