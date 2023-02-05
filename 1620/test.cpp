#include <iostream>
#include <map>
using namespace std;

bool isNumber(string str)
{
    bool result = true;

    string::iterator it = str.begin();
    for (; it != str.end(); it++)
        if (*it < '0' || *it > '9')
            result = false;

    return result;
}

string pocketMonNames[100000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, int> pocketMonIdxs;

    int n, m;
    cin >> n >> m;

    for (int i=1; i<=n; i++)
    {
        string name;
        cin >> name;

        pocketMonNames[i] = name;
        pocketMonIdxs.insert({name, i});
    }

    for (int i=0; i<m; i++)
    {
        string input;
        cin >> input;

        if (isNumber(input))
            cout << pocketMonNames[atoi(input.c_str())] << '\n';
        else
            cout << pocketMonIdxs.find(input)->second << '\n';
    }

    return 0;
}