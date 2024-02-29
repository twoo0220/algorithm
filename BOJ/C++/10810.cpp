#include <iostream>

int main()
{
	int size(0), count(0);
	std::cin >> size >> count;

	int* basket = new int[size] {};
	for (int i = 0; i < count; ++i)
	{
		int start(0), end(0), number(0);
		std::cin >> start >> end >> number;

		for (int j = start - 1; j < end; ++j)
		{
			basket[j] = number;
		}
	}

	for (int i = 0; i < size; ++i)
	{
		std::cout << basket[i] << " ";
	}

	delete[] basket;
	basket = nullptr;

	return 0;
}
