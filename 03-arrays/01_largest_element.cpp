#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 3, 8, 18, 19, 200};

    int length = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << largest;
}