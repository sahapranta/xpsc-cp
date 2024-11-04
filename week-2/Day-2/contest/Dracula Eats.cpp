#include <iostream>

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

        if (n < 2)
        {
            cout << 0 << '\n';
            continue;
        }

        cout << ((n - 2) / 7) + 1 << '\n';
    }

    return 0;
}