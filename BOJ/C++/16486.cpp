#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	double d1(0), d2(0);
	std::cin >> d1 >> d2;

	double pi = 3.141592;
	std::cout.precision(7);
	std::cout << (2 * pi * d2) + (2 * d1);

	return 0;
}
