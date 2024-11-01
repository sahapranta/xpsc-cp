// https://codeforces.com/problemset/problem/501/B
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, string> mp;

    for (int i = 0; i < n; i++)
    {
        string old, nn;
        cin >> old >> nn;

        auto it = mp.find(old);

        if (it != mp.end())
        {
            mp[nn] = it->second;
            mp.erase(it);
        }
        else
        {
            mp[nn] = old;
        }
    }

    cout << mp.size() << endl;

    for (auto [name, old] : mp)
    {
        cout << old << " " << name << endl;
    }

    return 0;
}