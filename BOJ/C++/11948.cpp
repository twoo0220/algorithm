#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int sum1(0), sum2(0), min(101);
	for (int i = 0; i < 4; ++i)
	{
		int score = 0;
		std::cin >> score;

		sum1 += score;

		if (min >= score)
		{
			min = score;
		}
	}

	sum1 -= min;

	std::cin >> sum2;
	std::cin >> min;
	sum2 = sum2 > min ? sum2 : min;

	std::cout << (sum1 + sum2);

	return 0;
}
