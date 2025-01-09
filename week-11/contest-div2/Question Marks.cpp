#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int q = 4 * n;

    map<char, int> mp;

    for (int i = 0; i < q; i++)
    {
        if (s[i] == '?')
            continue;

        mp[s[i]]++;
    }

    int point = 0;

    for (auto [a, b] : mp)
    {
        point += min(n, b);
    }

    cout << point << '\n';
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