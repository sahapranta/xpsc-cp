#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll NUM = 1e6;

void solve()
{
    ll n, s = 0;
    cin >> n;
    vector<ll> v;

    for (ll i = 0; i < n; i++)
    {
        ll m;
        cin >> m;
        if (i == 0)
        {
            s = m;
        }

        v.push_back(m);
    }
    sort(v.begin(), v.end());

    if (s == v[0])
    {
        cout << s + (v[1] - s) / 2 << '\n';
    }
    else if (s == v[n - 1])
    {
        cout << NUM - s + 1 + (s - v[n - 2]) / 2 << '\n';
    }
    else
    {
        ll a = 0, b = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] == s)
            {
                a = s - (s - v[i - 1]) / 2;
                b = s + (v[i + 1] - s) / 2;
                break;
            }
        }

        cout << b - a + 1 << '\n';
    }
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