// https://codeforces.com/problemset/problem/1997/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        int len = s.length();

        bool f = true;

        for (int i = 0; i < len - 1; i++)
        {
            cout << s[i];
            if (s[i + 1] == s[i] && f)
            {
                f = false;
                cout << (s[i] == 'a' ? 'b' : 'a');
            }
        }

        cout << s[len - 1];

        if (f)
        {
            cout << (s[len - 1] == 'a' ? 'b' : 'a');
        }

        cout << '\n';
    }

    return 0;
}