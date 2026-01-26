#include <bits/stdc++.h>
using namespace std;

// approach 2 - parametrize way

void factorial(int n, int fact)
{
    if (n == 0)
    {
        cout << fact;
        return;
    }
    factorial(n - 1, fact * n);
}

int main()
{

    int n;
    cin >> n;
    factorial(n, 1);
}

// approach 1 - functional way

// int factorial(int n)
// {
//     if (n == 0)
//         return 1;

//     return n * factorial(n - 1);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << factorial(n);
// }
/*factorial(4)
→ 4 * factorial(3)
→ 4 * (3 * factorial(2))
→ 4 * (3 * (2 * factorial(1)))
→ 4 * (3 * (2 * (1 * factorial(0))))
→ 4 * 3 * 2 * 1 * 1
→ 24
*/
