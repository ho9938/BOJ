#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, int> numOfCards;

    int n;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;

        map<int, int>::iterator it = numOfCards.find(x);
        if (it == numOfCards.end())
            numOfCards.insert({x, 1});
        else
            it->second += 1;
    }

    int m;
    cin >> m;

    for (int i=0; i<m; i++)
    {
        int x;
        cin >> x;

        map<int, int>::iterator it = numOfCards.find(x);
        if (it == numOfCards.end())
            cout << 0 << ' ';
        else
            cout << it->second << ' ';
    }

    return 0;
}