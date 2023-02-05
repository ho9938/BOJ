#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<string> partStr;

    string str;
    cin >> str;

    for (int i=0; i<str.length(); i++)
        for (int j=1; j<=str.length()-i; j++)
            partStr.insert(str.substr(i, j));

    cout << partStr.size() << '\n';

    return 0;
}