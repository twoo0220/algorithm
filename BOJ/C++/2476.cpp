#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	std::vector<int> dice(3);
	int size = 0;
	std::cin >> size;

	int max = 0;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> dice[0] >> dice[1] >> dice[2];
		std::sort(dice.begin(), dice.end());

		int result = 0;
		if (dice[0] == dice[1])
		{
			if (dice[1] == dice[2])
			{
				result = 10000 + dice[2] * 1000;
			}
			else
			{
				result = 1000 + dice[1] * 100;
			}
		}
		else
		{
			if (dice[1] == dice[2])
			{
				result = 1000 + dice[2] * 100;
			}
			else
			{
				result = dice[2] * 100;
			}
		}

		if (result > max)
		{
			max = result;
		}
	}

	std::cout << max;
	return 0;
}
