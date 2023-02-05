#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    set<int> A;
    set<int> B;

    int numOfA, numOfB;
    cin >> numOfA >> numOfB;

    for (int i=0; i<numOfA; i++)
    {
        int x;
        cin >> x;

        A.insert(x);
    }

    for (int i=0; i<numOfB; i++)
    {
        int x;
        cin >> x;

        B.insert(x);
    }

    set<int> AminusB;
    set_difference(A.begin(), A.end(), B.begin(), B.end(), 
                    inserter(AminusB, AminusB.begin()));
    set<int> BminusA;
    set_difference(B.begin(), B.end(), A.begin(), A.end(), 
                    inserter(BminusA, BminusA.begin()));
    
    set<int> symDiff;
    set_union(AminusB.begin(), AminusB.end(), BminusA.begin(), BminusA.end(),
                inserter(symDiff, symDiff.begin()));

    cout << symDiff.size() << '\n';

    return 0;
}