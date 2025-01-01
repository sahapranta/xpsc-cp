// https://codeforces.com/problemset/submit
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    int maxBit = static_cast<int>(log2(n));

    deque<ll> ans;
    for (int i = 0; i <= maxBit; i++)
    {
        if ((n >> i) & 1)
        {
            ll v = n - (1LL << i);
            if (v > 0)
            {
                ans.push_front(v);
            }
        }
    }

    ans.push_back(n);

    cout << ans.size() << '\n';
    for (auto i : ans)
    {
        cout << i << ' ';
    }

    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// Input:
// 4
// 1
// 3
// 14
// 23

// Output:
// 1
// 1 
// 3
// 1 2 3 
// 4
// 6 10 12 14 
// 5
// 7 19 21 22 23 