#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int ans = (b - a) + 1;

    cout << (ans >= 0 ? ans : 0) << endl;

    return 0;
}