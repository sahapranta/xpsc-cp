// https://codeforces.com/problemset/problem/1807/A
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        cout << (a + b == c ? '+' : '-') << '\n';
    }

    return 0;
}