// https://codeforces.com/contest/381/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq(n);

    int sr = 0, dm = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    int k = 1;

    while (!dq.empty())
    {
        int left = dq.front();
        int right = dq.back();
        int mx = max(left, right);

        if (k % 2 == 0)
        {
            dm += mx;
        }
        else
        {
            sr += mx;
        }

        if (mx == dq.front())
        {
            dq.pop_front();
        }
        else
        {
            dq.pop_back();
        }

        k++;
    }

    cout << sr << " " << dm << '\n';

    return 0;
}