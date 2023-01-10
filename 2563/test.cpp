#include <iostream>
using namespace std;

int main()
{
    bool paper[100][100];

    bool *paperPtr = *paper;
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            paper[i][j] = false;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        for (int j = 0; j < 10; j++)
            for (int k = 0; k < 10; k++)
                paper[x + j][y + k] = true;
    }

    int cnt = 0;
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            cnt += paper[i][j];

    cout << cnt << endl;

    return 0;
}