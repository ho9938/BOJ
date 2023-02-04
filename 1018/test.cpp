#include <iostream>
using namespace std;

char refBoard[8][8];
char myBoard[50][50];

int errOnBoard(int x, int y)
{
    int err = 0;
    for (int i=0; i<8; i++)
        for (int j=0; j<8; j++)
            if (myBoard[x+i][y+j] != refBoard[i][j])
                err += 1;

    return min(err, 64-err);
}

int main()
{
    for (int i=0; i<8; i++)
        for (int j=0; j<8; j++)
            if ((i+j) % 2 == 0)
                refBoard[i][j] = 'B';
            else
                refBoard[i][j] = 'W';

    int n, m;
    cin >> n >> m;

    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cin >> myBoard[i][j];

    int minErr = 64; // max
    for (int i=0; i<=n-8; i++)
        for (int j=0; j<=m-8; j++)
            minErr = min(minErr, errOnBoard(i, j));
    
    cout << minErr << '\n';
    
    return 0;
}