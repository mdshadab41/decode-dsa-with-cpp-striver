#include <bits/stdc++.h>
using namespace std;

void explainPairs()
{
    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> p1 = {1, {4, 5}};

    cout << p1.first << " " << p1.second.first << " " << p1.second.second;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 5}};
    cout << arr[1].first;
}

int main()
{

    explainPairs();
}
