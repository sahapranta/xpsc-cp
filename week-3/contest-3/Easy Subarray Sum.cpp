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

        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] > 0)
            {
                sum += a[i];
            }
        }

        if (sum == 0)
        {
            cout << 0 << '\n';
            continue;
        }

        int left = 0, right = n - 1;

        while (left < n && a[left] <= 0)
        {
            left++;
        }

        while (right >= 0 && a[right] <= 0)
        {
            right--;
        }

        int count = 0;
        for (int i = left + 1; i < right; i++)
        {
            if (a[i] < 0)
                count++;
        }

        cout << count << '\n';
    }

    return 0;
}