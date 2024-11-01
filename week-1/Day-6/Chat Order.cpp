// https://codeforces.com/problemset/problem/637/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string a[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    set<string> se;

    for (int i = n - 1; i >= 0; i--)
    {
        if (se.count(a[i]) > 0)
            continue;
        cout << a[i] << endl;
        se.insert(a[i]);
    }

    return 0;
}
