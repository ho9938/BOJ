#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    string input;
    cin >> input;

    for (int i = 0; i < n; i++)
    {
        char a = input[i];
        sum += a - '0';
    }

    cout << sum << endl;

    return 0;
}