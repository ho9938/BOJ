#include <iostream>
using namespace std;

int main()
{
    int max = -1, row, col;

    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
        {
            int x;
            cin >> x;
            if (x > max)
            {
                max = x;
                row = i + 1;
                col = j + 1;
            }
        }

    cout << max << endl;
    cout << row << ' ' << col << endl;

    return 0;
}