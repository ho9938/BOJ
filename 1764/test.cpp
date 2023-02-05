#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<string> neverHeard;
    set<string> neverSeen;
    set<string> neverHeardSeen;

    int n, m;
    cin >> n >> m;

    for (int i=0; i<n; i++)
    {
        string name;
        cin >> name;

        neverHeard.insert(name);
    }

    for (int i=0; i<n; i++)
    {
        string name;
        cin >> name;

        neverSeen.insert(name);
    }

    set<string>::iterator it = neverHeard.begin();
    for (; it != neverHeard.end(); it++)
        if (neverSeen.find(*it) != neverSeen.end())
            neverHeardSeen.insert(*it);

    cout << neverHeardSeen.size() << '\n';
    it = neverHeardSeen.begin();
    for (; it != neverHeardSeen.end(); it++)
        cout << *it << '\n';

    return 0;
}