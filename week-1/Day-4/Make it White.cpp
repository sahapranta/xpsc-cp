// https://codeforces.com/problemset/problem/1927/A

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
        string s;
        cin >> s;

        int i = 0;
        int j = n - 1;

        int p1 = -1, p2 = -1;

        // alternative using find function
        // p1 = s.find('B');
        // p2 = s.rfind('B');

        // using loop
        while (i < n || j > 0)
        {
            if (s[i] == 'B' && p1 == -1)
            {
                p1 = i;
            }

            if (s[j] == 'B' && p2 == -1)
            {
                p2 = j;
            }

            i++;
            j--;
        }

        cout << p2 - p1 + 1 << endl;
    }

    return 0;
}