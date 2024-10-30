// https://codeforces.com/contest/44/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, bool> mp;
    // map<pair<string, string>, bool> mp;

    for (int i = 0; i < n; i++)
    {
        string s, c;
        cin >> s >> c;
        string color = s + " " + c;

        // we can keep it as pair also
        // mp[{s, c}] = true;
        mp[color] = true;
    }

    cout << mp.size() << endl;

    return 0;
}