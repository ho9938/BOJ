#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int num1, num2;
    num1 = atoi(str1.c_str());
    num2 = atoi(str2.c_str());

    cout << max(num1, num2) << endl;

    return 0;
}