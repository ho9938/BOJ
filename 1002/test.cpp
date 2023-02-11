#include <iostream>
using namespace std;

int square(int x)
{
    return x * x;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        int distSqr = square(x1 - x2) + square(y1 - y2);
        int bigR = max(r1, r2), smallR = min(r1, r2);

        if (distSqr == 0 && bigR == smallR)
            cout << -1 << '\n';
        else if (distSqr < square(bigR - smallR) // bigR > smallR + dist
                || distSqr > square(bigR + smallR)) // dist > bigR + smallR)
            cout << 0 << '\n';
        else if (distSqr == square(bigR - smallR) // bigR == smallR + dist
                || distSqr == square(bigR + smallR)) // dist == bigR + smallR)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }

    return 0;
}