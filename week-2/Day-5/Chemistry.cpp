#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string a;
        cin >> a;

        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }

        int oddCount = 0;

        for (auto [x, y] : mp)
        {
            if (y % 2 != 0)
            {
                oddCount++;
            }
        }

        oddCount -= k;

        cout << (oddCount <= 1 ? "YES" : "NO") << '\n';
    }

    return 0;
}