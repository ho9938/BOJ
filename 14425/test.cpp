#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<string> strs;

    int n, m;
    cin >> n >> m;

    for (int i=0; i<n; i++)
    {
        string str;
        cin >> str;
        strs.insert(str);
    }
        
    int cnt = 0;
    for (int i=0; i<m; i++)
    {
        string str;
        cin >> str;
        if (strs.find(str) != strs.end())
            cnt += 1;
    }
    
    cout << cnt << '\n';

    return 0;
}