// https://atcoder.jp/contests/abc191/tasks/abc191_b
#include <iostream>

#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll x, a;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a != x)
            cout << a << " ";
    }

    cout << '\n';

    return 0;
}