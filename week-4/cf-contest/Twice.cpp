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
        int n, a, ans = 0;
        cin >> n;

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> a;
            mp[a]++;
        }

        for (auto [x, y] : mp)
        {
            ans += y / 2;
        }

        cout << ans << '\n';
    }

    return 0;
}