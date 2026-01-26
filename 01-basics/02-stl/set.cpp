#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    for (int i = 1; i <= 10; i++)
    {
        s.insert(i);
    }
    cout << "Elements presents in the set: ";

    for (auto it : s)
    {
        cout << it;
    }

    cout << endl;

    int n = 2;

    if (s.find(2) != s.end())
    {
        cout << n << " present in the set" << endl;
    }
    s.erase(s.begin());

    for (auto it : s)
    {
        cout << it;
    }
    cout<<endl;
    s.empty();
    s.clear();
    cout << s.size();
}