// https://codeforces.com/problemset/problem/1722/A
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

        string a = "Timru";
        string b;
        cin >> b;
        sort(b.begin(), b.end());

        cout << (a == b ? "YES" : "NO") << endl;
    }

    return 0;
}