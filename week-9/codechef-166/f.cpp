#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool comp(const pair<ll, int> &p1, const pair<ll, int> &p2)
{
    return p1.first > p2.first;
}

void solve()
{
    int n;
    cin >> n;

    vector<ll> v(n), a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<pair<ll, int>> p(n);
    for (int i = 0; i < n; i++)
    {
        p[i] = make_pair(v[i], i);
    }

    sort(p.begin(), p.end(), comp);

    for (int i = 1; i <= n; i++)
    {
        int x = p[i - 1].second;
        a[x] = i;
    }

    ll c = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (abs(a[i] - a[i + 1]) == 1)
        {
            c++;
        }
    }

    ll ans = n - c;

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