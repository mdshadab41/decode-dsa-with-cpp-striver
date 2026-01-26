#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mpp;

    map<int, pair<int, int>> mpp1;

    map<pair<int, int>, int> mpp2;

    mpp[1] = 2;
    mpp.insert({2, 3});

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    cout << mpp[3];

    auto it = mpp.find(3);
    cout << it->second;

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);
}