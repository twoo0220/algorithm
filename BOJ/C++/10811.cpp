#include <iostream>

int main()
{
	int size(0), count(0);
	std::cin >> size >> count;

	int* basket = new int[size];
	for (int i = 0; i < size; ++i)
	{
		basket[i] = i + 1;
	}

	for (int i = 0; i < count; ++i)
	{
		int start(0), end(0);
		std::cin >> start >> end;

		int center = (--start + --end) / 2;
		for (int j = 0; start + j <= center; ++j)
		{
			int temp = basket[j + start];
			basket[j + start] = basket[end - j];
			basket[end - j] = temp;
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