#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	double a(0), b(0), c(0);
	std::cin >> a >> b >> c;

	if (b > c)
	{
		std::cout << static_cast<int>(a * b / c);
	}
	else
	{
		std::cout << static_cast<int>(a / b * c);
	}

	return 0;
}
