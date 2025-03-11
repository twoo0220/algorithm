#include <iostream>
#include <iomanip>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	float w(0), h(0);
	std::cin >> w >> h;
	std::cout << std::fixed << std::setprecision(1) << w * h / 2;

	return 0;
}
