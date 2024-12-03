#include <bits/stdc++.h>

using namespace std;

// Check kth bit on or off
int kth_bit_on_or_off(int n, int k)
{
    return (n >> k) & 1;
}

// print on or off bits
void print_on_or_off_bits(int n)
{
    bool found = false;
    for (int k = 30; k >= 0; k--)
    {
        if (kth_bit_on_or_off(n, k))
        {
            found = true;
            cout << 1 << ' ';
        }
        else if (found)
        {
            cout << 0 << ' ';
        }
    }

    cout << '\n';
}

// turn on kth bits
int turn_on_kth_bit(int n, int k)
{
    return n | (1 << k);
}

// turn off kth bits
int turn_off_kth_bit(int n, int k)
{
    return n & (~(1 << k));
}

// toggle kth bit
int toggle_kth_bit(int n, int k)
{
    return n ^ (1 << k);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    print_on_or_off_bits(19);
    print_on_or_off_bits(turn_on_kth_bit(19, 2));
    print_on_or_off_bits(turn_off_kth_bit(19, 1));
    print_on_or_off_bits(toggle_kth_bit(19, 3));

    return 0;
}