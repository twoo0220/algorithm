#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	long long size = 0;
	std::cin >> size;
	std::vector<long long> length(size - 1);
	std::vector<long long> price(size);
	
	for (int i = 0; i < size - 1; ++i)
	{
		std::cin >> length[i];
	}

	for (int i = 0; i < size; ++i)
	{
		std::cin >> price[i];
	}

	long long result = length[0] * price[0];
	long long minPrice = price[0];

	for (int i = 1; i < size - 1; ++i)
	{
		if (minPrice > price[i])
		{
			minPrice = price[i];
		}

		result += length[i] * minPrice;
	}

	std::cout << result;
	return 0;
}
