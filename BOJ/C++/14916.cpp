#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int number = 0;
	std::cin >> number;

	int count = 0;
	if ((number % 5) == 0)
	{
		count = number / 5;
	}
	else
	{
		while (number > 0)
		{
			number -= 2;
			count++;
			if ((number % 5) == 0)
			{
				count += number / 5;
				break;
			}
		}
	}
	if (number < 0)
	{
		count = -1;
	}

	std::cout << count;
	return 0;
}
