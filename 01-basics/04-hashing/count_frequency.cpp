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

    // iteration on map
    for (int i = 0; i < n; i++)
    {
        if (mpp[arr[i]] > 0)
        {
            cout << arr[i] << "->" << mpp[arr[i]] << endl;
            mpp[arr[i]] = -1;
        }
    }

    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int number;
    //     cin >> number;

    //     // fetch
    //     cout << mpp[number] << endl;
    // }
}