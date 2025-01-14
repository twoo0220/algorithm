#include <iostream>
#include <math.h>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int n(0), w(0), h(0), l(0);
    std::cin >> n >> w >> h >> l;
	std::cout << std::min(n, (w / l) * (h / l));

    return 0;
}
