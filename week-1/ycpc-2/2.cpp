#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

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
        ll a[n];
        ll start = LLONG_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            start = min(start, a[i]);
        }

        ll b[n];

        for (ll i = 0; i < n; i++)
        {
            // b[i] = start + i;
            cout << start + i << " ";
        }

        cout << endl;
    }

    return 0;
}