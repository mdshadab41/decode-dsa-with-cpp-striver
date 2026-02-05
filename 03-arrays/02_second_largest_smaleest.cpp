#include <bits/stdc++.h>
using namespace std;
// brute force nlog(n)
// void secondlargest(vector<int> &arr)
// {

//     int n = arr.size();

//     sort(arr.begin(), arr.end());
//     cout << "largest:" << arr[n - 1] << endl;

//     int largest = arr[n - 1];

//     int secondlargest = INT_MIN;

//     for (int i = n - 2; i >= 0; i--)
//     {
//         if (arr[i] != largest)
//         {
//             secondlargest = arr[i];
//             break;
//         }
//     }
//     cout << "secondlargest:" << secondlargest;
// }

// best O(n)

void secondlargest(vector<int> &arr)
{
    int n = arr.size();
    if (n < 2)
    {
        cout << "must have 2 elements" << endl;
        return;
    }

    int largest = INT_MIN;
    int seclargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            seclargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > seclargest)
        {
            seclargest = arr[i];
        }
    }
    cout << seclargest << endl;
}

int main()
{
    vector<int> arr = {2, 3, 18, 8, 20};
    secondlargest(arr);
}