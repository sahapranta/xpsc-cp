// https://codeforces.com/contest/1791/problem/C
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int i = 0, j = n - 1;

    while (i < j)
    {
        if (s[i] == s[j])
        {
            break;
        }

        i++;
        j--;
    }

    cout << (j - i) + 1 << '\n';
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