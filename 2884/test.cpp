#include <iostream>
using namespace std;

int main()
{
    int hour, min;
    cin >> hour >> min;

    int day = 24 * 60;
    int tgtMin = day + hour * 60 + min - 45;

    cout << (tgtMin / 60) % 24;
    cout << " ";
    cout << tgtMin % 60;

    return 0;
}