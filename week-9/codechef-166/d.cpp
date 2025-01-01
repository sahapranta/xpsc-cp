#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<bool> visited(n + 1, false);
        vector<int> lengths;

        for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                int cnt = 0;
                int j = i;

                while (!visited[j])
                {
                    visited[j] = true;
                    j = v[j - 1];
                    cnt++;
                }

                lengths.push_back(cnt);
            }
        }

        if (lengths.size() == 1)
        {
            cout << 0 << "\n";
            continue;
        }

        ll total = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (auto i : lengths)
        {
            pq.push(i);
        }

        while (pq.size() > 1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();

            total += a + b;
            pq.push(a + b);
        }

        cout << total << '\n';
    }

    return 0;
}