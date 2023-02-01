#include <iostream>
using namespace std;

char paper[6561][6561]; // 3 ^ 8 = 6561

void drawStars(int x, int y, int size, bool blank)
{
    int subSize = size / 3;

    if (size == 3)
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (blank || (i == 1 && j == 1))
                    paper[x + i][y + j] = ' ';
                else
                    paper[x + i][y + j] = '*';
    else
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (i == 1 && j == 1)
                    drawStars(x + i * subSize, y + j * subSize, subSize, true);
                else
                    drawStars(x + i * subSize, y + j * subSize, subSize, blank);
}

void printStars(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            cout << paper[i][j];
        cout << '\n';
    }
}
int main()
{
    int n;
    cin >> n;

    drawStars(0, 0, n, false);
    printStars(n);

    return 0;
}