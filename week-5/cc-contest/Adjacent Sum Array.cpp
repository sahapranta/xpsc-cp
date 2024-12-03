#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> b(n - 1);

        for (int j = 0; j < n - 1; j++)
        {
            cin >> b[j];
        }

        sort(b.begin(), b.end());

        vector<ll> a(n);
        a[0] = 1;
        a[1] = b[0] - a[0];

        for (int i = 2; i < n; ++i)
        {
            a[i] = b[i - 1] - a[i - 1];
        }

        for (auto i : a)
        {
            cout << i << " ";
        }

        cout << '\n';
    }

    return 0;
}

// Input:
// 2
// 3
// 9 7
// 4
// 4 4 4

// Output:
// 1 6 3
// 1 3 1 3