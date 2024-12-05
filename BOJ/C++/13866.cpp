#include <iostream>
#include <math.h>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int a(0), b(0), c(0), d(0);
    std::cin >> a >> b >> c >> d;
    std::cout << std::abs(a + d - b - c);

    return 0;
}