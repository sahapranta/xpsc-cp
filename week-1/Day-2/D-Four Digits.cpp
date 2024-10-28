#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string N;
    cin >> N;

    int len = N.size();

    if (len < 4)
    {
        int count = 4 - len;
        for (int i = 0; i < count; i++)
        {
            cout << 0;
        }
    }

    cout << N << endl;

    return 0;
}