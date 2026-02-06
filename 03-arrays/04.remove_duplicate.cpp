#include <bits/stdc++.h>
using namespace std;

// //approach 1 - Sets - TC - NlogN
//  void remove_duplicate(vector<int> &arr)
//  {
//      int n = arr.size();

//     set<int> s;

//     for (int i = 0; i < n; i++)
//     {
//         s.insert(arr[i]);
//     }

//     for (auto it : s)
//     {
//         cout << it << " ";
//     }
// }


//approach 2 - 2 pointer - TC - NlogN
int remove_duplicate(vector<int> &arr)
{
    int n = arr.size();
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
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

    remove_duplicate(arr);
}