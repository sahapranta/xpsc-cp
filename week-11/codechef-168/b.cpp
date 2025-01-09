// B
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    int n;
    string a, b;
    cin >> n >> a >> b;
    int o = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1' && b[i] == '1')
        {
            o++;
        }
        if (a[i] == '0' && b[i] == '0')
        {
            z++;
        }
    }
    int rem = n - o - z;
    if (o % 2 == 0 && rem == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
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
// 3
// 110
// 101
// 2
// 11
// 11