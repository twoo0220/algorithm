#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	int score(0), result(0);
	for (int i = 0; i < count; ++i)
	{
		int OX = 0;
		std::cin >> OX;
		
		if (OX == 1)
		{
			score++;
			result += score;
		}
		else
		{
			score = 0;
		}
	}

	std::cout << result;
	return 0;
}
