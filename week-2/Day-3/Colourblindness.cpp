#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        bool result = true;

        for (int i = 0; i < n; ++i)
        {
            if ((a[i] == 'R' && b[i] != 'R') ||
                (b[i] == 'R' && a[i] != 'R'))
            {
                result = false;
            }
        }

        cout << (result ? "YES" : "NO") << '\n';
    }
    return 0;
}
