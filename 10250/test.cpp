#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int h, w, n;
        cin >> h >> w >> n;

        int floor = (n - 1) % h + 1;
        int room = (n - 1) / h + 1;

        cout << floor;
        if (room < 10)
            cout << 0;
        cout << room << endl;
    }

    return 0;
}