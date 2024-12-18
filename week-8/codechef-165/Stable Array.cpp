// https://www.codechef.com/START165D/problems/STABARR
#include <bits/stdc++.h>

using namespace std;

void solved()
{
    int n;
    cin >> n;

    vector<int> a(n), p(n), d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    p[n - 1] = a[n - 1];
    d[n - 1] = 0;

    for (int i = n - 2; i >= 0; --i)
    {
        p[i] = max(a[i], p[i + 1]);

        if (a[i] == p[i])
        {
            d[i] = 0;
        }
        else
        {
            d[i] = d[i + 1] + 1;
        }
    }

    int sec = *max_element(d.begin(), d.end());

    cout << sec << '\n';
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m = a[n - 1];
    int sec = 0;

    for (int i = n - 2; i >= 0; --i)
    {
        if (a[i] < m)
        {
            sec++;
        }
        else
        {
            m = a[i];
        }
    }

    cout << sec << '\n';
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


// input:
// 4
// 3
// 3 2 1
// 3
// 1 2 3
// 4
// 2 1 3 1
// 5
// 3 1 4 1 5

// Output:
// 0
// 2
// 2
// 4