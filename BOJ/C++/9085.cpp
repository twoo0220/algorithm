#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		int count(0), sum(0);
		std::cin >> count;
		for (int j = 0; j < count; ++j)
		{
			int number = 0;
			std::cin >> number;
			sum += number;
		}

		std::cout << sum << "\n";
	}

	return 0;
}
