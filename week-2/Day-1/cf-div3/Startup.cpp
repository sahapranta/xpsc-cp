// https://codeforces.com/contest/2036/problem/B

// Not Working

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
        int n, k;
        cin >> n >> k;
        int sum = 0;
        for (int i = 0; i < k; i++)
        {
            int a, b;
            cin >> a >> b;

            if (n >= a)
            {
                sum += b;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
