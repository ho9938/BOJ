#include <iostream>
using namespace std;

int A[500000];
int tmp[500000];
int k;

int setA(int idx, int value)
{
    static int order = 1;
    static int kth = -1;

    if (idx != -1)
    {
        A[idx] = value;
        if (order++ == k)
            kth = value;
    }

    return kth;
}

void merge(int p, int q, int r)
{
    int i = p;
    int j = q + 1;
    int t = 1;

    while (i <= q && j <= r)
        if (A[i] <= A[j])
            tmp[t++] = A[i++];
        else
            tmp[t++] = A[j++];

    while (i <= q)
        tmp[t++] = A[i++];
    while (j <= r)
        tmp[t++] = A[j++];

    i = p;
    t = 1;
    while (i <= r)
        setA(i++, tmp[t++]);
}

void merge_sort(int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        merge_sort(p, q);
        merge_sort(q + 1, r);
        merge(p, q, r);
    }
}

int main()
{
    int n;
    cin >> n >> k; // k is global var

    for (int i = 0; i < n; i++)
        cin >> A[i];

    merge_sort(0, n - 1);
    cout << setA(-1, 0) << endl;

    return 0;
}