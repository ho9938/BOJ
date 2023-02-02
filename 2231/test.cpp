#include <iostream>
using namespace std;

int dSum(int x)
{
    string str = to_string(x);

    int sum = x;
    for (int i = 0; i < str.length(); i++)
        sum += str[i] - '0';

    return sum;
}

int main()
{
    int n;
    cin >> n;

    int gen = 0;
    for (int i = 0; i < n; i++)
        if (dSum(i) == n)
        {
            gen = i;
            break;
        }

    cout << gen << '\n';

    return 0;
}