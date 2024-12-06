#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m, clen = 0, cnt = 0;
    cin >> n >> m;

    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        int len = v[i].size();
        if (clen + len > m)
        {
            break;
        }

        clen += len;
        cnt++;
    }

    cout << cnt << '\n';
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

// 5
// 3 1
// a
// b
// c
// 2 9
// alpha
// beta
// 4 12
// hello
// world
// and
// codeforces
// 3 2
// ab
// c
// d
// 3 2
// abc
// ab
// a

// Output
// 1
// 2
// 2
// 1
// 0