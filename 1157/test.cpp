#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string word;
    cin >> word;

    int max = 0;
    char result;

    for (char c = 'A'; c <= 'Z'; c++)
    {
        int cnt = count(word.begin(), word.end(), c);
        cnt += count(word.begin(), word.end(), c - ('A' - 'a'));
        if (cnt > max)
        {
            max = cnt;
            result = c;
        }
        else if (cnt == max)
            result = '?';
    }

    cout << result << endl;

    return 0;
}