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
        int n, x;
        cin >> n >> x;
        int a[n], b[n];
        int wA = 0, wB = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                wA++;
            }
            else
            {
                int diff = abs(a[i] - b[i]);

                if (x > diff)
                {
                    wA++;
                    x -= diff;
                }
                else
                {
                    wB++;
                }
            }
        }

        cout << (wA > wB ? "YES" : "NO") << '\n';
    }

    return 0;
}