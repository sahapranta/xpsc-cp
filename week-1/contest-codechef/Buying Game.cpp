#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int all = 0;
        for (int i = 0; i < n; i++)
        {
            a[i] -= b[i];
            all += b[i];
        }

        sort(a, a + n);

        all += a[0];
        int ans = all - a[0];

        for (int i = 1; i < n; i++)
        {
            all += a[i];
            if (ans > all)
            {
                ans = all;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}