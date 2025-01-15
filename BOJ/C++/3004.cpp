#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int count = 0;
    std::cin >> count;
    std::cout << ((count / 2) + 1) * ((count - count / 2) + 1);

    return 0;
}
