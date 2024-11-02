#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int zeros = 0, ones = 0;

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (c == '0')
        {
            zeros++;
        }
        else
        {
            ones++;
        }
    }

    cout << zeros << " " << ones << endl;

    return 0;
}