#include <bits/stdc++.h>
using namespace std;

int main()
{
    // priority_queue<int> pq;

    // pq.push(10);
    // pq.push(20);
    // pq.push(30);
    // pq.push(40);
    // pq.push(5);
    // pq.push(6);

    // cout << pq.top();

    // pq.pop();

    // pq.top();

    // Minimum heap

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(5);
    pq.push(6);
    cout << pq.top();
}