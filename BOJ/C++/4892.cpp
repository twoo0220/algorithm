#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int index = 1;
	while (true)
	{
		int number = 0;
		std::cin >> number;

		if (number == 0)
		{
			break;
		}

		std::cout << index << ". ";
		number *= 3;
		if (number % 2 == 0)
		{
			std::cout << "even ";
			number /= 2;
		}
		else
		{
			std::cout << "odd ";
			number = (number + 1) / 2;
		}

		number /= 3;
		std::cout << number << '\n';
		index++;
	}
	return 0;
}
