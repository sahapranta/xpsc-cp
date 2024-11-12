// https://codeforces.com/problemset/problem/1622/B
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
        int n;
        cin >> n;
        int a[n];
        int b[n];
        map<int, int> mp;
        vector<int> l, d;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            mp[a[i]] = i;
        }

        string s;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                d.push_back(a[i]);
            }
            else
            {
                l.push_back(a[i]);
            }
        }

        sort(d.begin(), d.end());
        sort(l.begin(), l.end());
        sort(a, a + n);

        reverse(d.begin(), d.end());
        reverse(l.begin(), l.end());
        reverse(a, a + n);

        int i = 0;
        for (; i < l.size(); i++)
        {
            b[mp[l[i]]] = a[i];
        }

        for (int j = 0; j < d.size(); j++)
        {
            b[mp[d[j]]] = a[i];
            i++;
        }

        for (int i : b)
        {
            cout << i << " ";
        }

        cout << '\n';
    }

    return 0;
}