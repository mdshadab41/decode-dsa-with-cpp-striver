#include <bits/stdc++.h>
using namespace std;

int cnt = 1;
void print1ToN(int n)
{
    if (n == 0)
        return;

    cout << cnt << endl;
    cnt = cnt + 1;
    print1ToN(n - 1);
}

int main()
{
    int n;
    cin >> n;
    print1ToN(n);
}