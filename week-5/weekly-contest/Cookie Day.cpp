#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        long long a[n];
        int waste = INT_MAX, imp = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < k)
            {
                imp++;
            }
            else
            {
                long long m = a[i] % k;
                if (m < waste)
                    waste = m;
            }
        }

        if (imp == n)
        {
            cout << -1 << '\n';
        } else
        {
            cout << waste << '\n';
        }
        
    }

    return 0;
}

// Input:
// 4
// 4 3
// 7 8 2 1
// 4 4
// 1 2 3 1
// 4 1
// 1 1 1 1
// 4 1000
// 999 1500 2024 2100

// Output:
// 1
// -1
// 0
// 24