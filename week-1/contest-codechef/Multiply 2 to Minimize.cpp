#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

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

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> ans;
        map<ll, int> cnt;

        for (int i = 0; i < n; i++)
        {
            cnt[a[i]]++;

            if (cnt[a[i]] >= 2)
            {
                ll val = a[i];

                while (true)
                {
                    ll total = cnt[a[i]];

                    if (cnt[val] < 2)
                    {
                        break;
                    }

                    cnt.erase(val);

                    for (int j = 1; j < (total / 2); j++)
                    {
                        cnt[2ll * val]++;
                    }

                    if (total % 2 != 0)
                    {
                        cnt[val]++;
                    }

                    val *= 2;
                }
            }

            ans.push_back(cnt.size());
        }

        for (int i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}