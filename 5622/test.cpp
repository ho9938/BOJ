#include <iostream>
using namespace std;

int dial(int alp)
{
    if (alp <= 'C')
        return 2;
    else if (alp <= 'F')
        return 3;
    else if (alp <= 'I')
        return 4;
    else if (alp <= 'L')
        return 5;
    else if (alp <= 'O')
        return 6;
    else if (alp <= 'S')
        return 7;
    else if (alp <= 'V')
        return 8;
    else if (alp <= 'Z')
        return 9;
    else
        return 0;
}

int main()
{
    string str;
    cin >> str;

    int cnt = 0;
    for (int i = 0; i < str.length(); i++)
        cnt += 1 + dial(str[i]);

    cout << cnt << endl;

    return 0;
}