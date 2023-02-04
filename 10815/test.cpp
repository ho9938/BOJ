#include <iostream>
#include <set>
using namespace std;

#define TEN_MILLION 10000000
bool exist[2 * TEN_MILLION + 1];

static int bias(int x)
{
    return x + TEN_MILLION;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> cards;

    int n;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        exist[bias(x)] = true;
    }

    int m;
    cin >> m;
    for (int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        cout << int(exist[bias(x)]) << ' ';
    }

    return 0;
}