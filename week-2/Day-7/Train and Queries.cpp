// https://codeforces.com/problemset/problem/1702/C
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        cin.ignore();
        int n, m;
        cin >> n >> m;

        map<int, set<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int k;
            cin >> k;
            mp[k].insert(i);
        }

        for (int i = 1; i <= m; i++)
        {
            int x, y;
            cin >> x >> y;

            if (mp.find(x) == mp.end() || mp.find(y) == mp.end())
            {
                cout << "NO" << '\n';
            }
            else
            {
                int start, end;
                start = *mp[x].begin();
                end = *mp[y].rbegin();

                cout << (start < end ? "YES" : "NO") << '\n';
            }
        }
    }

    return 0;
}