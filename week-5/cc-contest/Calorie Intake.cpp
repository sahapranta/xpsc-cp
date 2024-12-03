#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    cout << max(-1, x - (y * z)) << '\n';

    return 0;
}

// Input: 10 2 4
// Output: 2