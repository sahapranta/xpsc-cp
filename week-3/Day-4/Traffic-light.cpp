#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    char ch;
    string s;
    cin >> n;
    cin >> ch;
    cin >> s;
    s += s;
    int ans = 0, cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ch)
        {
            cnt = 0;
            while (s[i] != 'g' && i < s.size())
            {
                cnt++;
                i++;
            }
            if (cnt > ans)
            {
                ans = cnt;
            }
        }
    }
    cout << ans << '\n';
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