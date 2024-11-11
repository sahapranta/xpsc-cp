#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int x, y, z;
    while (t--)
    {
        cin >> x >> y >> z;

        int opt1 = x * y;
        int opt2 = x % 2 == 0 ? (x / 2) * z : ((x / 2) * z) + y;

        cout << max(opt1, opt2) << '\n';
    }

    return 0;
}

// Input:
// 3
// 4 5 7
// 3 1 2
// 5 2 6