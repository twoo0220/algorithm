#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	int length = size * 2 - 1;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < i + 1; ++j)
		{
			std::cout << "*";
		}

		for (int j = 1; j < length - 2 * i; ++j)
		{
			std::cout << " ";
		}

		for (int j = 0; j < i + 1; ++j)
		{
			std::cout << "*";
		}

		std::cout << "\n";
	}

	for (int i = size - 2; i >= 0; --i)
	{
		for (int j = 0; j < i + 1; ++j)
		{
			std::cout << "*";
		}

		for (int j = 1; j < length - 2 * i; ++j)
		{
			std::cout << " ";
		}

		for (int j = 0; j < i + 1; ++j)
		{
			std::cout << "*";
		}

		std::cout << "\n";
	}

	return 0;
}
