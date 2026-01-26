#include <bits/stdc++.h>
using namespace std;

//approach - [parametrize]
void reverse_array(vector<int> arr, int l, int r)
{
    vector<int> arr2;
    int n = arr.size();

    if (l >= r)
        return;

    swap(arr[l], arr[r]);
    reverse_array(arr, l + 1, r - 1);
}

int main()
{
    vector<int> arr = {5, 3, 2, 1};

    reverse_array(arr, 0, arr.size() - 1);

    for (int n : arr)
    {
        cout << n << " ";
    }
}