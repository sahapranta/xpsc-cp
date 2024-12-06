#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll k;
        cin >> n >> k;

        ll a, sum = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum += floor((a * 1.0) / k);

            if (a % k != 0)
                cnt++;
        }

        if (sum > 0 || sum < -cnt)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
        }
    }

    return 0;
}

// Input:
// 4
// 4 2
// 2 4 -2 -4
// 2 3
// 5 -6
// 2 1
// -1 2
// 2 2
// -1 2

// Output:
// YES
// YES
// NO
// YES