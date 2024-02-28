#include <iostream>

int main()
{
	int receipt = 0;
	std::cin >> receipt;

	int type = 0;
	std::cin >> type;

	int total = 0;
	for (int i = 0; i < type; ++i)
	{
		int price, count;
		std::cin >> price >> count;
		total += price * count;
	}

	if (receipt == total)
	{
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}

	return 0;
}
