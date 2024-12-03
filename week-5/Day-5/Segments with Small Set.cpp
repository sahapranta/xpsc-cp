#include <bits/stdc++.h>

using namespace std;

int cnt[100001];
int num = 0;

void add(int x)
{
    cnt[x]++;
    if (cnt[x] == 1)
        num++;
}

void remove(int x)
{
    cnt[x]--;
    if (cnt[x] == 0)
        num--;
}

int s;
bool good()
{
    return num <= s;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n >> s;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int r = 0, l = 0;
    int ans = 0;
    while (r < n)
    {
        add(a[r]);

        while (!good())
        {
            remove(a[l]);
            l++;
        }

        ans += r - l + 1;

        r++;
    }

    cout << ans << '\n';

    return 0;
}