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
        int x, y;
        cin >> x >> y;
        string a, b;
        cin >> a;

        set<int> st;

        for (int i = 0; i < y; i++)
        {
            int m;
            cin >> m;
            st.insert(m);
        }

        cin >> b;

        sort(b.begin(), b.end());

        int i = 0;

        for (auto it : st)
        {
            a[it - 1] = b[i];
            i++;
        }

        cout << a << '\n';
    }

    return 0;
}