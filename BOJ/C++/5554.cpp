#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int min(0), sec(0), sum(0);
	for (int i = 0; i < 4; ++i)
	{
		int temp = 0;
		std::cin >> temp;
		sum += temp;
	}

	min = sum / 60;
	sec = sum - (min * 60);
	std::cout << min << '\n' << sec;
	return 0;
}
