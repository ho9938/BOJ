#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;

    for (char i = 'a'; i <= 'z'; i++)
    {
        int a = str.find(i);
        if (a != string::npos)
            cout << a << ' ';
        else
            cout << -1 << ' ';
    }
    cout << endl;

    return 0;
}