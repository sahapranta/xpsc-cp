#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = n; i > 0; i--)
        {
            cout << i << " ";
        }

        cout << "\n";
    }

    return 0;
}

// Input:
// 3
// 3
// 4
// 5

// Output:
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1