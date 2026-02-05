#include <bits/stdc++.h>
using namespace std;

bool checksort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
        }

    return true;
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

    bool sorted = checksort(arr);
    if (sorted == true)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}