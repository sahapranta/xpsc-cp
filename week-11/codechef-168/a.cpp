#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    int n, m;
    cin >> n;
    int prev = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        prev = max(prev, m);

        if (m >= prev)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
        
        cout << ' ';
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

// 2
// 5
// 3 1 2 4 5
// 4
// 1 2 3 4