#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> s;
    multiset<int> ml;

    int n = 7;
    int a[7] = {1, 1, 2, 3, 4, 6, 6};

    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
        ml.insert(a[i]);
    }

    cout << "SET: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << ' ';
    }

    cout << '\n';

    cout << "MULTISET: ";
    for (auto v : ml)
    {
        cout << v << ' ';
    }

    cout << '\n';

    return 0;
}