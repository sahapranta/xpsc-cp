#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    ll a[n];
    ll ans = 0;
    ll odd = 1e9 + 1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i];

        if (a[i] % 2 != 0)
        {
            odd = min(odd, a[i]);
        }
    }

    if (ans % 2 != 0)
    {
        ans -= odd;
    }

    cout << ans << endl;

    return 0;
}