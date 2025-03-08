#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		int number = 0;
		std::cin >> number;

		int sum = number;
		int reverseNumber = 0;
		while (true)
		{
			int temp = number % 10;
			reverseNumber += temp;
			number /= 10;

			if (number == 0)
			{
				break;
			}

			reverseNumber *= 10;
		}

		sum += reverseNumber;
		number = sum;
		reverseNumber = 0;
		while (true)
		{
			int temp = number % 10;
			reverseNumber += temp;
			number /= 10;

			if (number == 0)
			{
				break;
			}

			reverseNumber *= 10;
		}

		if (sum == reverseNumber)
		{
			std::cout << "YES\n";
		}
		else
		{
			std::cout << "NO\n";
		}
	}

	return 0;
}
