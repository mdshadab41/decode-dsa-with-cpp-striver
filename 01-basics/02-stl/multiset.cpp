#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(4);
    ms.insert(4);
    ms.insert(7);
    ms.insert(8);
    ms.insert(3);

    ms.erase(4); // all  4th erased

    int cnt = ms.count(2);

    // only a single one erased
    ms.erase(ms.find(4));

    // rest all function same as set
}