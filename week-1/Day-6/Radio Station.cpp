// https://codeforces.com/contest/918/problem/B
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map<string, string> ips;

    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        ips[b] = a;
    }

    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        cout << a << " " << b;
        b.pop_back();

        cout << " #" << ips[b] << "\n";
    }

    return 0;
}