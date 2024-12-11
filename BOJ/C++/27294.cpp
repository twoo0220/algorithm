#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int a(0), b(0);
    std::cin >> a >> b;

    if (a >= 12 && a <= 16 && b < 1)
    {
        std::cout << 320;
    }
    else
    {
        std::cout << 280;
    }

    return 0;
}