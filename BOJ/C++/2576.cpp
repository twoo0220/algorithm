#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int min = 100;
	int max = 0;
	for (int i = 0; i < 7; ++i)
	{
		int number = 0;
		std::cin >> number;
		if (number % 2 != 0)
		{
			max += number;
			if (number < min)
			{
				min = number;
			}
		}
	}

	if (max == 0)
	{
		std::cout << -1;
	}
	else
	{
		std::cout << max << "\n" << min;
	}

	return 0;
}
