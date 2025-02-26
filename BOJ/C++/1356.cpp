#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int number(0), left(1), right(1);
	bool bCheck = false;
	std::cin >> number;

	right = number % 10;
	number /= 10;

	while (number != 0)
	{
		int tempNumber = number;
		left = tempNumber % 10;
		tempNumber /= 10;

		while (tempNumber != 0)
		{
			left *= tempNumber % 10;
			tempNumber /= 10;
		}

		if (left == right)
		{
			bCheck = true;
			break;
		}

		right *= number % 10;
		number /= 10;
	}

	if (bCheck)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
	return 0;
}
