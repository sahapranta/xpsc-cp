#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, x;
        cin >> n >> x;

        int even = n / 2;

        int result = x % 2 == 0 ? even : n - even;

        cout << result - 1 << endl;
    }

    return 0;
}