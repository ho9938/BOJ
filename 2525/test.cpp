#include <iostream>
using namespace std;

int main()
{
    int hour, min, cost;
    cin >> hour >> min >> cost;

    int curMin = hour * 60 + min + cost;

    cout << (curMin / 60) % 24;
    cout << " ";
    cout << curMin % 60;

    return 0;
}