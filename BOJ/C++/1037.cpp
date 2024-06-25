#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	int min(1000001), max(0);
	for (int i = 0; i < count; ++i)
	{
		int number = 0;
		std::cin >> number;
		
		if (number < min)
		{
			min = number;
		}

		if (number > max)
		{
			max = number;
		}
	}

	std::cout << static_cast<long long>(min) * static_cast<long long>(max);
	return 0;
}
