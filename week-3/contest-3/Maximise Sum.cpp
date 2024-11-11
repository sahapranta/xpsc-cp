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
        int n;
        cin >> n;

        vector<int> a(n);
        int neg = 0, zeros = 0;
        long long sum = 0;
        int mini = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] < 0)
            {
                neg++;
            }
            else if (a[i] == 0)
            {
                zeros++;
            }

            sum += abs(a[i]);
            mini = min(mini, abs(a[i]));
        }

        if (neg % 2 == 1 && zeros == 0)
        {
            sum = sum - (2 * mini);
        }

        cout << sum << '\n';
    }

    return 0;
}
