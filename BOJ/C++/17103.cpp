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

	int count = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int number = 0;
		std::cin >> number;

		int result = 0;
		for (int j = 2; j <= number / 2; ++j)
		{
			int index = number - j;

			if (!primeBool[j] && !primeBool[index])
			{
				result++;
			}
		}
		std::cout << result << "\n";
	}

	delete[] primeBool;
	return 0;
}
