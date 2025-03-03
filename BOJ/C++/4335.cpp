#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int max = 11;
	int min = 0;
	while (true)
	{
		int number = 0;
		std::cin >> number;

		if (number == 0)
		{
			break;
		}

		std::string order;
		std::cin >> order >> order;

		if (order == "high")
		{
			if (max > number)
			{
				max = number;
			}
		}
		else if (order == "low")
		{
			if (number > min)
			{
				min = number;
			}
		}
		else // "right on"
		{
			if ((number >= max) || (number <= min))
			{
				std::cout << "Stan is dishonest\n";
			}
			else
			{
				std::cout << "Stan may be honest\n";
			}
			max = 11;
			min = 0;
		}
	}

	return 0;
}
