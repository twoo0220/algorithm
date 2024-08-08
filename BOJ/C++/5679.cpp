#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	while (true)
	{
		int number = 0;
		std::cin >> number;

		if (number == 0)
		{
			break;
		}

		int max = number;
		
		while (number != 1)
		{
			if (number % 2 == 0)
			{
				number = number / 2;
			}
			else
			{
				number = 3 * number + 1;
			}
			
			if (number > max)
			{
				max = number;
			}
		}
		std::cout << max << '\n';
	}

	return 0;
}
