#include <iostream>
#include <math.h>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	long long a(0), b(0);
	std::cin >> a >> b;
	std::cout << ((a + b) * (std::abs(a - b) + 1)) / 2;
	return 0;
}
