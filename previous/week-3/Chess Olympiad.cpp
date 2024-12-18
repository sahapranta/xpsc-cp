// https://www.codechef.com/problems/CHOLY
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z, t, a, b;
    cin >> x >> y >> z;

    t = x + y + z;
    y = y * 0.5;

    a = x + y + (4 - t);
    b = z + y;

    cout << (a > b ? "YES" : "NO") << '\n';

    return 0;
}

// Input: 2 0 2
// Output: NO