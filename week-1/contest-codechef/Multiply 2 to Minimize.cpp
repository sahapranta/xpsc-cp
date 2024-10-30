#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int cnt(vector<ll> &ar, int n)
{
    if (n <= 0)
    {
        return 0;
    }

    if (n < 3)
    {
        return n;
    }

    ll k = ar[n - 1];
    cout << "K: " << k << endl;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (k == ar[i])
        {
            cout << "A[" << i << "] " << ar[i] << endl;
            ar.erase(ar.begin() + i);
            ar.pop_back();
            found = true;
            break;
        }
    }

    if (found)
    {
        ll b = k * 2;
        ar.push_back(b);

        for (auto i : ar)
        {
            cout << i << " ";
        }
        cout << endl;

        return cnt(ar, ar.size());
    }
    else
    {
        return ar.size();
    }
}

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
        vector<ll> a;
        int ans[n];

        for (int i = 0; i < n; i++)
        {
            ll p;
            cin >> p;
            a.push_back(p);
            ans[i] = cnt(a, a.size());
        }

        // for (auto i : ans)
        // {
        //     cout << i << " ";
        // }

        cout << '\n';
    }

    return 0;
}