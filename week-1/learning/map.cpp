#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;
    mp[10] = 20;
    mp[2] = 20;
    mp[5] = 10;
    mp[17] = 7;
    mp[10] = 15;

    cout << mp[10] << endl;
    cout << mp[2] << endl;

    for (auto [key, val] : mp)
    {
        cout << key << " --> " << val << endl;
    }

    auto it = mp.find(17);

    if (it != mp.end())
    {
        cout << it->first << " " << it->second << endl;
        mp.erase(it);
    }
    else
    {
        cout << "Not found!" << endl;
    }

    for (auto [key, val] : mp)
    {
        cout << key << " --> " << val << endl;
    }

    cout << mp.lower_bound(5)->first << endl;
    cout << mp.upper_bound(5)->first << endl;

    return 0;
}