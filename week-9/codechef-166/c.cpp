#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]] = max(mp[v[i]], i + 1);
    }

    int total = 0;
    for (auto &i : mp)
    {
        total += i.second;
    }

    cout << total << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}