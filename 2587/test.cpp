#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
        sum += x;
    }

    sort(arr, arr + 5);

    cout << sum / 5 << endl;
    cout << arr[2] << endl;

    return 0;
}