// https://codeforces.com/contest/2036/problem/A
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
        int prev = -1;
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;

            if (prev != -1)
            {
                int m = abs(k - prev);

                if (m != 5 && m != 7)
                {
                    flag = false;
                }
            }

            prev = k;
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}