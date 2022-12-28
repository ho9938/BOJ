#include <iostream>
using namespace std;

int main()
{
    int c;
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        int n;
        cin >> n;

        int score[1000];
        int sum = 0;

        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            score[j] = x;
            sum += x;
        }

        double avg = (double)sum / n;

        int cnt = 0;
        for (int j = 0; j < n; j++)
            if (score[j] > avg)
                cnt += 1;

        cout << fixed;
        cout.precision(3);
        cout << (double)cnt / n * 100 << '%' << endl;
    }

    return 0;
}