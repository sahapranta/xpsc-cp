#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 12, b = 10;

    // AND OPERATION
    cout << "a & b = " << (a & b) << '\n';

    // OR OPERATION
    cout << "a | b = " << (a | b) << '\n';

    // XOR OPERATION
    cout << "a ^ b = " << (a ^ b) << '\n';

    // XOR OPERATION
    cout << "~a = " << (~a) << '\n';

    // LEFT SHIFT OPERATION
    int left = 1 << 5;
    cout << "LEFT SHIFT of  1 << 5 = " << left << '\n';

    // RIGHT SHIFT OPERATION
    cout << "RIGHT SHIFT of 32 >> 2 = " << (32 >> 2) << '\n';

    return 0;
}