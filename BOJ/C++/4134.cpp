#include <iostream>

static bool isPrimeNumber(long long number)
{
	if (number < 2)
	{
		return false;
	}

	for (long long i = 2; i * i <= number; ++i)
	{
		if ((number % i) == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	long long size(0), number(0);
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		std::cin >> number;

		while (true)
		{
			if (isPrimeNumber(number))
			{
				break;
			}
			number++;
		}
		std::cout << number << "\n";
	}

	return 0;
}
