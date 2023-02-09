#include <iostream>
using namespace std;

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    cout << min(min(w-x, x), min(h-y, y)) << '\n';
    return 0;
}