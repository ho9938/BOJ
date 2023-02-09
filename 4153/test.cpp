#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int l1, l2, l3;
        cin >> l1 >> l2 >> l3;

        if (l1 == 0 && l2 == 0 && l3 == 0)
            break;

        int longest = max(max(l1, l2), l3);
        bool right;

        if (longest == l1)
            right = l1 * l1 == l2 * l2 + l3 * l3;
        else if (longest == l2)
            right = l2 * l2 == l1 * l1 + l3 * l3;
        else
            right = l3 * l3 == l1 * l1 + l2 * l2;
        
        if (right)
            cout << "right" << '\n';
        else
            cout << "wrong" << '\n';
    }

    return 0;
}