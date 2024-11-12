// https://codeforces.com/problemset/problem/1800/C1
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
        multiset<int, greater<int>> mt;
        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                mt.insert(a[i]);
            }
            else
            {
                if (mt.size() != 0)
                {
                    ans = ans + *mt.begin();
                    mt.erase(mt.begin());
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}