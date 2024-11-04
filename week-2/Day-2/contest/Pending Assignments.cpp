#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int x, y, z;
        std::cin >> x >> y >> z;

        std::cout << ((x * y) <= (z * 60 * 24) ? "YES" : "NO") << '\n';
    }

    return 0;
}