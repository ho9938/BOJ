#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string result;
        cin >> result;

        int score = 0;
        int sum = 0;
        for (int j = 0; j < result.length(); j++)
        {
            char x = result[j];
            if (x == 'O')
            {
                score += 1;
                sum += score;
            }
            else
            {
                score = 0;
            }
        }
        cout << sum << endl;
    }

    return 0;
}