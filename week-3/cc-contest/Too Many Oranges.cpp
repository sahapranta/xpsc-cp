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
        int a, b;
        cin >> a >> b;

        int mn = 10 * a, mx = 12 * a;
        cout << (b <= mx && b >= mn ? "YES" : "NO") << '\n';
    }

    return 0;
}

// Input:
// 5
// 1 10
// 1 9
// 2 21
// 4 48
// 5 49

// Output:
// YES
// NO
// YES
// YES
// NO