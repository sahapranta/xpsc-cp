#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        int ans = (10 - ceil(x / 10.0)) * 10;

        cout << ans << endl;
    }

    return 0;
}