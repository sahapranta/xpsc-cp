#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int mod = 1e9 + 7;
const int MX = 1e5;

vector<int> erato(int n)
{
    vector<int> s(n + 1);
    iota(s.begin(), s.end(), 0);

    for (int i = 2; i * i <= n; i++)
    {
        if (s[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (s[j] == j)
                {
                    s[j] = i;
                }
            }
        }
    }

    return s;
}

ll calc(const unordered_map<int, int> &cnt)
{
    ll div = 1;

    for (auto &[p, c] : cnt)
    {
        div = div * (c + 1) % mod;
    }

    return div;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> sp = erato(MX);
    unordered_map<int, int> factors;

    for (int i = 2; i <= m; i++)
    {
        int num = i;

        while (num > 1)
        {
            factors[sp[num]]++;
            num /= sp[num];
        }
    }

    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        unordered_map<int, int> total = factors;
        int num = v[i];
        while (num > 1)
        {
            total[sp[num]]++;
            num /= sp[num];
        }

        ans[i] = calc(total);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << ' ';
    }

    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}