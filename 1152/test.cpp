#include <iostream>
using namespace std;

int main()
{
    string str;

    int cnt = 0;
    while (cin >> str)
        cnt += 1;

    cout << cnt << endl;

    return 0;
}