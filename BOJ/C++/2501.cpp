#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int number(0), index(1), value(0), result(0);
	std::cin >> number >> index;

	//12, 1 2 3 4 6 12
	for (int i = 1; i <= number; ++i)
	{
		if (number % i == 0)
		{
			value++;
			if (value == index)
			{
				result = i;
				break;
			}
		}
	}

	if (value < index)
	{
		std::cout << 0;
	}
	else
	{
		std::cout << result;
	}
	return 0;
}
