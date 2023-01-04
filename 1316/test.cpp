#include <iostream>
using namespace std;

bool isGroup(string word)
{
    bool appeared['z' + 1];

    for (int i = 'a'; i < 'z' + 1; i++)
        appeared[i] = false;

    int pos = 0;
    char prev = word[pos++];

    while (pos < word.length())
    {
        char cur = word[pos++];

        if (appeared[cur])
            return false;

        if (cur != prev)
            appeared[prev] = true;

        prev = cur;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        if (isGroup(word))
            cnt += 1;
    }

    cout << cnt << endl;

    return 0;
}