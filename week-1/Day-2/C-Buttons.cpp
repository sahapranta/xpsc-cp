#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, ans;
    cin >> a >> b;

    ans = max(ans, a + (a - 1));
    ans = max(ans, b + (b - 1));
    ans = max(ans, a + b);

    cout << ans << endl;

    return 0;
}