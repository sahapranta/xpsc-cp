#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int day = 1;
    for (int p : a)
    {
        if (p >= day)
        {
            day++;
        }
    }

    cout << day - 1 << endl;

    return 0;
}
