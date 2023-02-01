#include <iostream>
using namespace std;

void checkP(string s, int l, int r, int n)
{
    if (l >= r)
        cout << 1 << ' ' << n << endl;
    else if (s[l] != s[r])
        cout << 0 << ' ' << n << endl;
    else
        checkP(s, l + 1, r - 1, n + 1);
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        checkP(s, 0, s.length() - 1, 1);
    }

    return 0;
}