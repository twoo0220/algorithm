#include <iostream>
#include <math.h>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;
	std::cout << std::pow(2, size);
	return 0;
}
