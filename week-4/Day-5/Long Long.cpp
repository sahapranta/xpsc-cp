// https://codeforces.com/problemset/problem/1843/B
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
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll ans = 0;
        int neg = 0, cnt = 0;

        for (auto x : a)
        {
            ans += abs(x);

            if (x < 0)
            {
                if (neg == 0)
                {
                    neg = 1;
                    cnt++;
                }
            }
            else if (x > 0)
            {
                neg = 0;
            }
        }

        cout << ans << " " << cnt << '\n';
    }

    return 0;
}

// Input:
// 5
// 6
// -1 7 -4 -2 5 -8
// 8
// -1 0 0 -2 1 0 -3 0
// 5
// 2 -1 0 -3 -7
// 5
// 0 -17 0 1 0
// 4
// -1 0 -2 -1