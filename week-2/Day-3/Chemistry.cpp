#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string a, int n)
{
    int i = n - 1;
    int j = 0;
    bool f = true;
    while (j <= i)
    {
        if (a[i] != a[j])
        {
            f = false;
            break;
        }
        i--;
        j++;
    }

    return f;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        string a;
        cin >> x >> y >> a;

        if (x == 1)
        {
            cout << "YES\n";
            continue;
        }

        if (y == 0)
        {
            cout << (isPalindrome(a, x) ? "YES" : "NO") << "\n";
        }

        
    }

    return 0;
}