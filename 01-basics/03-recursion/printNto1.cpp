#include <bits/stdc++.h>
using namespace std;

/*
print(1,n)
print(n,n)
*/

void print1ToN(int n)
{
    if (n == 0)
        return;

    cout << n << endl;
    print1ToN(n - 1);
}

int main()
{
    int n;
    cin >> n;
    print1ToN(n);
}