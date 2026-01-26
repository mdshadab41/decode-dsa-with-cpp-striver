#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    // 0 1 1 2 3 5
    if (n <= 1)
    {
        return n;
    }

    int last = fibo(n - 1);
    int slast = fibo(n - 2);

    return last + slast;
}

int main()
{
    int n;
    cin >> n;

    cout << fibo(n);
}