#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count[9]{};
	int number(0), max(0);
	std::cin >> number;

	while (number > 0)
	{
		int temp = number % 10;
		number /= 10;

		if (temp == 9)
		{
			count[6]++;
		}
		else
		{
			count[temp]++;
		}
	}

	count[6] = (count[6] + 1) / 2;
	max = count[0];
	for (int i = 1; i < 9; ++i)
	{
		if (max < count[i])
		{
			max = count[i];
		}
	}
	std::cout << max;

	return 0;
}
