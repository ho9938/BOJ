#include <iostream>
#include <algorithm>
using namespace std;

struct point
{
    int x;
    int y;
};

bool pointCmp(struct point p1, struct point p2)
{
    if (p1.y < p2.y)
        return true;
    else if (p1.y > p2.y)
        return false;
    else
        return p1.x < p2.x;
}

struct point points[100000];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> points[i].x;
        cin >> points[i].y;
    }

    sort(points, points + n, pointCmp);

    for (int i = 0; i < n; i++)
        cout << points[i].x << ' ' << points[i].y << '\n';

    return 0;
}