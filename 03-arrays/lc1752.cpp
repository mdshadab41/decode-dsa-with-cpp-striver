#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool sorted = check(arr);
    if (sorted == true)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}