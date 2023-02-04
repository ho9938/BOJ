#include <iostream>
using namespace std;

bool isTarget(int n)
{
    string str = to_string(n);

    int cont6 = 0;
    int cont6_max = 0;
    for (int i=0; i<=str.length(); i++)
    {
        if (str[i] == '6')
            cont6 += 1;
        else
            cont6 = 0;
        
        cont6_max = max(cont6_max, cont6);
    }

    return cont6_max >= 3;
}

int main()
{
    int n;
    cin >> n;

    int numOfTagets = 0;
    int curNum = 666;
    while (true)
    {
        if (isTarget(curNum))
            numOfTagets += 1;
        
        if (numOfTagets == n)
        {
            cout << curNum << '\n';
            return 0;
        }

        curNum += 1;
    }

    return 0;
}