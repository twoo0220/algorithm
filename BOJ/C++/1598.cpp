#include <iostream>
#include <math.h>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int a(0), b(0);
	std::cin >> a >> b;
	std::cout << std::abs((a - 1) / 4 - (b - 1) / 4) + std::abs((a - 1) % 4 - (b - 1) % 4);
	
	return 0;
}