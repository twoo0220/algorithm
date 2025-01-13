#include <iostream>
#include <math.h>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int width(0), height(0), x(0), y(0), time(0);
    std::cin >> width >> height >> x >> y >> time;
    std::cout << width - std::abs(width - (x + time) % (2 * width)) << " "
        << height - std::abs(height - (y + time) % (2 * height));

    return 0;
}
