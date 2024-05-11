#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size - 1 - i; ++j)
		{
			std::cout << " ";
		}

		for (int j = 0; j < 2 * i + 1; ++j)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
	return 0;
}
