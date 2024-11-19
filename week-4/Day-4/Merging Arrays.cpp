// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    ll a[n], b[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }

    for (int l = i; l < n; l++)
    {
        cout << a[l] << " ";
    }

    for (int l = j; l < m; l++)
    {
        cout << b[l] << " ";
    }

    cout << '\n';

    return 0;
}

// Input:
// 6 7
// 1 6 9 13 18 18
// 2 3 8 13 15 21 25