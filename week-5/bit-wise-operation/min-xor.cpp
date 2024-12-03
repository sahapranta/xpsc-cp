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
        int n, XOR = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            XOR ^= a[i];
        }

        int ans = XOR;
        for (int i = 0; i < n; i++)
        {
            ans = min(ans, (XOR ^ a[i]));
        }

        cout << ans << '\n';
    }

    return 0;
}

// Input:
// 3
// 4
// 2 4 3 6
// 2
// 4 4
// 5
// 1 3 5 17 9


// Output:
// 0
// 0
// 14