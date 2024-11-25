#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	long long a(0), b(0), c(0);
	std::cin >> a >> b >> c;

	if ((a + b - c - c) >= 0)
	{
		std::cout << (a + b - c - c);
	}
	else
	{
		std::cout << (a + b);
	}

	return 0;
}
