#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    int ans = b / c;
    ans = ans * c;

    if (a <= ans)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << '\n';
    }

    return 0;
}