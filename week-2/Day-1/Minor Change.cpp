// https://atcoder.jp/contests/abc172/tasks/abc172_b
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    int count = 0;
    int i = 0;
    int len = min(a.length(), b.length());

    while (i < len)
    {
        if (a[i] != b[i])
        {
            count++;
        }
        i++;
    }

    cout << count << endl;

    return 0;
}