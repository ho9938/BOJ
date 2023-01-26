#include <iostream>
#include <algorithm>
using namespace std;

#define MILLION 1000000

struct Node
{
    int value;
    int index;
};

bool cmpNode(struct Node n1, struct Node n2)
{
    return n1.value < n2.value;
}

struct Node nodeArr[MILLION];
int compdArr[MILLION];

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        nodeArr[i].value = x;
        nodeArr[i].index = i;
    }

    sort(nodeArr, nodeArr + n, cmpNode);

    int compd = -1;
    int prev = MILLION + 1;
    for (int i = 0; i < n; i++)
    {
        struct Node curNode = nodeArr[i];
        if (prev != curNode.value)
        {
            compd += 1;
            prev = curNode.value;
        }
        compdArr[curNode.index] = compd;
    }

    for (int i = 0; i < n; i++)
        cout << compdArr[i] << ' ';
    cout << endl;

    return 0;
}