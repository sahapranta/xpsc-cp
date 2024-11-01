// https://codeforces.com/problemset/problem/1907/B
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

void optimum(string &s, ll n)
{
    ll ind;

    stack<ll> upper, lower;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            s[i] = '$';

            if (!upper.empty())
            {
                ind = upper.top();
                s[ind] = '$';
                upper.pop();
            }
            continue;
        }

        if (s[i] == 'b')
        {
            s[i] = '$';
            if (!lower.empty())
            {
                ind = lower.top();
                s[ind] = '$';
                lower.pop();
            }
            continue;
        }

        if (isupper(s[i]))
        {
            upper.push(i);
        }
        else
        {
            lower.push(i);
        }
    }
}

void bruteForce(string &str, ll K)
{
    for (ll i = 0; i < K; i++)
    {
        char c = str[i];
        if (c == 'B' || c == 'b')
        {
            str[i] = '$';
            for (ll j = i; j >= 0; j--)
            {
                if ((c == 'B' && isupper(str[j])) || (c == 'b' && islower(str[j])))
                {
                    str[j] = '$';
                    break;
                }
            }
        }
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
        string str;
        cin >> str;

        long long int K = str.length();

        optimum(str, K);
        // bruteForce(str, K);

        for (char c : str)
        {
            if (c != '#')
            {
                cout << c;
            }
        }

        cout << "\n";
    }

    return 0;
}