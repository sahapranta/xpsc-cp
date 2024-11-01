// https://codeforces.com/contest/4/problem/C
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    map<string, int> db;

    while (t--)
    {
        string s;
        cin >> s;

        db[s]++;

        if (db[s] > 1)
        {
            cout << s << db[s] - 1 << endl;
        }
        else
        {
            cout << "OK" << endl;
        }
    }

    return 0;
}