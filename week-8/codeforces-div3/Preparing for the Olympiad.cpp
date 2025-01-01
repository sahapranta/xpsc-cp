#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int totalA = 0, totalB = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        totalA += a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (i > 0)
        {
            if (a[i - 1] < b[i])
            {
                totalB += a[i - 1];
            }
            else
            {
                totalB += b[i];
            }
        }
    }

    cout << totalA - totalB << '\n';
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