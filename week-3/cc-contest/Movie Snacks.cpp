#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    int opt1 = z * 2 + y;
    int opt2 = x * 2 + y * 3;
    int opt3 = x * 1 + y * 2 + z;

    int opt = min(opt1, opt2);

    cout << min(opt, opt3) << endl;

    return 0;
}

// Input: 110 80 200
// Output: 460

