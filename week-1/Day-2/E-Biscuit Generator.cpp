#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, t;
    cin >> a >> b >> t;
    t = t + 0.5;

    cout << b * (t / a) << endl;

    return 0;
}