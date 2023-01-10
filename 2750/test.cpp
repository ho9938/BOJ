#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    string ans;
    for (int i = 0; i < n; i++)
        ans += to_string(arr[i]) + "\n";
    cout << ans;

    return 0;
}