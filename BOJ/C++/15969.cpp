#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size; 

	int max(-1), min(1001);
	for (int i = 0; i < size; ++i)
	{
		int score = 0;
		std::cin >> score;

		if (score > max) max = score;
		if (score < min) min = score;
	}

	std::cout << (max - min);
	return 0;
}
