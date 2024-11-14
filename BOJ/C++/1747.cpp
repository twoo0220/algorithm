#include <iostream>

static bool isPrimeNumber(int number)
{
	if (number < 2)
	{
		return false;
	}

	for (int i = 2; i * i <= number; ++i)
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

	int size = 0;
	std::cin >> size;

	while (true)
	{
		if (isPrimeNumber(size))
		{
			int temp = size;
			int reverseNumber = 0;
			while (true)
			{
				reverseNumber += temp % 10;
				temp /= 10;

				if (temp == 0)
				{
					break;
				}
				reverseNumber *= 10;
			}

			if (isPrimeNumber(reverseNumber) && (reverseNumber == size))
			{
				std::cout << size;
				break;
			}
		}
		size++;
	}

	return 0;
}
