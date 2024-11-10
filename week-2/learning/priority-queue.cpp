#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // type: minheap & maxheap
    // value sorted (non decreasing & non increasing)
    // by default priority queue main MaxHeap

    priority_queue<int> pq;

    pq.push(1);
    pq.push(5);
    pq.push(3);
    pq.push(2);
    pq.push(8);
    pq.push(1);

    while (!pq.empty())
    {
        cout << pq.top() << ' ';
        pq.pop();
    }


    // pq.push // O(logn)
    // pq.pop // O(logn)
    // pq.top // O(1)
    // pq.size // O(1)
    // pq.empty // O(1)

    return 0;
}