#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int price(0), count(0), money(0);
	std::cin >> price >> count >> money;

	price *= count;
	int deficit = price - money;

	if (deficit > 0)
	{
		std::cout << deficit;
	}
	else
	{
		std::cout << 0;
	}

	return 0;
}
