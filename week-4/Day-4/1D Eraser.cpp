// https://codeforces.com/contest/1873/problem/D
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
        string s;
        cin >> s;

        int i = 0, cnt = 0;
        while (i < n)
        {
            if (s[i] == 'B')
            {
                cnt++;
                i = min(n, i + k);
                continue;
            }

            i++;
        }

        cout << cnt << '\n';
    }

    return 0;
}


// Input:
// 3
// 6 3
// WBWWWB
// 7 3
// WWBWBWW
// 5 4
// BWBWB