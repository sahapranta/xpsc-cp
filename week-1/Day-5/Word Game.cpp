// https://codeforces.com/problemset/problem/1722/C
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int d = t;

    while (t--)
    {
        int n, K = 3;
        cin >> n;

        map<string, vector<int>> point;

        for (int i = 0; i < K; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;

                point[s].push_back(i);
            }
        }

        int ans[3] = {0};

        for (auto [x, y] : point)
        {
            int sz = y.size();
            if (sz == 1)
            {
                ans[y[0]] += 3;
            }
            else if (sz == 2)
            {
                ans[y[0]]++;
                ans[y[1]]++;
            }
        }

        for (int s : ans)
        {
            cout << s << " ";
        }
        cout << endl;
    }

    return 0;
}