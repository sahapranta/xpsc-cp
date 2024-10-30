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

        int f = 0, g = 0;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                {
                    f++;
                }
                else
                {
                    g++;
                }
            }
        }

        if (f > g)
        {
            cout << 1 << '\n';
        }
        else if (f == g)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }

    return 0;
}