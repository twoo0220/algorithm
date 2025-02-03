#include <iostream>
#include <math.h>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int a(0), b(0), c(0), d(0), e(0);
	std::cin >> a >> b >> c >> d >> e;

	if (a < 0)
	{
		std::cout << std::abs(a) * c + d + b * e;
	}
	else
	{
		std::cout << (b - a) * e;
	}

	return 0;
}
