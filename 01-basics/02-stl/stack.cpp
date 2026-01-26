#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;  //LIFO

    st.push(5); //{5}
    st.push(6); //{6,5}
    st.push(7); //{7, 6, 5}
    st.push(9); //{9, 7, 6, 5}

    cout << st.top() << endl;

    st.pop();

    cout << st.size();

    cout << st.empty();

    stack<int> st2;
    st.swap(st2);
}