#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int average = 0;
	for (int i = 0; i < 5; ++i)
	{
		int score = 0;
		std::cin >> score;
		if (score < 40)
		{
			score = 40;
		}
		average += score;
	}

	std::cout << (average / 5);
	return 0;
}
