#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // pre compute
    int hashh[26];
    for (int i = 0; i < s.size(); i++)
    {
        hashh[s[i] - 'a'] += 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;

        // fetch
        cout << hashh[c - 'a'] << endl;
    }
}