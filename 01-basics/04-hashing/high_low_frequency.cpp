#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // pre compute
    map<int, int> mpp; // character -> map<char, int>
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]] += 1;
    }

    int hf = 0;
    int ans = -1;

    for (auto it : mpp)
    {
        if (it.second > hf)
        {
            hf = it.second;
            ans = it.first;
        }
    }
    cout << ans << endl;

    int lf = INT_MAX;
    int ans1 = -1;

    for (auto it : mpp)
    {
        if (it.second < lf)
        {
            lf = it.second;
            ans1 = it.first;
        }
    }
    cout << ans1;
}