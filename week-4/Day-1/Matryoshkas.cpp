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
        int a[n + 5];
        map<int, int> mp;

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a + 1, a + n + 1);
        for (int i = 0; i < n; i++)
        {
            int val = a[i];
            if (mp[val] != 0)
            {
                ans++;
                while (mp[val] > 0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}