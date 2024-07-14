#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	for (int i = 1; i <= size; ++i)
	{
		for (int j = 0; j < size - i; ++j)
		{
			std::cout << " ";
		}

		for (int j = 0; j < i; ++j)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}

	for (int i = 1; i <= size; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			std::cout << " ";
		}

		for (int j = 0; j < size - i; ++j)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
	return 0;
}
