#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    // input array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0}; // it depends on constraint if 10^5 then array will store 100001
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        
        //fetch
        cout << hash[number] << endl;
    }
}