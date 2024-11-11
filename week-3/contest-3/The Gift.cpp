#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n, m;
    cin >> x >> n >> m;

    cout << (x + m >= n ? "YES" : "NO") << '\n';

    return 0;
}