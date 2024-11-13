#include <bits/stdc++.h>
using namespace std;

string process(const string &s)
{
    string r;

    for (char c : s)
    {
        r += c;
        int sz = r.size();
        if (sz >= 2 && r[sz - 2] == 'a' && r[sz - 1] == 'b')
        {
            r.pop_back();
        }
    }

    return r;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string s, t;
        cin >> s >> t;

        string a = process(s);
        string b = process(t);

        int as = a.size(), bs = b.size();

        if (as != bs)
        {
            cout << "NO\n";
            continue;
        }

        for (int i = 0; i < min(as, bs); i++)
        {
            if (a[i] != b[i])
            {
                cout << "NO\n";
                continue;
            }
        }

        cout << "YES\n";
    }

    return 0;
}
