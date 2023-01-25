#include <iostream>
#include <list>
using namespace std;

bool strCmp(string str1, string str2)
{
    if (str1.length() != str2.length())
        return str1.length() < str2.length();

    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == str2[i])
            continue;

        return str1[i] < str2[i];
    }

    // same strings
    return true;
}

int main()
{
    int n;
    cin >> n;

    list<string> strList;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        strList.push_back(str);
    }

    strList.sort(strCmp);

    string prev = "";
    list<string>::iterator it = strList.begin();

    for (; it != strList.end(); it++)
    {
        if (!prev.compare(*it))
            continue;

        cout << *it << '\n';
        prev = *it;
    }

    return 0;
}