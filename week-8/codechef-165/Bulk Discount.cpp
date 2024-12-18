// https://www.codechef.com/START165D/problems/BDISC
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll cost = 0;

    for (int i = 0; i < n; i++)
    {
        cost += max(0LL, a[i] - i);
    }

    cout << cost << '\n';
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
// 3
// 2
// 4 3
// 4
// 2 2 2 2
// 4
// 3 1 4 1

// Ouput:
// 6
// 3
// 3