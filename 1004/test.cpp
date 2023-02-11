#include <iostream>
using namespace std;

inline int square(int x)
{
    return x * x;
}

struct Planet
{
    int x;
    int y;
    int r;
};

struct Planet planets[50];

bool isInside(int x, int y, struct Planet *planet)
{
    return square(planet->x - x) + square(planet->y - y) < square(planet->r);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i=0; i<t; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int n;
        cin >> n;

        int cnt = 0;

        for (int j=0; j<n; j++)
        {
            int x, y, r;
            cin >> x >> y >> r;
            struct Planet planet = {x, y, r};

            if (isInside(x1, y1, &planet) && !isInside(x2, y2, &planet)
                || !isInside(x1, y1, &planet) && isInside(x2, y2, &planet))
                cnt += 1;
        }

        cout << cnt << '\n';
    }

    return 0;
}