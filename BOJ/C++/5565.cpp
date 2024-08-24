#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int total(0), sum(0);
	std::cin >> total;

	for (int i = 0; i < 9; ++i)
	{
		int temp = 0;
		std::cin >> temp;
		sum += temp;
	}

	std::cout << (total - sum);

	return 0;
}
