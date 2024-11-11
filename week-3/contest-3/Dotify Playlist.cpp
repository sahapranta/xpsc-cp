// https://www.codechef.com/problems/DOTIFYPLAY
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, k, l, m, p;
    cin >> t;

    while (t--)
    {
        cin >> n >> k >> l;

        vector<int> st;

        for (int i = 0; i < n; i++)
        {
            cin >> m >> p;

            if (p == l)
            {
                st.push_back(m);
            }
        }

        if (st.size() < k)
        {
            cout << -1 << '\n';
            continue;
        }

        sort(st.begin(), st.end(), greater<int>());

        // int sum = accumulate(st.begin(), st.begin() + k, 0);
        int sum = 0;

        for (int i = 0; i < k; i++)
        {
            sum += st[i];
        }

        cout << sum << '\n';
    }

    return 0;
}