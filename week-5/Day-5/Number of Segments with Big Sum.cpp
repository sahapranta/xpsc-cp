#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll s;
    cin >> n >> s;
    ll a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int r = 0, l = 0;
    ll sum = 0;
    int ans = 0;
    while (r < n)
    {
        sum += a[r];

        while (sum >= s)
        {
            sum -= a[l];
            l++;
        }

        ans += l;
        r++;
    }

    cout << ans << endl;

    return 0;
}