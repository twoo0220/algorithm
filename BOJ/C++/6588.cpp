#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);
	bool* primeBool = new bool[1000001] {};

	primeBool[0] = true;
	primeBool[1] = true;

	for (int i = 2; i * i <= 1000000; ++i)
	{
		if (!primeBool[i])
		{
			for (int j = i * i; j <= 1000000; j += i)
			{
				primeBool[j] = true;
			}
		}
	}

	while (true)
	{
		int number = 0;
		std::cin >> number;

		if (number == 0) break;

		bool bCheck = true;
		for (int i = 3; i <= number / 2; ++i)
		{
			if (i % 2 != 0)
			{
				int index = number - i;
		
				if (!primeBool[i] && !primeBool[index])
				{
					std::cout << number << " = " << i << " + " << index << "\n";
					bCheck = false;
					break;
				}
			}
		}

		if (bCheck)
		{
			std::cout << "Goldbach's conjecture is wrong.\n";
		}
	}

	delete[] primeBool;
	return 0;
}
