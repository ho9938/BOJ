#include <iostream>
#include <algorithm>
using namespace std;

string trans[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

int main()
{
    string str;
    cin >> str;

    int cnt = 0;

    int i = 0;
    while (i < str.length())
    {
        bool unit = true;
        for (int j = 0; j < 8; j++)
        {
            string curWord = trans[j];
            bool valid = true;
            for (int k = 0; k < curWord.length(); k++)
                if (i + k >= str.length() || curWord[k] != str[i + k])
                {
                    valid = false;
                    break;
                }
            if (valid)
            {
                cnt += 1;
                i += curWord.length();
                unit = false;
                break;
            }
        }
        if (unit)
        {
            cnt += 1;
            i += 1;
        }
    }

    cout << cnt << endl;

    return 0;
}