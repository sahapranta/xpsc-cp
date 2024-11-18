// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B
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

    int i = 0, j = 0, cnt = 0;

    while (j < m)
    {
        if (i < n && a[i] < b[j])
        {
            cnt++;
            i++;
        }
        else
        {
            cout << cnt << ' ';
            j++;
        }
    }

    cout << '\n';

    return 0;
}