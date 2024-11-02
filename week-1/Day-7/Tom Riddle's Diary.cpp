// https://codeforces.com/contest/855/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> names;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        names[s]++;

        if (names[s] > 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}