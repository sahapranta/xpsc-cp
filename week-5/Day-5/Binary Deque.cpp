// https://codeforces.com/problemset/problem/1692/E
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int sum = 0;
    for (auto &d : v)
    {
        cin >> d;
        sum += d;
    }

    if (sum <= k)
    {
        cout << (sum < k ? "-1\n" : "0\n");
        return;
    }

    int r = 0, l = 0, ss = 0,
        ans = INT_MAX;

    while (r < n)
    {
        ss += v[r];

        while (ss > k)
        {
            ss -= v[l];
            l++;
        }

        ans = min(ans, n - abs(r - l + 1));

        r++;
    }

    cout << ans << '\n';
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