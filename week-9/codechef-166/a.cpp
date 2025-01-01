#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int i = 0;

    if (n >= 7)
    {
        cout << 3;
    }
    else if (n > 2)
    {
        cout << 2;
    }
    else
    {
        cout << 1;
    }

    cout << '\n';

    return 0;
}