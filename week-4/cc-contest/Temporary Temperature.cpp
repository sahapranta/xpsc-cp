#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int mini = a[0], maxi = a[0];

        for (auto x : a)
        {
            if (x < mini)
            {
                mini = x;
            }

            if (x > maxi)
            {
                maxi = x;
            }
        }

        ll i = 0, j = max(maxi - mini, 0);

        while (i < j)
        {
            ll mid = i + (j - i) / 2;
            ll cnt = 0;
            ll low = a[0] - mid;
            ll high = a[0] + mid;

            for (int i = 1; i < n; i++)
            {
                ll l = a[i] - mid;
                ll h = a[i] + mid;

                low = max(low, l);
                high = min(high, h);

                if (low > high)
                {
                    cnt++;
                    low = l;
                    high = h;
                }
            }

            if (cnt <= k + 1)
            {
                j = mid;
            }
            else
            {
                i = mid + 1;
            }
        }

        cout << j << '\n';
    }

    return 0;
}