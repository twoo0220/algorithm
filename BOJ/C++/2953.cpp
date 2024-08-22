#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int index(0), max(0);
	for (int i = 0; i < 5; ++i)
	{
		int result = 0;
		for (int j = 0; j < 4; ++j)
		{
			int score = 0;
			std::cin >> score;
			result += score;
		}

		if (result > max)
		{
			index = i;
			max = result;
		}
	}

	std::cout << (index + 1) << ' ' << max;

	return 0;
}
