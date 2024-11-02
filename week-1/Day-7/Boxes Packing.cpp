// https://codeforces.com/contest/903/problem/C
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<ll, int> mp;

    ll ans = 0;
    
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        mp[a]++;
        ans = max<ll>(ans, mp[a]);
    }

    cout << ans << endl;

    return 0;
}