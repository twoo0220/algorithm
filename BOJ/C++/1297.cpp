#include <iostream>
#include <math.h>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	double length(0), h(0), w(0);
	std::cin >> length >> h >> w;

	double height = std::sqrt(((length * length) * (h * h)) / ((h * h) + (w * w)));
	double width = height * w / h;

	std::cout << static_cast<int>(height) << ' ' << static_cast<int>(width);

	return 0;
}
