#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, ans = 0;
        cin >> n >> x >> y;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int m = a[i] * x;
            if (m >= y)
            {
                ans += y;
            }
            else
            {
                ans += m;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}

// Input:
// 3
// 4 5 30
// 4 5 2 3
// 4 5 30
// 4 7 2 3
// 5 3 100
// 11 23 35 47 59


// Output:
// 70
// 75
// 402