// https://codeforces.com/problemset/problem/1430/C
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    ll n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a = n, b = n - 1;
        cout << 2 << endl;
        for (ll i = 0; i < n - 1; i++)
        {
            cout << a << " " << b << endl;
            a = ceil((float)(a + b) / 2);
            b--;
        }
    }

    return 0;
}