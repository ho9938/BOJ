#include <iostream>
using namespace std;

int main()
{
    int a[100];

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int v;
    cin >> v;

    int cnt = 0;
    for (int i = 0; i < n; i++)
        cnt += a[i] == v;

    cout << cnt << endl;

    return 0;
}