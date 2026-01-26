#include <bits/stdc++.h>
using namespace std;

// approach 2 - parametrize way(tail recursion)

void sum1(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    sum1(i - 1, sum + i);
}

int main()
{

    int n;
    cin >> n;

    sum1(n, 0);
}

// aproach 1 - functional way (mostly used in DP)
//  int printSum(int n)
//  {

//     if (n == 0)
//         return 0;
//     return n + printSum(n - 1);
// }

// int main()
// {
//     int n;
//     cin >> n;

//     cout << printSum(n);
// }