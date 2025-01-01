#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool found = false;

    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i >> j) & 1)
            {
                sum += a[j];
            }
            else
            {
                sum -= a[j];
            }
        }
        
        if (sum % 360 == 0)
        {
            found = true;
            break;
        }
    }

    cout << (found ? "YES" : "NO") << "\n";

    return 0;
}

// 3
// 10 20 30