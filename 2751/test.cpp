#include <iostream>
#include <list>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    list<int> li;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        li.push_back(x);
    }

    li.sort();

    string ans;

    list<int>::iterator it = li.begin();
    for (; it != li.end(); it++)
        ans += to_string(*it) + '\n';

    cout << ans;

    return 0;
}