#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<int> q;

    q.push_back(2);
    q.push_back(3);
    q.push_back(4);
    q.push_back(5);

    q.push_front(1);
    q.push_front(6);

    q.pop_front();
    q.pop_back();

    sort(q.begin(), q.end());

    for (auto x : q)
    {
        cout << x << endl;
    }

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    return 0;
}