#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int invert(const string &str)
{
    int a = 0, b = 0;
    int n = str.length();
    char f = str[0];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (str[i] == '0')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        else
        {
            if (str[i] != f)
            {
                if (str[i] == '0')
                {
                    a++;
                }
                else
                {
                    b++;
                }

                f = str[i];
            }
        }
    }

    return min(a, b);
}

void solve()
{
    int n;
    ll k, x;
    cin >> n >> k >> x;
    string s;
    cin >> s;

    cout << invert(s) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}