// https://codeforces.com/problemset/problem/368/B
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    set<int> st;

    for (int i = n - 1; i >= 0; i--)
    {
        st.insert(a[i]);
        b[i] = st.size();
    }

    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        cout << b[x - 1] << '\n';
    }

    return 0;
}