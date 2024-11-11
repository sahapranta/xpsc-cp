#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, q;
    cin >> t;

    while (t--)
    {
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < q; i++)
        {
            int l, r;
            cin >> l >> r;

            cout << (r - l == ceil(n / 2.0) ? "YES" : "NO") << '\n';
        }
    }

    return 0;
}
