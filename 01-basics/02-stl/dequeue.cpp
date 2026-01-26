#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(7);  //{7}
    dq.push_front(8); //{8,7}

    dq.pop_back(); //{8}

    for (auto it : dq)
    {
        cout << it << " ";
    }

    //rest function same as vector
}