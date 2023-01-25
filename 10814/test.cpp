#include <iostream>
#include <list>
using namespace std;

struct Member
{
    int age;
    string name;
    int order;
};

bool memCmp(struct Member m1, struct Member m2)
{
    if (m1.age == m2.age)
        return m1.order < m2.order;

    return m1.age < m2.age;
}

int main()
{
    int n;
    cin >> n;

    list<struct Member> memList;
    for (int i = 0; i < n; i++)
    {
        struct Member mem;
        cin >> mem.age;
        cin >> mem.name;
        mem.order = i;

        memList.push_back(mem);
    }

    memList.sort(memCmp);

    list<struct Member>::iterator it = memList.begin();
    for (; it != memList.end(); it++)
        cout << it->age << ' ' << it->name << '\n';

    return 0;
}