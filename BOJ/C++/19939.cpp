#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int n(0), k(0);
	std::cin >> n >> k;
	n -= k * (k + 1) / 2;

	if (n < 0)
	{
		std::cout << -1;
	}
	else
	{
		if (n % k == 0)
		{
			std::cout << k - 1;
		}
		else
		{
			std::cout << k;
		}
	}

	return 0;
}
