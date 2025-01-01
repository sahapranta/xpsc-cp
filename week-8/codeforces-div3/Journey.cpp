#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;

    ll sum = a + b + c;

    if (sum == 0) {
        cout << 0 << '\n';
        return;
    }

    ll cycle = n / sum;
    ll remaining = n % cycle;

    ll days = cycle * 3;

    if (remaining > 0)
    {
        if (remaining <= a)
        {
            days += 1;
        }
        else if (remaining <= a + b)
        {
            days += 2;
        }
        else
        {
            days += 3;
        }
    }

    cout << days << '\n';
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
// 12 1 5 3
// 6 6 7 4
// 16 3 4 1
// 1000000000 1 1 1

// Output:
// 3
// 1
// 6
// 1000000000