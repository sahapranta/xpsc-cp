// https://codeforces.com/problemset/problem/1703/C
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

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;

            for (int j = 0; j < k; j++)
            {
                char c;
                cin >> c;

                if (c == 'U')
                {
                    a[i]--;
                    if (a[i] == -1)
                    {
                        a[i] = 9;
                    }
                }
                else
                {
                    a[i]++;
                    if (a[i] == 10)
                    {
                        a[i] = 0;
                    }
                }
            }
        }

        for (int x : a)
        {
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}