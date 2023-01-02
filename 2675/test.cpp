#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int r;
        cin >> r;

        string s;
        cin >> s;

        for (int j = 0; j < s.length(); j++)
            cout << string(r, s[j]);
        cout << endl;
    }

    return 0;
}