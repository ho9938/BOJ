#include <iostream>
#include <set>
using namespace std;

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
        cards.insert(x);
    }

    int m;
    cin >> m;
    for (int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        cout << int(cards.find(x) != cards.end()) << ' ';
    }

    return 0;
}