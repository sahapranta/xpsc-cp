#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cust = 1;
    cin >> n;
    set<pair<int, int>> st;
    multiset<pair<int, int>> ms;
    vector<int> ans;

    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;

        if (t == 1)
        {
            int m;
            cin >> m;
            st.insert({cust, m});
            ms.insert({m, -cust});
            cust++;
        }
        else if (t == 2)
        {
            int pos = st.begin()->first, money = st.begin()->second;
            ans.push_back(pos);
            st.erase(st.begin());
            ms.erase({money, -pos});
        }
        else
        {
            int pos = -ms.rbegin()->second, money = ms.rbegin()->first;
            ans.push_back(pos);
            ms.erase(--ms.end());
            st.erase({pos, money});
        }
    }

    for (auto v : ans)
    {
        cout << v << ' ';
    }

    cout << '\n';

    return 0;
}