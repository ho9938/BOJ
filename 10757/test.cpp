#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    string a_rev = a, b_rev = b;
    reverse(a_rev.begin(), a_rev.end());
    reverse(b_rev.begin(), b_rev.end());

    string ans_rev = "";

    int carry = 0;
    for (int i = 0; i < max(a_rev.length(), b_rev.length()); i++)
    {
        int op1 = (i < a_rev.length()) ? a_rev[i] - '0' : 0;
        int op2 = (i < b_rev.length()) ? b_rev[i] - '0' : 0;
        int sum = op1 + op2 + carry;

        carry = sum / 10;
        sum = sum % 10;

        ans_rev += sum + '0';
    }

    string ans = ans_rev;
    reverse(ans.begin(), ans.end());

    if (carry)
        cout << carry;
    cout << ans << endl;

    return 0;
}