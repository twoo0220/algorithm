#include <iostream>

int main()
{
	int size(0);
	std::cin >> size;

	for (int i = 1; i <= size; ++i)
	{
		for (int j = size - i; j > 0; --j)
		{
			std::cout << " ";
		}
		for (int j = 2 * i - 1; j > 0; --j)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}

	for (int i = 1; i < size; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			std::cout << " ";
		}
		for (int j = 2 * (size - i) - 1; j > 0; --j)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
	return 0;
}
