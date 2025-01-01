#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    // int p = count(s.begin(), s.end(), '0');
    // int q = count(s.begin(), s.end(), '1');
    int zeros = 0, ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            zeros++;
        }
        else
        {
            ones++;
        }
    }

    if (zeros == n || ones == n)
    {
        cout << n << '\n';
    }
    else
    {
        cout << 1 << '\n';
    }
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