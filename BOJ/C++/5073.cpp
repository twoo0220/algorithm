#include <iostream>
#include <math.h>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	while (true)
	{
		int a(0), b(0), c(0);
		std::cin >> a >> b >> c;

		if ((a == 0) && (b == 0) && (c == 0))
		{
			break;
		}

		int sum = a + b + c;
		int max = a;
		if (b > max) max = b;
		if (c > max) max = c;

		if (sum <= 2 * max)
		{
			std::cout << "Invalid\n";
		}
		else if ((a == b) && (b == c))
		{
			std::cout << "Equilateral\n";
		}
		else if ((a == b) || (b == c) || (a == c))
		{
			std::cout << "Isosceles\n";
		}
		else
		{
			std::cout << "Scalene\n";
		}
	}

	return 0;
}
