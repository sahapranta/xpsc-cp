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
        string a, b;
        cin >> a >> b;

        int pa = 0, pb = 0;
        int loss = 0, draw = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                draw++;
            }
            else if ((a[i] == 'R' && b[i] == 'S') ||
                     (a[i] == 'S' && b[i] == 'P') ||
                     (a[i] == 'P' && b[i] == 'R'))
            {
                pa++;
            }
            else
            {
                pb++;
                loss++;
            }
        }

        if (pa > pb)
        {
            cout << 0 << endl;
            continue;
        }

        int result = 0;
        int diff = pb - pa;

        for (int i = 0; i < loss && diff > 0; i++)
        {
            result++;
            diff--;
        }

        for (int i = 0; i < draw && diff > 0; i++)
        {
            result++;
            diff--;
        }

        cout << result << endl;
    }

    return 0;
}
