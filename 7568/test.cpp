#include <iostream>
#include <algorithm>
using namespace std;

struct Build
{
    int weight;
    int height;
};

bool cmpBuild(struct Build b1, struct Build b2)
{
    return b1.weight < b2.weight && b1.height < b2.height;
}

int rank[50];
struct Build builds[50];

int main()
{
    int n;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        int x, y;
        cin >> x >> y;
        builds[i] = {x, y};
    }

    for (int i=0; i<n; i++)
    {
        int rank = 1;
        for (int j=0; j<n; j++)
            if (cmpBuild(builds[i], builds[j]))
                rank += 1;
        cout << rank << ' ';
    }

    return 0;
}