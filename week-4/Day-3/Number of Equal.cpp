// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    ll a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int i = 0, j = 0;
    ll ans = 0;

    while (i < n && j < m)
    {
        int curr = a[i], cnt1 = 0, cnt2 = 0;

        while (i < n && a[i] == curr)
        {
            cnt1++;
            i++;
        }

        while (j < m && curr > b[j])
        {
            j++;
        }

        while (j < m && b[j] == curr)
        {
            cnt2++;
            j++;
        }

        ans += (1LL * cnt1 * cnt2);
    }

    cout << ans << '\n';

    return 0;
}