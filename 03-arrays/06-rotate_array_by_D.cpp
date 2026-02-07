#include <bits/stdc++.h>
using namespace std;

// approach - 1
//  void rotateLeft(vector<int> &arr, int k)
//  {
//      int n = arr.size();
//      while (k > 0)
//      {
//          int temp = arr[0];

//         for (int i = 1; i < n; i++)
//         {
//             arr[i - 1] = arr[i];
//         }
//         arr[n - 1] = temp;
//         k--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// approach-2
void rotateLeft(vector<int> &arr, int n, int k)
{
    n = arr.size();

    k = k % n;

    vector<int> temp(k);
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    for (int i = 0; i < k; i++)
    {
        arr[n - k + i] = temp[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int k = 2;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    rotateLeft(arr, n, k);
    for (int x : arr)
        cout << x << " ";
}