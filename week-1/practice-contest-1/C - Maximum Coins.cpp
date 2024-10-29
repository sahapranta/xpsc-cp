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
        int n, x;
        cin >> n >> x;

        int score = 0;

        for (int i = n; i >= 1; i--)
        {
            if (x > 0)
            {
                score += pow(2, i);
                x--;
            }
            else
            {
                score -= pow(2, i);
            }
        }

        cout << score << endl;
    }
}