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
        int n, a = 0, required = 0, total = 0;
        cin >> n;
        required = ((n + 1) * 100) * 0.5;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            total += a;
        }

        if (total + 100 < required)
        {
            cout << -1 << "\n";
        }
        else if (required >= total)
        {
            cout << required - total << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }

    return 0;
}


// Input:
// 4
// 1
// 67
// 2
// 53 32
// 3
// 0 0 0
// 2
// 100 100

// Output:
// 33
// 65
// -1
// 0