// https://www.codechef.com/START165D/problems/POSTPERI
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    int ans = INT_MAX;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int pm = 2 * (i + j);
            int diff = abs(pm - k);
            ans = min(ans, diff);
        }
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

// Input:
// 4
// 5 5 12
// 3 4 5
// 2 1 9
// 34 45 1

// Output:
// 0
// 1
// 3
// 3