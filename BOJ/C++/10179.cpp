#include <iostream>
#include <iomanip>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		double price = 0.0;
		std::cin >> price;
		std::cout << std::fixed << std::setprecision(2) << "$" << price * 0.8 << '\n';
	}

	return 0;
}
