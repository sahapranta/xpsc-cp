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
        int n, m;
        cin >> n >> m;

        int a[n], b[m];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int cnt = 0;

        for (int i = 0; i < m; i++)
        {
            int b;
            cin >> b;

            if (a[b - 1] > 0)
            {
                a[b - 1]--;
            }
            else
            {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}

// Input:
// 3
// 4 3
// 1 2 0 2
// 1 3 1
// 4 5
// 5 2 3 1
// 2 2 1 4 3
// 2 6
// 2 1
// 1 2 1 2 1 2