#include <iostream>
#include <math.h>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	double x(0), y(0);
	std::cin >> x >> y;
	long long result = static_cast<long long>(y * 100.0 / x);

	if (result < 99)
	{
		result = static_cast<long long>(std::ceil(((100.0 * y) - (x * (result + 1.0))) / (result - 99.0)));
	}
	else
	{
		result = -1;
	}

	std::cout << result;
	return 0;
}
