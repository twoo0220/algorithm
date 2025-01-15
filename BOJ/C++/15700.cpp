#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    long long n(0), m(0);
    std::cin >> n >> m;
    std::cout << (n * m) / 2;

    return 0;
}
