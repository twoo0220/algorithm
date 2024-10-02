#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int sum(0), min(101);
		for (int j = 0; j < 7; ++j)
		{
			int number = 0;
			std::cin >> number;

			if (number % 2 == 0)
			{
				sum += number;
				if (min > number)
				{
					min = number;
				}
			}
		}

		std::cout << sum << " " << min << "\n";
	}

	return 0;
}
