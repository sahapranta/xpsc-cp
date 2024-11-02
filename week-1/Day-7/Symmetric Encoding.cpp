// https://codeforces.com/contest/1974/problem/B
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

        string s;
        cin >> s;

        set<char> st;
        map<char, char> mp;

        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
        }

        auto rit = st.rbegin();

        for (auto it = st.begin(); it != st.end(); it++)
        {
            mp[*it] = *rit;
            rit++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << mp[s[i]];
        }

        cout << endl;
    }

    return 0;
}