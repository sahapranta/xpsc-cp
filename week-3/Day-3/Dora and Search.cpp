// https://codeforces.com/problemset/problem/1793/C
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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int l = 0, r = n - 1, mn = 1, mx = n;

        while (l < r)
        {
            if (a[l] == mn)
            {
                l++;
                mn++;
                continue;
            }
            else if (a[l] == mx)
            {
                l++;
                mx--;
                continue;
            }

            if (a[r] == mn)
            {
                r--;
                mn++;
                continue;
            }
            else if (a[r] == mx)
            {
                r--;
                mx--;
                continue;
            }

            cout << l + 1 << " " << r + 1 << '\n';
            goto nxt;
        }
        cout << -1 << '\n';
    nxt:;
    }

    return 0;
}