#include <iostream>

int main()
{
	int size(0);
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		int j = 0;
		for (; j < i; ++j)
		{
			std::cout << ' ';
		}
		for (; j < size; ++j)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}

	return 0;
}
