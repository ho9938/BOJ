#include <iostream>
#include <queue>
using namespace std;

struct Line
{
    int dir;
    int val;
};

struct Line lines[6];

int main()
{
    int n;
    cin >> n;

    for (int i=0; i<6; i++)
        cin >> lines[i].dir >> lines[i].val;

    int max1 = 0, max2 = 0;
    int small = 1;
    for (int i=0; i<6; i++)
    {
        if (i%2 == 0)
            max1 = max(max1, lines[i].val);
        else
            max2 = max(max2, lines[i].val);

        if (lines[i].dir == lines[(i+2)%6].dir)
            small *= lines[(i+1)%6].val;
    }

    cout << n * (max1 * max2 - small) << '\n';

    return 0;
}