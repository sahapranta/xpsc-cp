// https://www.codechef.com/problems/MNR
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;    

    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (n == 3)
    {
        cout << 0 << '\n';
        return;
    }

    sort(v, v + n);

    int ans = v[n - 1] - v[2];
    ans = min(ans, v[n - 2] - v[1]);
    ans = min(ans, v[n - 3] - v[0]);
    cout << ans << endl;
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