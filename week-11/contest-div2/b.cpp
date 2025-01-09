#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    int n;
    ll s = 0, last, secondLast;
    cin >> n;

    vector<ll> v(n + 2);
    for (int i = 0; i < n - 2; i++)
    {
        cin >> v[i];
        s += v[i];
    }

    cin >> secondLast >> last;

    cout << last - (secondLast - s) << '\n';
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